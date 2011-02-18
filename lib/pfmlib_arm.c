/*
 * pfmlib_arm.c : 	support for ARM chips
 * 
 * Copyright (c) 2010 University of Tennessee
 * Contributed by Vince Weaver <vweaver1@utk.edu>
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
 * CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
 * OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 * 
 */

#include <sys/types.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/* private headers */
#include "pfmlib_priv.h"			/* library private */
#include "pfmlib_arm_priv.h"

pfm_arm_config_t pfm_arm_cfg;

#ifdef CONFIG_PFMLIB_OS_LINUX
/*
 * getl(): our own equivalent to GNU getline() extension.
 * This avoids a dependency on having a C library with
 * support for getline().
 */
static int
getl(char **buffer, size_t *len, FILE *fp)
{
#define	GETL_DFL_LEN	32
	char *b;
	int c, i = 0;
	size_t maxsz, maxi, d;

	if (!len || !fp || !buffer)
		return -1;

	b = *buffer;

	if (!b)
		*len = 0;

	maxsz = *len;
	maxi = maxsz - 2;

	while ((c = fgetc(fp)) != EOF) {
		if (maxsz == 0 || i == maxi) {
			if (maxsz == 0)
				maxsz = GETL_DFL_LEN;
			else
				maxsz <<= 1;

			if (*buffer)
				d = &b[i] - *buffer;
			else
				d = 0;

			*buffer = realloc(*buffer, maxsz);
			if (!*buffer)
				return -1;

			b = *buffer + d;
			maxi = maxsz - d - 2;
			i = 0;
			*len = maxsz;
		}
		b[i++] = c;
		if (c == '\n')
			break;
	}
	b[i] = '\0';
	return c != EOF ? 0 : -1;
}

/*
 * helper function to retrieve one value from /proc/cpuinfo
 * for internal libpfm use only
 * attr: the attribute (line) to look for
 * ret_buf: a buffer to store the value of the attribute (as a string)
 * maxlen : number of bytes of capacity in ret_buf
 *
 * ret_buf is null terminated.
 *
 * Return:
 * 	0 : attribute found, ret_buf populated
 * 	-1: attribute not found
 */

static int
pfmlib_getcpuinfo_attr(const char *attr, char *ret_buf, size_t maxlen)
{
	FILE *fp = NULL;
	int ret = -1;
	size_t attr_len, buf_len = 0;
	char *p, *value = NULL;
	char *buffer = NULL;

	if (attr == NULL || ret_buf == NULL || maxlen < 1)
		return -1;

	attr_len = strlen(attr);

	fp = fopen("/proc/cpuinfo", "r");
	if (fp == NULL)
		return -1;

	while(getl(&buffer, &buf_len, fp) != -1){

		/* skip  blank lines */
		if (*buffer == '\n')
			continue;

		p = strchr(buffer, ':');
		if (p == NULL)
			goto error;

		/*
		 * p+2: +1 = space, +2= firt character
		 * strlen()-1 gets rid of \n
		 */
		*p = '\0';
		value = p+2;

		value[strlen(value)-1] = '\0';

		if (!strncmp(attr, buffer, attr_len))
			break;
	}
	strncpy(ret_buf, value, maxlen-1);
	ret_buf[maxlen-1] = '\0';
	ret = 0;
error:
	free(buffer);
	fclose(fp);
	return ret;
}
#else
static int
pfmlib_getcpuinfo_attr(const char *attr, char *ret_buf, size_t maxlen)
{
	return -1;
}
#endif

static void
pfm_arm_display_reg(pfm_arm_reg_t reg, char *fstr)
{
	__pfm_vbprintf("[0x%"PRIx64"] %s\n", reg.val, fstr);
}

int
pfm_arm_detect(void *this)
{

	int ret;
	char buffer[128];

	ret = pfmlib_getcpuinfo_attr("CPU implementer", buffer, sizeof(buffer));
	if (ret == -1)
		return PFM_ERR_NOTSUPP;

        pfm_arm_cfg.implementer = strtol(buffer, NULL, 16);
   
   
	ret = pfmlib_getcpuinfo_attr("CPU part", buffer, sizeof(buffer));
	if (ret == -1)
		return PFM_ERR_NOTSUPP;

	pfm_arm_cfg.part = strtol(buffer, NULL, 16);

	ret = pfmlib_getcpuinfo_attr("CPU architecture", buffer, sizeof(buffer));
	if (ret == -1)
		return PFM_ERR_NOTSUPP;

	pfm_arm_cfg.architecture = strtol(buffer, NULL, 16);
   
	return PFM_SUCCESS;
}

#ifdef __linux__
static int
pfm_arm_perf_encode(void *this, pfmlib_event_desc_t *e)
{
	struct perf_event_attr *attr = e->os_data;

	attr->type = PERF_TYPE_RAW;
	attr->config = e->codes[0];

	return PFM_SUCCESS;
}
#else
static inline int
pfm_arm_perf_encode(void *this, pfmlib_event_desc_t *e)
{
	return PFM_ERR_NOTSUPP;
}
#endif

static int
pfm_arm_os_encode(void *this, pfmlib_event_desc_t *e)
{
	switch (e->osid) {
	case PFM_OS_PERF_EVENT:
	case PFM_OS_PERF_EVENT_EXT:
		return pfm_arm_perf_encode(this, e);
	case PFM_OS_NONE:
		break;
	default:
		return PFM_ERR_NOTSUPP;
	}
	return PFM_SUCCESS;
}

int
pfm_arm_get_encoding(void *this, pfmlib_event_desc_t *e)
{

	const arm_entry_t *pe = this_pe(this);
	pfm_arm_reg_t reg;

	reg.val = pe[e->event].code;
  
	e->codes[0] = reg.val;
	e->count    = 1;

        evt_strcat(e->fstr, "%s", pe[e->event].name);

        pfm_arm_display_reg(reg, e->fstr);
   
	return pfm_arm_os_encode(this, e);
}

int
pfm_arm_get_event_first(void *this)
{
	return 0;
}

int
pfm_arm_get_event_next(void *this, int idx)
{
	pfmlib_pmu_t *p = this;

	if (idx >= (p->pme_count-1))
		return -1;

	return idx+1;
}

int
pfm_arm_event_is_valid(void *this, int pidx)
{
	pfmlib_pmu_t *p = this;
	return pidx >= 0 && pidx < p->pme_count;
}

int
pfm_arm_validate_table(void *this, FILE *fp)
{

	pfmlib_pmu_t *pmu = this;
	const arm_entry_t *pe = this_pe(this);
	int i, error = 0;

	for(i=0; i < pmu->pme_count; i++) {
		if (!pe[i].name) {
			fprintf(fp, "pmu: %s event%d: :: no name (prev event was %s)\n", pmu->name, i,
			i > 1 ? pe[i-1].name : "??");
			error++;
		}
		if (!pe[i].desc) {
			fprintf(fp, "pmu: %s event%d: %s :: no description\n", pmu->name, i, pe[i].name);
			error++;
		}
	}
	return error ? PFM_ERR_INVAL : PFM_SUCCESS;
}

int
pfm_arm_get_event_attr_info(void *this, int pidx, int attr_idx, pfm_event_attr_info_t *info)
{
	return PFM_ERR_INVAL;
}

int
pfm_arm_get_event_nattrs(void *this, int pidx)
{
	return 0;
}

int
pfm_arm_get_event_info(void *this, int idx, pfm_event_info_t *info)
{
	pfmlib_pmu_t *pmu = this;
	const arm_entry_t *pe = this_pe(this);

	info->name  = pe[idx].name;
	info->desc  = pe[idx].desc;
	info->code  = pe[idx].code;
	info->equiv = NULL;
	info->idx   = idx; /* private index */
	info->pmu   = pmu->pmu;
	info->is_precise = 0;

	/* no attributes defined for ARM yet */
	info->nattrs  = 0;

	return PFM_SUCCESS;
}

#ifdef __linux__
void
pfm_arm_perf_validate_pattrs(void *this, pfmlib_event_desc_t *e)
{
	int i, compact;

	for (i=0; i < e->npattrs; i++) {
		compact = 0;

		/* umasks never conflict */
		if (e->pattrs[i].type == PFM_ATTR_UMASK)
			continue;

		/*
		 * with perf_events, u and k are handled at the OS level
		 * via attr.exclude_* fields
		 */
		if (e->pattrs[i].ctrl == PFM_ATTR_CTRL_PMU) {
#if 0
			if (e->pattrs[i].idx == SPARC_ATTR_U
					|| e->pattrs[i].idx == SPARC_ATTR_K
					|| e->pattrs[i].idx == SPARC_ATTR_H)
				compact = 1;
#endif
		}

		if (e->pattrs[i].ctrl == PFM_ATTR_CTRL_PERF_EVENT) {

			/* No precise mode on ARM */
			if (e->pattrs[i].idx == PERF_ATTR_PR)
				compact = 1;
		}

		if (compact) {
			pfmlib_compact_pattrs(e, i);
			i--;
		}
	}
}
#endif
