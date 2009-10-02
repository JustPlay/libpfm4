/****************************/
/* THIS IS OPEN SOURCE CODE */
/****************************/

#ifndef __PPC970MP_EVENTS_H__
#define __PPC970MP_EVENTS_H__

/*
* File:    ppc970mp_events.h
* CVS:
* Author:  Corey Ashford
*          cjashfor@us.ibm.com
* Mods:    <your name here>
*          <your email address>
*
* (C) Copyright IBM Corporation, 2007.  All Rights Reserved.
* Contributed by Corey Ashford <cjashfor.ibm.com>
*
* Note: This code was automatically generated and should not be modified by
* hand.
*
*/
static pme_ppc970mp_entry_t ppc970mp_pe[] = {
#define PPC970MP_PME_PM_LSU_REJECT_RELOAD_CDF 0
	[ PPC970MP_PME_PM_LSU_REJECT_RELOAD_CDF ] = {
		.pme_name = "PM_LSU_REJECT_RELOAD_CDF",
		.pme_short_desc = "LSU reject due to reload CDF or tag update collision",
		.pme_long_desc = "LSU reject due to reload CDF or tag update collision",
		.pme_event_ids = { -1, -1, -1, -1, -1, 66, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_LSU_SRQ_INST_VALID 1
	[ PPC970MP_PME_PM_MRK_LSU_SRQ_INST_VALID ] = {
		.pme_name = "PM_MRK_LSU_SRQ_INST_VALID",
		.pme_short_desc = "Marked instruction valid in SRQ",
		.pme_long_desc = "This signal is asserted every cycle when a marked request is resident in the Store Request Queue",
		.pme_event_ids = { -1, -1, 61, 61, -1, -1, 60, 61 },
		.pme_group_vector = {
			0x0000000800000000ULL }
	},
#define PPC970MP_PME_PM_FPU1_SINGLE 2
	[ PPC970MP_PME_PM_FPU1_SINGLE ] = {
		.pme_name = "PM_FPU1_SINGLE",
		.pme_short_desc = "FPU1 executed single precision instruction",
		.pme_long_desc = "This signal is active for one cycle when fp1 is executing single precision instruction.",
		.pme_event_ids = { 23, 22, -1, -1, 23, 22, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_FPU0_STALL3 3
	[ PPC970MP_PME_PM_FPU0_STALL3 ] = {
		.pme_name = "PM_FPU0_STALL3",
		.pme_short_desc = "FPU0 stalled in pipe3",
		.pme_long_desc = "This signal indicates that fp0 has generated a stall in pipe3 due to overflow, underflow, massive cancel, convert to integer (sometimes), or convert from integer (always). This signal is active during the entire duration of the stall. ",
		.pme_event_ids = { 15, 14, -1, -1, 15, 14, -1, -1 },
		.pme_group_vector = {
			0x0000000000002000ULL }
	},
#define PPC970MP_PME_PM_TB_BIT_TRANS 4
	[ PPC970MP_PME_PM_TB_BIT_TRANS ] = {
		.pme_name = "PM_TB_BIT_TRANS",
		.pme_short_desc = "Time Base bit transition",
		.pme_long_desc = "When the selected time base bit (as specified in MMCR0[TBSEL])transitions from 0 to 1 ",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, -1, 67 },
		.pme_group_vector = {
			0x0000000000080000ULL }
	},
#define PPC970MP_PME_PM_GPR_MAP_FULL_CYC 5
	[ PPC970MP_PME_PM_GPR_MAP_FULL_CYC ] = {
		.pme_name = "PM_GPR_MAP_FULL_CYC",
		.pme_short_desc = "Cycles GPR mapper full",
		.pme_long_desc = "The ISU sends a signal indicating that the gpr mapper cannot accept any more groups. Dispatch is stopped. Note: this condition indicates that a pool of mapper is full but the entire mapper may not be.",
		.pme_event_ids = { -1, -1, 27, 28, -1, -1, 27, 27 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_ST_CMPL 6
	[ PPC970MP_PME_PM_MRK_ST_CMPL ] = {
		.pme_name = "PM_MRK_ST_CMPL",
		.pme_short_desc = "Marked store instruction completed",
		.pme_long_desc = "A sampled store has completed (data home)",
		.pme_event_ids = { 78, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000800000000ULL }
	},
#define PPC970MP_PME_PM_FPU0_STF 7
	[ PPC970MP_PME_PM_FPU0_STF ] = {
		.pme_name = "PM_FPU0_STF",
		.pme_short_desc = "FPU0 executed store instruction",
		.pme_long_desc = "This signal is active for one cycle when fp0 is executing a store instruction.",
		.pme_event_ids = { 16, 15, -1, -1, 16, 15, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_FPU1_FMA 8
	[ PPC970MP_PME_PM_FPU1_FMA ] = {
		.pme_name = "PM_FPU1_FMA",
		.pme_short_desc = "FPU1 executed multiply-add instruction",
		.pme_long_desc = "This signal is active for one cycle when fp1 is executing multiply-add kind of instruction. This could be fmadd*, fnmadd*, fmsub*, fnmsub* where XYZ* means XYZ, XYZs, XYZ., XYZs.",
		.pme_event_ids = { 20, 19, -1, -1, 20, 19, -1, -1 },
		.pme_group_vector = {
			0x0000000000000400ULL }
	},
#define PPC970MP_PME_PM_LSU1_FLUSH_ULD 9
	[ PPC970MP_PME_PM_LSU1_FLUSH_ULD ] = {
		.pme_name = "PM_LSU1_FLUSH_ULD",
		.pme_short_desc = "LSU1 unaligned load flushes",
		.pme_long_desc = "A load was flushed from unit 1 because it was unaligned (crossed a 64byte boundary, or 32 byte if it missed the L1)",
		.pme_event_ids = { 57, 56, -1, -1, 58, 55, -1, -1 },
		.pme_group_vector = {
			0x0000000000008000ULL }
	},
#define PPC970MP_PME_PM_MRK_INST_FIN 10
	[ PPC970MP_PME_PM_MRK_INST_FIN ] = {
		.pme_name = "PM_MRK_INST_FIN",
		.pme_short_desc = "Marked instruction finished",
		.pme_long_desc = "One of the execution units finished a marked instruction. Instructions that finish may not necessary complete",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, 50, -1 },
		.pme_group_vector = {
			0x0004000200000000ULL }
	},
#define PPC970MP_PME_PM_MRK_LSU0_FLUSH_UST 11
	[ PPC970MP_PME_PM_MRK_LSU0_FLUSH_UST ] = {
		.pme_name = "PM_MRK_LSU0_FLUSH_UST",
		.pme_short_desc = "LSU0 marked unaligned store flushes",
		.pme_long_desc = "A marked store was flushed from unit 0 because it was unaligned",
		.pme_event_ids = { -1, -1, 56, 56, -1, -1, 55, 55 },
		.pme_group_vector = {
			0x0000001000000000ULL }
	},
#define PPC970MP_PME_PM_LSU_LRQ_S0_ALLOC 12
	[ PPC970MP_PME_PM_LSU_LRQ_S0_ALLOC ] = {
		.pme_name = "PM_LSU_LRQ_S0_ALLOC",
		.pme_short_desc = "LRQ slot 0 allocated",
		.pme_long_desc = "LRQ slot zero was allocated",
		.pme_event_ids = { 65, 65, -1, -1, 66, 64, -1, -1 },
		.pme_group_vector = {
			0x0000000010000000ULL }
	},
#define PPC970MP_PME_PM_FPU_FDIV 13
	[ PPC970MP_PME_PM_FPU_FDIV ] = {
		.pme_name = "PM_FPU_FDIV",
		.pme_short_desc = "FPU executed FDIV instruction",
		.pme_long_desc = "This signal is active for one cycle at the end of the microcode executed when FPU is executing a divide instruction. This could be fdiv, fdivs, fdiv. fdivs. Combined Unit 0 + Unit 1",
		.pme_event_ids = { 27, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000100000900010ULL }
	},
#define PPC970MP_PME_PM_FPU0_FULL_CYC 14
	[ PPC970MP_PME_PM_FPU0_FULL_CYC ] = {
		.pme_name = "PM_FPU0_FULL_CYC",
		.pme_short_desc = "Cycles FPU0 issue queue full",
		.pme_long_desc = "The issue queue for FPU unit 0 cannot accept any more instructions. Issue is stopped",
		.pme_event_ids = { 13, 12, -1, -1, 13, 12, -1, -1 },
		.pme_group_vector = {
			0x0000000000000080ULL }
	},
#define PPC970MP_PME_PM_FPU_SINGLE 15
	[ PPC970MP_PME_PM_FPU_SINGLE ] = {
		.pme_name = "PM_FPU_SINGLE",
		.pme_short_desc = "FPU executed single precision instruction",
		.pme_long_desc = "FPU is executing single precision instruction. Combined Unit 0 + Unit 1",
		.pme_event_ids = { -1, -1, -1, -1, 27, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_FPU0_FMA 16
	[ PPC970MP_PME_PM_FPU0_FMA ] = {
		.pme_name = "PM_FPU0_FMA",
		.pme_short_desc = "FPU0 executed multiply-add instruction",
		.pme_long_desc = "This signal is active for one cycle when fp0 is executing multiply-add kind of instruction. This could be fmadd*, fnmadd*, fmsub*, fnmsub* where XYZ* means XYZ, XYZs, XYZ., XYZs.",
		.pme_event_ids = { 11, 10, -1, -1, 11, 10, -1, -1 },
		.pme_group_vector = {
			0x0000000000000400ULL }
	},
#define PPC970MP_PME_PM_MRK_LSU1_FLUSH_ULD 17
	[ PPC970MP_PME_PM_MRK_LSU1_FLUSH_ULD ] = {
		.pme_name = "PM_MRK_LSU1_FLUSH_ULD",
		.pme_short_desc = "LSU1 marked unaligned load flushes",
		.pme_long_desc = "A marked load was flushed from unit 1 because it was unaligned (crossed a 64byte boundary, or 32 byte if it missed the L1)",
		.pme_event_ids = { -1, -1, 59, 59, -1, -1, 58, 58 },
		.pme_group_vector = {
			0x0000001000000000ULL }
	},
#define PPC970MP_PME_PM_LSU1_FLUSH_LRQ 18
	[ PPC970MP_PME_PM_LSU1_FLUSH_LRQ ] = {
		.pme_name = "PM_LSU1_FLUSH_LRQ",
		.pme_short_desc = "LSU1 LRQ flushes",
		.pme_long_desc = "A load was flushed by unit 1 because a younger load executed before an older store executed and they had overlapping data OR two loads executed out of order and they have byte overlap and there was a snoop in between to an overlapped byte.",
		.pme_event_ids = { 55, 54, -1, -1, 56, 53, -1, -1 },
		.pme_group_vector = {
			0x0000000000004000ULL }
	},
#define PPC970MP_PME_PM_DTLB_MISS 19
	[ PPC970MP_PME_PM_DTLB_MISS ] = {
		.pme_name = "PM_DTLB_MISS",
		.pme_short_desc = "Data TLB misses",
		.pme_long_desc = "A TLB miss for a data request occurred. Requests that miss the TLB may be retried until the instruction is in the next to complete group (unless HID4 is set to allow speculative tablewalks). This may result in multiple TLB misses for the same instruction.",
		.pme_event_ids = { 6, 5, -1, -1, 6, 5, -1, -1 },
		.pme_group_vector = {
			0x0000000010600000ULL }
	},
#define PPC970MP_PME_PM_CMPLU_STALL_FXU 20
	[ PPC970MP_PME_PM_CMPLU_STALL_FXU ] = {
		.pme_name = "PM_CMPLU_STALL_FXU",
		.pme_short_desc = "Completion stall caused by FXU instruction",
		.pme_long_desc = "Completion stall caused by FXU instruction",
		.pme_event_ids = { -1, -1, -1, -1, 85, -1, -1, -1 },
		.pme_group_vector = {
			0x0000080000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_ST_MISS_L1 21
	[ PPC970MP_PME_PM_MRK_ST_MISS_L1 ] = {
		.pme_name = "PM_MRK_ST_MISS_L1",
		.pme_short_desc = "Marked L1 D cache store misses",
		.pme_long_desc = "A marked store missed the dcache",
		.pme_event_ids = { 79, 75, -1, -1, 76, 76, -1, -1 },
		.pme_group_vector = {
			0x0000001000000000ULL }
	},
#define PPC970MP_PME_PM_EXT_INT 22
	[ PPC970MP_PME_PM_EXT_INT ] = {
		.pme_name = "PM_EXT_INT",
		.pme_short_desc = "External interrupts",
		.pme_long_desc = "An external interrupt occurred",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, -1, 10 },
		.pme_group_vector = {
			0x0000000000000200ULL }
	},
#define PPC970MP_PME_PM_MRK_LSU1_FLUSH_LRQ 23
	[ PPC970MP_PME_PM_MRK_LSU1_FLUSH_LRQ ] = {
		.pme_name = "PM_MRK_LSU1_FLUSH_LRQ",
		.pme_short_desc = "LSU1 marked LRQ flushes",
		.pme_long_desc = "A marked load was flushed by unit 1 because a younger load executed before an older store executed and they had overlapping data OR two loads executed out of order and they have byte overlap and there was a snoop in between to an overlapped byte.",
		.pme_event_ids = { -1, -1, 57, 57, -1, -1, 56, 56 },
		.pme_group_vector = {
			0x0000002000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_ST_GPS 24
	[ PPC970MP_PME_PM_MRK_ST_GPS ] = {
		.pme_name = "PM_MRK_ST_GPS",
		.pme_short_desc = "Marked store sent to GPS",
		.pme_long_desc = "A sampled store has been sent to the memory subsystem",
		.pme_event_ids = { -1, -1, -1, -1, -1, 75, -1, -1 },
		.pme_group_vector = {
			0x0000000800000000ULL }
	},
#define PPC970MP_PME_PM_GRP_DISP_SUCCESS 25
	[ PPC970MP_PME_PM_GRP_DISP_SUCCESS ] = {
		.pme_name = "PM_GRP_DISP_SUCCESS",
		.pme_short_desc = "Group dispatch success",
		.pme_long_desc = "Number of groups sucessfully dispatched (not rejected)",
		.pme_event_ids = { -1, -1, -1, -1, 33, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_LSU1_LDF 26
	[ PPC970MP_PME_PM_LSU1_LDF ] = {
		.pme_name = "PM_LSU1_LDF",
		.pme_short_desc = "LSU1 executed Floating Point load instruction",
		.pme_long_desc = "A floating point load was executed from LSU unit 1",
		.pme_event_ids = { -1, -1, 42, 40, -1, -1, 40, 41 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_LSU0_SRQ_STFWD 27
	[ PPC970MP_PME_PM_LSU0_SRQ_STFWD ] = {
		.pme_name = "PM_LSU0_SRQ_STFWD",
		.pme_short_desc = "LSU0 SRQ store forwarded",
		.pme_long_desc = "Data from a store instruction was forwarded to a load on unit 0",
		.pme_event_ids = { 53, 52, -1, -1, 54, 51, -1, -1 },
		.pme_group_vector = {
			0x0000000000020000ULL }
	},
#define PPC970MP_PME_PM_CR_MAP_FULL_CYC 28
	[ PPC970MP_PME_PM_CR_MAP_FULL_CYC ] = {
		.pme_name = "PM_CR_MAP_FULL_CYC",
		.pme_short_desc = "Cycles CR logical operation mapper full",
		.pme_long_desc = "The ISU sends a signal indicating that the cr mapper cannot accept any more groups. Dispatch is stopped. Note: this condition indicates that a pool of mapper is full but the entire mapper may not be.",
		.pme_event_ids = { 1, 1, -1, -1, 2, 1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000040ULL }
	},
#define PPC970MP_PME_PM_MRK_LSU0_FLUSH_ULD 29
	[ PPC970MP_PME_PM_MRK_LSU0_FLUSH_ULD ] = {
		.pme_name = "PM_MRK_LSU0_FLUSH_ULD",
		.pme_short_desc = "LSU0 marked unaligned load flushes",
		.pme_long_desc = "A marked load was flushed from unit 0 because it was unaligned (crossed a 64byte boundary, or 32 byte if it missed the L1)",
		.pme_event_ids = { -1, -1, 55, 55, -1, -1, 54, 54 },
		.pme_group_vector = {
			0x0000001000000000ULL }
	},
#define PPC970MP_PME_PM_LSU_DERAT_MISS 30
	[ PPC970MP_PME_PM_LSU_DERAT_MISS ] = {
		.pme_name = "PM_LSU_DERAT_MISS",
		.pme_short_desc = "DERAT misses",
		.pme_long_desc = "Total D-ERAT Misses (Unit 0 + Unit 1). Requests that miss the Derat are rejected and retried until the request hits in the Erat. This may result in multiple erat misses for the same instruction.",
		.pme_event_ids = { -1, -1, -1, -1, -1, 62, -1, -1 },
		.pme_group_vector = {
			0x0000040100000000ULL }
	},
#define PPC970MP_PME_PM_FPU0_SINGLE 31
	[ PPC970MP_PME_PM_FPU0_SINGLE ] = {
		.pme_name = "PM_FPU0_SINGLE",
		.pme_short_desc = "FPU0 executed single precision instruction",
		.pme_long_desc = "This signal is active for one cycle when fp0 is executing single precision instruction.",
		.pme_event_ids = { 14, 13, -1, -1, 14, 13, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_FPU1_FDIV 32
	[ PPC970MP_PME_PM_FPU1_FDIV ] = {
		.pme_name = "PM_FPU1_FDIV",
		.pme_short_desc = "FPU1 executed FDIV instruction",
		.pme_long_desc = "This signal is active for one cycle at the end of the microcode executed when fp1 is executing a divide instruction. This could be fdiv, fdivs, fdiv. fdivs.",
		.pme_event_ids = { 19, 18, -1, -1, 19, 18, -1, -1 },
		.pme_group_vector = {
			0x0000000000000400ULL }
	},
#define PPC970MP_PME_PM_FPU1_FEST 33
	[ PPC970MP_PME_PM_FPU1_FEST ] = {
		.pme_name = "PM_FPU1_FEST",
		.pme_short_desc = "FPU1 executed FEST instruction",
		.pme_long_desc = "This signal is active for one cycle when fp1 is executing one of the estimate instructions. This could be fres* or frsqrte* where XYZ* means XYZ or XYZ. ",
		.pme_event_ids = { -1, -1, 17, 18, -1, -1, 17, 18 },
		.pme_group_vector = {
			0x0000000000001000ULL }
	},
#define PPC970MP_PME_PM_FPU0_FRSP_FCONV 34
	[ PPC970MP_PME_PM_FPU0_FRSP_FCONV ] = {
		.pme_name = "PM_FPU0_FRSP_FCONV",
		.pme_short_desc = "FPU0 executed FRSP or FCONV instructions",
		.pme_long_desc = "This signal is active for one cycle when fp0 is executing frsp or convert kind of instruction. This could be frsp*, fcfid*, fcti* where XYZ* means XYZ, XYZs, XYZ., XYZs.",
		.pme_event_ids = { -1, -1, 16, 17, -1, -1, 16, 17 },
		.pme_group_vector = {
			0x0000000000000400ULL }
	},
#define PPC970MP_PME_PM_GCT_EMPTY_SRQ_FULL 35
	[ PPC970MP_PME_PM_GCT_EMPTY_SRQ_FULL ] = {
		.pme_name = "PM_GCT_EMPTY_SRQ_FULL",
		.pme_short_desc = "GCT empty caused by SRQ full",
		.pme_long_desc = "GCT empty caused by SRQ full",
		.pme_event_ids = { -1, 27, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000080000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_ST_CMPL_INT 36
	[ PPC970MP_PME_PM_MRK_ST_CMPL_INT ] = {
		.pme_name = "PM_MRK_ST_CMPL_INT",
		.pme_short_desc = "Marked store completed with intervention",
		.pme_long_desc = "A marked store previously sent to the memory subsystem completed (data home) after requiring intervention",
		.pme_event_ids = { -1, -1, 62, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000800000000ULL }
	},
#define PPC970MP_PME_PM_FLUSH_BR_MPRED 37
	[ PPC970MP_PME_PM_FLUSH_BR_MPRED ] = {
		.pme_name = "PM_FLUSH_BR_MPRED",
		.pme_short_desc = "Flush caused by branch mispredict",
		.pme_long_desc = "Flush caused by branch mispredict",
		.pme_event_ids = { -1, -1, 10, 11, -1, -1, 10, 11 },
		.pme_group_vector = {
			0x0000200000000000ULL }
	},
#define PPC970MP_PME_PM_FXU_FIN 38
	[ PPC970MP_PME_PM_FXU_FIN ] = {
		.pme_name = "PM_FXU_FIN",
		.pme_short_desc = "FXU produced a result",
		.pme_long_desc = "The fixed point unit (Unit 0 + Unit 1) finished an instruction. Instructions that finish may not necessary complete.",
		.pme_event_ids = { -1, -1, 26, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000084000100000ULL }
	},
#define PPC970MP_PME_PM_FPU_STF 39
	[ PPC970MP_PME_PM_FPU_STF ] = {
		.pme_name = "PM_FPU_STF",
		.pme_short_desc = "FPU executed store instruction",
		.pme_long_desc = "FPU is executing a store instruction. Combined Unit 0 + Unit 1",
		.pme_event_ids = { -1, -1, -1, -1, -1, 26, -1, -1 },
		.pme_group_vector = {
			0x0000000000800020ULL }
	},
#define PPC970MP_PME_PM_DSLB_MISS 40
	[ PPC970MP_PME_PM_DSLB_MISS ] = {
		.pme_name = "PM_DSLB_MISS",
		.pme_short_desc = "Data SLB misses",
		.pme_long_desc = "A SLB miss for a data request occurred. SLB misses trap to the operating system to resolve",
		.pme_event_ids = { 5, 4, -1, -1, 5, 4, -1, -1 },
		.pme_group_vector = {
			0x0000000004000000ULL }
	},
#define PPC970MP_PME_PM_FXLS1_FULL_CYC 41
	[ PPC970MP_PME_PM_FXLS1_FULL_CYC ] = {
		.pme_name = "PM_FXLS1_FULL_CYC",
		.pme_short_desc = "Cycles FXU1/LS1 queue full",
		.pme_long_desc = "The issue queue for FXU/LSU unit 0 cannot accept any more instructions. Issue is stopped",
		.pme_event_ids = { -1, -1, 23, 24, -1, -1, 23, 24 },
		.pme_group_vector = {
			0x0000008000000080ULL }
	},
#define PPC970MP_PME_PM_CMPLU_STALL_FPU 42
	[ PPC970MP_PME_PM_CMPLU_STALL_FPU ] = {
		.pme_name = "PM_CMPLU_STALL_FPU",
		.pme_short_desc = "Completion stall caused by FPU instruction",
		.pme_long_desc = "Completion stall caused by FPU instruction",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, 67, -1 },
		.pme_group_vector = {
			0x0000100000000000ULL }
	},
#define PPC970MP_PME_PM_LSU_LMQ_LHR_MERGE 43
	[ PPC970MP_PME_PM_LSU_LMQ_LHR_MERGE ] = {
		.pme_name = "PM_LSU_LMQ_LHR_MERGE",
		.pme_short_desc = "LMQ LHR merges",
		.pme_long_desc = "A dcache miss occured for the same real cache line address as an earlier request already in the Load Miss Queue and was merged into the LMQ entry.",
		.pme_event_ids = { -1, -1, 45, 43, -1, -1, 43, 45 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_STCX_FAIL 44
	[ PPC970MP_PME_PM_MRK_STCX_FAIL ] = {
		.pme_name = "PM_MRK_STCX_FAIL",
		.pme_short_desc = "Marked STCX failed",
		.pme_long_desc = "A marked stcx (stwcx or stdcx) failed",
		.pme_event_ids = { 77, 74, -1, -1, 75, 74, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_FXU0_BUSY_FXU1_IDLE 45
	[ PPC970MP_PME_PM_FXU0_BUSY_FXU1_IDLE ] = {
		.pme_name = "PM_FXU0_BUSY_FXU1_IDLE",
		.pme_short_desc = "FXU0 busy FXU1 idle",
		.pme_long_desc = "FXU0 is busy while FXU1 was idle",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, 24, -1 },
		.pme_group_vector = {
			0x0000004000000000ULL }
	},
#define PPC970MP_PME_PM_CMPLU_STALL_LSU 46
	[ PPC970MP_PME_PM_CMPLU_STALL_LSU ] = {
		.pme_name = "PM_CMPLU_STALL_LSU",
		.pme_short_desc = "Completion stall caused by LSU instruction",
		.pme_long_desc = "Completion stall caused by LSU instruction",
		.pme_event_ids = { -1, -1, -1, -1, 84, -1, -1, -1 },
		.pme_group_vector = {
			0x0000020000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_DATA_FROM_L25_SHR 47
	[ PPC970MP_PME_PM_MRK_DATA_FROM_L25_SHR ] = {
		.pme_name = "PM_MRK_DATA_FROM_L25_SHR",
		.pme_short_desc = "Marked data loaded from L2.5 shared",
		.pme_long_desc = "DL1 was reloaded with shared (T or SL) data from the L2 of a chip on this MCM due to a marked demand load",
		.pme_event_ids = { -1, -1, -1, -1, 92, -1, -1, -1 },
		.pme_group_vector = {
			0x0004000000000000ULL }
	},
#define PPC970MP_PME_PM_LSU_FLUSH_ULD 48
	[ PPC970MP_PME_PM_LSU_FLUSH_ULD ] = {
		.pme_name = "PM_LSU_FLUSH_ULD",
		.pme_short_desc = "LRQ unaligned load flushes",
		.pme_long_desc = "A load was flushed because it was unaligned (crossed a 64byte boundary, or 32 byte if it missed the L1)",
		.pme_event_ids = { 64, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000008ULL }
	},
#define PPC970MP_PME_PM_MRK_BRU_FIN 49
	[ PPC970MP_PME_PM_MRK_BRU_FIN ] = {
		.pme_name = "PM_MRK_BRU_FIN",
		.pme_short_desc = "Marked instruction BRU processing finished",
		.pme_long_desc = "The branch unit finished a marked instruction. Instructions that finish may not necessary complete",
		.pme_event_ids = { -1, 70, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000400000000ULL }
	},
#define PPC970MP_PME_PM_IERAT_XLATE_WR 50
	[ PPC970MP_PME_PM_IERAT_XLATE_WR ] = {
		.pme_name = "PM_IERAT_XLATE_WR",
		.pme_short_desc = "Translation written to ierat",
		.pme_long_desc = "This signal will be asserted each time the I-ERAT is written. This indicates that an ERAT miss has been serviced. ERAT misses will initiate a sequence resulting in the ERAT being written. ERAT misses that are later ignored will not be counted unless the ERAT is written before the instruction stream is changed, This should be a fairly accurate count of ERAT missed (best available).",
		.pme_event_ids = { -1, -1, 70, 67, -1, -1, 72, 68 },
		.pme_group_vector = {
			0x0000000080000000ULL }
	},
#define PPC970MP_PME_PM_GCT_EMPTY_BR_MPRED 51
	[ PPC970MP_PME_PM_GCT_EMPTY_BR_MPRED ] = {
		.pme_name = "PM_GCT_EMPTY_BR_MPRED",
		.pme_short_desc = "GCT empty due to branch mispredict",
		.pme_long_desc = "GCT empty due to branch mispredict",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, 71, -1 },
		.pme_group_vector = {
			0x0000200000000000ULL }
	},
#define PPC970MP_PME_PM_LSU0_BUSY 52
	[ PPC970MP_PME_PM_LSU0_BUSY ] = {
		.pme_name = "PM_LSU0_BUSY",
		.pme_short_desc = "LSU0 busy",
		.pme_long_desc = "LSU unit 0 is busy rejecting instructions",
		.pme_event_ids = { 85, 80, -1, -1, 81, 81, -1, -1 },
		.pme_group_vector = {
			0x0000020003020000ULL }
	},
#define PPC970MP_PME_PM_DATA_FROM_MEM 53
	[ PPC970MP_PME_PM_DATA_FROM_MEM ] = {
		.pme_name = "PM_DATA_FROM_MEM",
		.pme_short_desc = "Data loaded from memory",
		.pme_long_desc = "Data loaded from memory",
		.pme_event_ids = { -1, 87, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0003000008000000ULL }
	},
#define PPC970MP_PME_PM_FPR_MAP_FULL_CYC 54
	[ PPC970MP_PME_PM_FPR_MAP_FULL_CYC ] = {
		.pme_name = "PM_FPR_MAP_FULL_CYC",
		.pme_short_desc = "Cycles FPR mapper full",
		.pme_long_desc = "The ISU sends a signal indicating that the FPR mapper cannot accept any more groups. Dispatch is stopped. Note: this condition indicates that a pool of mapper is full but the entire mapper may not be.",
		.pme_event_ids = { 7, 6, -1, -1, 7, 6, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_FPU1_FULL_CYC 55
	[ PPC970MP_PME_PM_FPU1_FULL_CYC ] = {
		.pme_name = "PM_FPU1_FULL_CYC",
		.pme_short_desc = "Cycles FPU1 issue queue full",
		.pme_long_desc = "The issue queue for FPU unit 1 cannot accept any more instructions. Issue is stopped",
		.pme_event_ids = { 22, 21, -1, -1, 22, 21, -1, -1 },
		.pme_group_vector = {
			0x0000000000000080ULL }
	},
#define PPC970MP_PME_PM_FPU0_FIN 56
	[ PPC970MP_PME_PM_FPU0_FIN ] = {
		.pme_name = "PM_FPU0_FIN",
		.pme_short_desc = "FPU0 produced a result",
		.pme_long_desc = "fp0 finished, produced a result This only indicates finish, not completion. ",
		.pme_event_ids = { -1, -1, 13, 14, -1, -1, 13, 14 },
		.pme_group_vector = {
			0x0000000000802800ULL }
	},
#define PPC970MP_PME_PM_GRP_BR_REDIR 57
	[ PPC970MP_PME_PM_GRP_BR_REDIR ] = {
		.pme_name = "PM_GRP_BR_REDIR",
		.pme_short_desc = "Group experienced branch redirect",
		.pme_long_desc = "Group experienced branch redirect",
		.pme_event_ids = { 31, 30, -1, -1, 31, 30, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_GCT_EMPTY_IC_MISS 58
	[ PPC970MP_PME_PM_GCT_EMPTY_IC_MISS ] = {
		.pme_name = "PM_GCT_EMPTY_IC_MISS",
		.pme_short_desc = "GCT empty due to I cache miss",
		.pme_long_desc = "GCT empty due to I cache miss",
		.pme_event_ids = { -1, -1, -1, -1, 88, -1, -1, -1 },
		.pme_group_vector = {
			0x0000200000000000ULL }
	},
#define PPC970MP_PME_PM_THRESH_TIMEO 59
	[ PPC970MP_PME_PM_THRESH_TIMEO ] = {
		.pme_name = "PM_THRESH_TIMEO",
		.pme_short_desc = "Threshold timeout",
		.pme_long_desc = "The threshold timer expired",
		.pme_event_ids = { -1, 82, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000200000000ULL }
	},
#define PPC970MP_PME_PM_FPU_FSQRT 60
	[ PPC970MP_PME_PM_FPU_FSQRT ] = {
		.pme_name = "PM_FPU_FSQRT",
		.pme_short_desc = "FPU executed FSQRT instruction",
		.pme_long_desc = "This signal is active for one cycle at the end of the microcode executed when FPU is executing a square root instruction. This could be fsqrt* where XYZ* means XYZ, XYZs, XYZ., XYZs. Combined Unit 0 + Unit 1",
		.pme_event_ids = { -1, -1, -1, -1, -1, 25, -1, -1 },
		.pme_group_vector = {
			0x0000100000100010ULL }
	},
#define PPC970MP_PME_PM_MRK_LSU0_FLUSH_LRQ 61
	[ PPC970MP_PME_PM_MRK_LSU0_FLUSH_LRQ ] = {
		.pme_name = "PM_MRK_LSU0_FLUSH_LRQ",
		.pme_short_desc = "LSU0 marked LRQ flushes",
		.pme_long_desc = "A marked load was flushed by unit 0 because a younger load executed before an older store executed and they had overlapping data OR two loads executed out of order and they have byte overlap and there was a snoop in between to an overlapped byte.",
		.pme_event_ids = { -1, -1, 53, 53, -1, -1, 52, 52 },
		.pme_group_vector = {
			0x0000002000000000ULL }
	},
#define PPC970MP_PME_PM_PMC1_OVERFLOW 62
	[ PPC970MP_PME_PM_PMC1_OVERFLOW ] = {
		.pme_name = "PM_PMC1_OVERFLOW",
		.pme_short_desc = "PMC1 Overflow",
		.pme_long_desc = "PMC1 Overflow",
		.pme_event_ids = { -1, 76, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_FXLS0_FULL_CYC 63
	[ PPC970MP_PME_PM_FXLS0_FULL_CYC ] = {
		.pme_name = "PM_FXLS0_FULL_CYC",
		.pme_short_desc = "Cycles FXU0/LS0 queue full",
		.pme_long_desc = "The issue queue for FXU/LSU unit 0 cannot accept any more instructions. Issue is stopped",
		.pme_event_ids = { -1, -1, 22, 23, -1, -1, 22, 23 },
		.pme_group_vector = {
			0x0000008000000080ULL }
	},
#define PPC970MP_PME_PM_FPU0_ALL 64
	[ PPC970MP_PME_PM_FPU0_ALL ] = {
		.pme_name = "PM_FPU0_ALL",
		.pme_short_desc = "FPU0 executed add",
		.pme_long_desc = " mult",
		.pme_event_ids = { 8, 7, -1, -1, 8, 7, -1, -1 },
		.pme_group_vector = {
			0x0000000000000800ULL }
	},
#define PPC970MP_PME_PM_DATA_TABLEWALK_CYC 65
	[ PPC970MP_PME_PM_DATA_TABLEWALK_CYC ] = {
		.pme_name = "PM_DATA_TABLEWALK_CYC",
		.pme_short_desc = "Cycles doing data tablewalks",
		.pme_long_desc = "This signal is asserted every cycle when a tablewalk is active. While a tablewalk is active any request attempting to access the TLB will be rejected and retried.",
		.pme_event_ids = { 4, 3, -1, -1, 4, 3, -1, -1 },
		.pme_group_vector = {
			0x0000000020000000ULL }
	},
#define PPC970MP_PME_PM_FPU0_FEST 66
	[ PPC970MP_PME_PM_FPU0_FEST ] = {
		.pme_name = "PM_FPU0_FEST",
		.pme_short_desc = "FPU0 executed FEST instruction",
		.pme_long_desc = "This signal is active for one cycle when fp0 is executing one of the estimate instructions. This could be fres* or frsqrte* where XYZ* means XYZ or XYZ. ",
		.pme_event_ids = { -1, -1, 12, 13, -1, -1, 12, 13 },
		.pme_group_vector = {
			0x0000000000001000ULL }
	},
#define PPC970MP_PME_PM_DATA_FROM_L25_MOD 67
	[ PPC970MP_PME_PM_DATA_FROM_L25_MOD ] = {
		.pme_name = "PM_DATA_FROM_L25_MOD",
		.pme_short_desc = "Data loaded from L2.5 modified",
		.pme_long_desc = "DL1 was reloaded with modified (M) data from the L2 of a chip on this MCM due to a demand load",
		.pme_event_ids = { -1, -1, -1, -1, -1, 87, -1, -1 },
		.pme_group_vector = {
			0x0002400000000000ULL }
	},
#define PPC970MP_PME_PM_LSU0_REJECT_ERAT_MISS 68
	[ PPC970MP_PME_PM_LSU0_REJECT_ERAT_MISS ] = {
		.pme_name = "PM_LSU0_REJECT_ERAT_MISS",
		.pme_short_desc = "LSU0 reject due to ERAT miss",
		.pme_long_desc = "LSU0 reject due to ERAT miss",
		.pme_event_ids = { 49, 48, -1, -1, 50, 47, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_LSU_LMQ_SRQ_EMPTY_CYC 69
	[ PPC970MP_PME_PM_LSU_LMQ_SRQ_EMPTY_CYC ] = {
		.pme_name = "PM_LSU_LMQ_SRQ_EMPTY_CYC",
		.pme_short_desc = "Cycles LMQ and SRQ empty",
		.pme_long_desc = "Cycles when both the LMQ and SRQ are empty (LSU is idle)",
		.pme_event_ids = { -1, 64, 48, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000480000ULL }
	},
#define PPC970MP_PME_PM_LSU0_REJECT_RELOAD_CDF 70
	[ PPC970MP_PME_PM_LSU0_REJECT_RELOAD_CDF ] = {
		.pme_name = "PM_LSU0_REJECT_RELOAD_CDF",
		.pme_short_desc = "LSU0 reject due to reload CDF or tag update collision",
		.pme_long_desc = "LSU0 reject due to reload CDF or tag update collision",
		.pme_event_ids = { 51, 50, -1, -1, 52, 49, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_FPU_FEST 71
	[ PPC970MP_PME_PM_FPU_FEST ] = {
		.pme_name = "PM_FPU_FEST",
		.pme_short_desc = "FPU executed FEST instruction",
		.pme_long_desc = "This signal is active for one cycle when executing one of the estimate instructions. This could be fres* or frsqrte* where XYZ* means XYZ or XYZ. Combined Unit 0 + Unit 1.",
		.pme_event_ids = { -1, -1, 21, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000010ULL }
	},
#define PPC970MP_PME_PM_0INST_FETCH 72
	[ PPC970MP_PME_PM_0INST_FETCH ] = {
		.pme_name = "PM_0INST_FETCH",
		.pme_short_desc = "No instructions fetched",
		.pme_long_desc = "No instructions were fetched this cycles (due to IFU hold, redirect, or icache miss)",
		.pme_event_ids = { -1, -1, -1, 0, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000010000000000ULL }
	},
#define PPC970MP_PME_PM_LD_MISS_L1_LSU0 73
	[ PPC970MP_PME_PM_LD_MISS_L1_LSU0 ] = {
		.pme_name = "PM_LD_MISS_L1_LSU0",
		.pme_short_desc = "LSU0 L1 D cache load misses",
		.pme_long_desc = "A load, executing on unit 0, missed the dcache",
		.pme_event_ids = { -1, -1, 37, 35, -1, -1, 35, 35 },
		.pme_group_vector = {
			0x0001000000008000ULL }
	},
#define PPC970MP_PME_PM_LSU1_REJECT_RELOAD_CDF 74
	[ PPC970MP_PME_PM_LSU1_REJECT_RELOAD_CDF ] = {
		.pme_name = "PM_LSU1_REJECT_RELOAD_CDF",
		.pme_short_desc = "LSU1 reject due to reload CDF or tag update collision",
		.pme_long_desc = "LSU1 reject due to reload CDF or tag update collision",
		.pme_event_ids = { 61, 60, -1, -1, 62, 59, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_L1_PREF 75
	[ PPC970MP_PME_PM_L1_PREF ] = {
		.pme_name = "PM_L1_PREF",
		.pme_short_desc = "L1 cache data prefetches",
		.pme_long_desc = "A request to prefetch data into the L1 was made",
		.pme_event_ids = { -1, -1, 33, 32, -1, -1, 32, 32 },
		.pme_group_vector = {
			0x0000000010000000ULL }
	},
#define PPC970MP_PME_PM_FPU1_STALL3 76
	[ PPC970MP_PME_PM_FPU1_STALL3 ] = {
		.pme_name = "PM_FPU1_STALL3",
		.pme_short_desc = "FPU1 stalled in pipe3",
		.pme_long_desc = "This signal indicates that fp1 has generated a stall in pipe3 due to overflow, underflow, massive cancel, convert to integer (sometimes), or convert from integer (always). This signal is active during the entire duration of the stall. ",
		.pme_event_ids = { 24, 23, -1, -1, 24, 23, -1, -1 },
		.pme_group_vector = {
			0x0000000000002000ULL }
	},
#define PPC970MP_PME_PM_BRQ_FULL_CYC 77
	[ PPC970MP_PME_PM_BRQ_FULL_CYC ] = {
		.pme_name = "PM_BRQ_FULL_CYC",
		.pme_short_desc = "Cycles branch queue full",
		.pme_long_desc = "The ISU sends a signal indicating that the issue queue that feeds the ifu br unit cannot accept any more group (queue is full of groups).",
		.pme_event_ids = { 0, 0, -1, -1, 1, 0, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_PMC8_OVERFLOW 78
	[ PPC970MP_PME_PM_PMC8_OVERFLOW ] = {
		.pme_name = "PM_PMC8_OVERFLOW",
		.pme_short_desc = "PMC8 Overflow",
		.pme_long_desc = "PMC8 Overflow",
		.pme_event_ids = { 80, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_PMC7_OVERFLOW 79
	[ PPC970MP_PME_PM_PMC7_OVERFLOW ] = {
		.pme_name = "PM_PMC7_OVERFLOW",
		.pme_short_desc = "PMC7 Overflow",
		.pme_long_desc = "PMC7 Overflow",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, -1, 62 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_WORK_HELD 80
	[ PPC970MP_PME_PM_WORK_HELD ] = {
		.pme_name = "PM_WORK_HELD",
		.pme_short_desc = "Work held",
		.pme_long_desc = "RAS Unit has signaled completion to stop and there are groups waiting to complete",
		.pme_event_ids = { -1, 83, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000200ULL }
	},
#define PPC970MP_PME_PM_MRK_LD_MISS_L1_LSU0 81
	[ PPC970MP_PME_PM_MRK_LD_MISS_L1_LSU0 ] = {
		.pme_name = "PM_MRK_LD_MISS_L1_LSU0",
		.pme_short_desc = "LSU0 L1 D cache load misses",
		.pme_long_desc = "A marked load, executing on unit 0, missed the dcache",
		.pme_event_ids = { 75, 72, -1, -1, 73, 72, -1, -1 },
		.pme_group_vector = {
			0x0000002000000000ULL }
	},
#define PPC970MP_PME_PM_FXU_IDLE 82
	[ PPC970MP_PME_PM_FXU_IDLE ] = {
		.pme_name = "PM_FXU_IDLE",
		.pme_short_desc = "FXU idle",
		.pme_long_desc = "FXU0 and FXU1 are both idle",
		.pme_event_ids = { -1, -1, -1, -1, 28, -1, -1, -1 },
		.pme_group_vector = {
			0x000000c000000000ULL }
	},
#define PPC970MP_PME_PM_INST_CMPL 83
	[ PPC970MP_PME_PM_INST_CMPL ] = {
		.pme_name = "PM_INST_CMPL",
		.pme_short_desc = "Instructions completed",
		.pme_long_desc = "Number of Eligible Instructions that completed. ",
		.pme_event_ids = { 36, 36, 30, 30, 38, 35, 30, 30 },
		.pme_group_vector = {
			0x0007fffbffffffffULL }
	},
#define PPC970MP_PME_PM_LSU1_FLUSH_UST 84
	[ PPC970MP_PME_PM_LSU1_FLUSH_UST ] = {
		.pme_name = "PM_LSU1_FLUSH_UST",
		.pme_short_desc = "LSU1 unaligned store flushes",
		.pme_long_desc = "A store was flushed from unit 1 because it was unaligned (crossed a 4k boundary)",
		.pme_event_ids = { 58, 57, -1, -1, 59, 56, -1, -1 },
		.pme_group_vector = {
			0x0000000000010000ULL }
	},
#define PPC970MP_PME_PM_LSU0_FLUSH_ULD 85
	[ PPC970MP_PME_PM_LSU0_FLUSH_ULD ] = {
		.pme_name = "PM_LSU0_FLUSH_ULD",
		.pme_short_desc = "LSU0 unaligned load flushes",
		.pme_long_desc = "A load was flushed from unit 0 because it was unaligned (crossed a 64byte boundary, or 32 byte if it missed the L1)",
		.pme_event_ids = { 47, 46, -1, -1, 48, 45, -1, -1 },
		.pme_group_vector = {
			0x0000000000008000ULL }
	},
#define PPC970MP_PME_PM_LSU_FLUSH 86
	[ PPC970MP_PME_PM_LSU_FLUSH ] = {
		.pme_name = "PM_LSU_FLUSH",
		.pme_short_desc = "Flush initiated by LSU",
		.pme_long_desc = "Flush initiated by LSU",
		.pme_event_ids = { -1, -1, 43, 41, -1, -1, 41, 42 },
		.pme_group_vector = {
			0x0000020000000000ULL }
	},
#define PPC970MP_PME_PM_INST_FROM_L2 87
	[ PPC970MP_PME_PM_INST_FROM_L2 ] = {
		.pme_name = "PM_INST_FROM_L2",
		.pme_short_desc = "Instructions fetched from L2",
		.pme_long_desc = "An instruction fetch group was fetched from L2. Fetch Groups can contain up to 8 instructions",
		.pme_event_ids = { 39, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000800020000000ULL }
	},
#define PPC970MP_PME_PM_LSU1_REJECT_LMQ_FULL 88
	[ PPC970MP_PME_PM_LSU1_REJECT_LMQ_FULL ] = {
		.pme_name = "PM_LSU1_REJECT_LMQ_FULL",
		.pme_short_desc = "LSU1 reject due to LMQ full or missed data coming",
		.pme_long_desc = "LSU1 reject due to LMQ full or missed data coming",
		.pme_event_ids = { 60, 59, -1, -1, 61, 58, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_PMC2_OVERFLOW 89
	[ PPC970MP_PME_PM_PMC2_OVERFLOW ] = {
		.pme_name = "PM_PMC2_OVERFLOW",
		.pme_short_desc = "PMC2 Overflow",
		.pme_long_desc = "PMC2 Overflow",
		.pme_event_ids = { -1, -1, 64, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_FPU0_DENORM 90
	[ PPC970MP_PME_PM_FPU0_DENORM ] = {
		.pme_name = "PM_FPU0_DENORM",
		.pme_short_desc = "FPU0 received denormalized data",
		.pme_long_desc = "This signal is active for one cycle when one of the operands is denormalized.",
		.pme_event_ids = { 9, 8, -1, -1, 9, 8, -1, -1 },
		.pme_group_vector = {
			0x0000000000001000ULL }
	},
#define PPC970MP_PME_PM_FPU1_FMOV_FEST 91
	[ PPC970MP_PME_PM_FPU1_FMOV_FEST ] = {
		.pme_name = "PM_FPU1_FMOV_FEST",
		.pme_short_desc = "FPU1 executing FMOV or FEST instructions",
		.pme_long_desc = "This signal is active for one cycle when fp1 is executing a move kind of instruction or one of the estimate instructions.. This could be fmr*, fneg*, fabs*, fnabs* , fres* or frsqrte* where XYZ* means XYZ or XYZ",
		.pme_event_ids = { -1, -1, 19, 20, -1, -1, 19, 20 },
		.pme_group_vector = {
			0x0000000000001000ULL }
	},
#define PPC970MP_PME_PM_INST_FETCH_CYC 92
	[ PPC970MP_PME_PM_INST_FETCH_CYC ] = {
		.pme_name = "PM_INST_FETCH_CYC",
		.pme_short_desc = "Cycles at least 1 instruction fetched",
		.pme_long_desc = "Asserted each cycle when the IFU sends at least one instruction to the IDU. ",
		.pme_event_ids = { 90, 86, -1, -1, 90, 85, -1, -1 },
		.pme_group_vector = {
			0x0000010000000000ULL }
	},
#define PPC970MP_PME_PM_GRP_DISP_REJECT 93
	[ PPC970MP_PME_PM_GRP_DISP_REJECT ] = {
		.pme_name = "PM_GRP_DISP_REJECT",
		.pme_short_desc = "Group dispatch rejected",
		.pme_long_desc = "A group that previously attempted dispatch was rejected.",
		.pme_event_ids = { 32, 32, -1, -1, 32, 31, -1, 29 },
		.pme_group_vector = {
			0x0000000000000101ULL }
	},
#define PPC970MP_PME_PM_LSU_LDF 94
	[ PPC970MP_PME_PM_LSU_LDF ] = {
		.pme_name = "PM_LSU_LDF",
		.pme_short_desc = "LSU executed Floating Point load instruction",
		.pme_long_desc = "LSU executed Floating Point load instruction",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, -1, 43 },
		.pme_group_vector = {
			0x0000000000800020ULL }
	},
#define PPC970MP_PME_PM_INST_DISP 95
	[ PPC970MP_PME_PM_INST_DISP ] = {
		.pme_name = "PM_INST_DISP",
		.pme_short_desc = "Instructions dispatched",
		.pme_long_desc = "The ISU sends the number of instructions dispatched.",
		.pme_event_ids = { 37, 37, -1, -1, 39, 36, -1, -1 },
		.pme_group_vector = {
			0x0000000100000146ULL }
	},
#define PPC970MP_PME_PM_DATA_FROM_L25_SHR 96
	[ PPC970MP_PME_PM_DATA_FROM_L25_SHR ] = {
		.pme_name = "PM_DATA_FROM_L25_SHR",
		.pme_short_desc = "Data loaded from L2.5 shared",
		.pme_long_desc = "DL1 was reloaded with shared (T or SL) data from the L2 of a chip on this MCM due to a demand load",
		.pme_event_ids = { -1, -1, -1, -1, 91, -1, -1, -1 },
		.pme_group_vector = {
			0x0002400000000000ULL }
	},
#define PPC970MP_PME_PM_L1_DCACHE_RELOAD_VALID 97
	[ PPC970MP_PME_PM_L1_DCACHE_RELOAD_VALID ] = {
		.pme_name = "PM_L1_DCACHE_RELOAD_VALID",
		.pme_short_desc = "L1 reload data source valid",
		.pme_long_desc = "The data source information is valid",
		.pme_event_ids = { -1, -1, 32, 31, -1, -1, 31, 31 },
		.pme_group_vector = {
			0x0000000100040000ULL }
	},
#define PPC970MP_PME_PM_MRK_GRP_ISSUED 98
	[ PPC970MP_PME_PM_MRK_GRP_ISSUED ] = {
		.pme_name = "PM_MRK_GRP_ISSUED",
		.pme_short_desc = "Marked group issued",
		.pme_long_desc = "A sampled instruction was issued",
		.pme_event_ids = { -1, -1, -1, -1, -1, 70, -1, -1 },
		.pme_group_vector = {
			0x0000000200000000ULL }
	},
#define PPC970MP_PME_PM_FPU_FMA 99
	[ PPC970MP_PME_PM_FPU_FMA ] = {
		.pme_name = "PM_FPU_FMA",
		.pme_short_desc = "FPU executed multiply-add instruction",
		.pme_long_desc = "This signal is active for one cycle when FPU is executing multiply-add kind of instruction. This could be fmadd*, fnmadd*, fmsub*, fnmsub* where XYZ* means XYZ, XYZs, XYZ., XYZs. Combined Unit 0 + Unit 1",
		.pme_event_ids = { -1, 25, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000100000900010ULL }
	},
#define PPC970MP_PME_PM_MRK_CRU_FIN 100
	[ PPC970MP_PME_PM_MRK_CRU_FIN ] = {
		.pme_name = "PM_MRK_CRU_FIN",
		.pme_short_desc = "Marked instruction CRU processing finished",
		.pme_long_desc = "The Condition Register Unit finished a marked instruction. Instructions that finish may not necessary complete",
		.pme_event_ids = { -1, -1, -1, 50, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000400000000ULL }
	},
#define PPC970MP_PME_PM_CMPLU_STALL_REJECT 101
	[ PPC970MP_PME_PM_CMPLU_STALL_REJECT ] = {
		.pme_name = "PM_CMPLU_STALL_REJECT",
		.pme_short_desc = "Completion stall caused by reject",
		.pme_long_desc = "Completion stall caused by reject",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, 69, -1 },
		.pme_group_vector = {
			0x0000040000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_LSU1_FLUSH_UST 102
	[ PPC970MP_PME_PM_MRK_LSU1_FLUSH_UST ] = {
		.pme_name = "PM_MRK_LSU1_FLUSH_UST",
		.pme_short_desc = "LSU1 marked unaligned store flushes",
		.pme_long_desc = "A marked store was flushed from unit 1 because it was unaligned (crossed a 4k boundary)",
		.pme_event_ids = { -1, -1, 60, 60, -1, -1, 59, 59 },
		.pme_group_vector = {
			0x0000001000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_FXU_FIN 103
	[ PPC970MP_PME_PM_MRK_FXU_FIN ] = {
		.pme_name = "PM_MRK_FXU_FIN",
		.pme_short_desc = "Marked instruction FXU processing finished",
		.pme_long_desc = "Marked instruction FXU processing finished",
		.pme_event_ids = { -1, -1, -1, -1, -1, 69, -1, -1 },
		.pme_group_vector = {
			0x0000000400000000ULL }
	},
#define PPC970MP_PME_PM_LSU1_REJECT_ERAT_MISS 104
	[ PPC970MP_PME_PM_LSU1_REJECT_ERAT_MISS ] = {
		.pme_name = "PM_LSU1_REJECT_ERAT_MISS",
		.pme_short_desc = "LSU1 reject due to ERAT miss",
		.pme_long_desc = "LSU1 reject due to ERAT miss",
		.pme_event_ids = { 59, 58, -1, -1, 60, 57, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_BR_ISSUED 105
	[ PPC970MP_PME_PM_BR_ISSUED ] = {
		.pme_name = "PM_BR_ISSUED",
		.pme_short_desc = "Branches issued",
		.pme_long_desc = "This signal will be asserted each time the ISU issues a branch instruction. This signal will be asserted each time the ISU selects a branch instruction to issue.",
		.pme_event_ids = { -1, -1, 0, 1, -1, -1, 0, 0 },
		.pme_group_vector = {
			0x0000800007000000ULL }
	},
#define PPC970MP_PME_PM_PMC4_OVERFLOW 106
	[ PPC970MP_PME_PM_PMC4_OVERFLOW ] = {
		.pme_name = "PM_PMC4_OVERFLOW",
		.pme_short_desc = "PMC4 Overflow",
		.pme_long_desc = "PMC4 Overflow",
		.pme_event_ids = { -1, -1, -1, -1, 77, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_EE_OFF 107
	[ PPC970MP_PME_PM_EE_OFF ] = {
		.pme_name = "PM_EE_OFF",
		.pme_short_desc = "Cycles MSR(EE) bit off",
		.pme_long_desc = "The number of Cycles MSR(EE) bit was off.",
		.pme_event_ids = { -1, -1, 8, 9, -1, -1, 8, 8 },
		.pme_group_vector = {
			0x0000000000000200ULL }
	},
#define PPC970MP_PME_PM_INST_FROM_L25_MOD 108
	[ PPC970MP_PME_PM_INST_FROM_L25_MOD ] = {
		.pme_name = "PM_INST_FROM_L25_MOD",
		.pme_short_desc = "Instruction fetched from L2.5 modified",
		.pme_long_desc = "Instruction fetched from L2.5 modified",
		.pme_event_ids = { -1, -1, -1, -1, -1, 37, -1, -1 },
		.pme_group_vector = {
			0x0000010000000000ULL }
	},
#define PPC970MP_PME_PM_CMPLU_STALL_ERAT_MISS 109
	[ PPC970MP_PME_PM_CMPLU_STALL_ERAT_MISS ] = {
		.pme_name = "PM_CMPLU_STALL_ERAT_MISS",
		.pme_short_desc = "Completion stall caused by ERAT miss",
		.pme_long_desc = "Completion stall caused by ERAT miss",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, 70, -1 },
		.pme_group_vector = {
			0x0000020000000000ULL }
	},
#define PPC970MP_PME_PM_ITLB_MISS 110
	[ PPC970MP_PME_PM_ITLB_MISS ] = {
		.pme_name = "PM_ITLB_MISS",
		.pme_short_desc = "Instruction TLB misses",
		.pme_long_desc = "A TLB miss for an Instruction Fetch has occurred",
		.pme_event_ids = { 41, 40, -1, -1, 42, 39, -1, -1 },
		.pme_group_vector = {
			0x0000000010200000ULL }
	},
#define PPC970MP_PME_PM_FXU1_BUSY_FXU0_IDLE 111
	[ PPC970MP_PME_PM_FXU1_BUSY_FXU0_IDLE ] = {
		.pme_name = "PM_FXU1_BUSY_FXU0_IDLE",
		.pme_short_desc = "FXU1 busy FXU0 idle",
		.pme_long_desc = "FXU0 was idle while FXU1 was busy",
		.pme_event_ids = { -1, -1, -1, 26, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000004000000000ULL }
	},
#define PPC970MP_PME_PM_GRP_DISP_VALID 112
	[ PPC970MP_PME_PM_GRP_DISP_VALID ] = {
		.pme_name = "PM_GRP_DISP_VALID",
		.pme_short_desc = "Group dispatch valid",
		.pme_long_desc = "Dispatch has been attempted for a valid group.  Some groups may be rejected.  The total number of successful dispatches is the number of dispatch valid minus dispatch reject.",
		.pme_event_ids = { 33, 33, -1, -1, 34, 32, -1, -1 },
		.pme_group_vector = {
			0x0000000100000100ULL }
	},
#define PPC970MP_PME_PM_MRK_GRP_DISP 113
	[ PPC970MP_PME_PM_MRK_GRP_DISP ] = {
		.pme_name = "PM_MRK_GRP_DISP",
		.pme_short_desc = "Marked group dispatched",
		.pme_long_desc = "A group containing a sampled instruction was dispatched",
		.pme_event_ids = { 72, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000400000000ULL }
	},
#define PPC970MP_PME_PM_LSU_FLUSH_UST 114
	[ PPC970MP_PME_PM_LSU_FLUSH_UST ] = {
		.pme_name = "PM_LSU_FLUSH_UST",
		.pme_short_desc = "SRQ unaligned store flushes",
		.pme_long_desc = "A store was flushed because it was unaligned",
		.pme_event_ids = { -1, 63, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000008ULL }
	},
#define PPC970MP_PME_PM_FXU1_FIN 115
	[ PPC970MP_PME_PM_FXU1_FIN ] = {
		.pme_name = "PM_FXU1_FIN",
		.pme_short_desc = "FXU1 produced a result",
		.pme_long_desc = "The Fixed Point unit 1 finished an instruction and produced a result",
		.pme_event_ids = { -1, -1, 25, 27, -1, -1, 26, 26 },
		.pme_group_vector = {
			0x0000008000000100ULL }
	},
#define PPC970MP_PME_PM_GRP_CMPL 116
	[ PPC970MP_PME_PM_GRP_CMPL ] = {
		.pme_name = "PM_GRP_CMPL",
		.pme_short_desc = "Group completed",
		.pme_long_desc = "A group completed. Microcoded instructions that span multiple groups will generate this event once per group.",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, 28, -1 },
		.pme_group_vector = {
			0x0000000020080001ULL }
	},
#define PPC970MP_PME_PM_FPU_FRSP_FCONV 117
	[ PPC970MP_PME_PM_FPU_FRSP_FCONV ] = {
		.pme_name = "PM_FPU_FRSP_FCONV",
		.pme_short_desc = "FPU executed FRSP or FCONV instructions",
		.pme_long_desc = "This signal is active for one cycle when executing frsp or convert kind of instruction. This could be frsp*, fcfid*, fcti* where XYZ* means XYZ, XYZs, XYZ., XYZs. Combined Unit 0 + Unit 1",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, 21, -1 },
		.pme_group_vector = {
			0x0000000000000020ULL }
	},
#define PPC970MP_PME_PM_MRK_LSU0_FLUSH_SRQ 118
	[ PPC970MP_PME_PM_MRK_LSU0_FLUSH_SRQ ] = {
		.pme_name = "PM_MRK_LSU0_FLUSH_SRQ",
		.pme_short_desc = "LSU0 marked SRQ flushes",
		.pme_long_desc = "A marked store was flushed because younger load hits and older store that is already in the SRQ or in the same group.",
		.pme_event_ids = { -1, -1, 54, 54, -1, -1, 53, 53 },
		.pme_group_vector = {
			0x0000002000000000ULL }
	},
#define PPC970MP_PME_PM_CMPLU_STALL_OTHER 119
	[ PPC970MP_PME_PM_CMPLU_STALL_OTHER ] = {
		.pme_name = "PM_CMPLU_STALL_OTHER",
		.pme_short_desc = "Completion stall caused by other reason",
		.pme_long_desc = "Completion stall caused by other reason",
		.pme_event_ids = { 88, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000040000000000ULL }
	},
#define PPC970MP_PME_PM_LSU_LMQ_FULL_CYC 120
	[ PPC970MP_PME_PM_LSU_LMQ_FULL_CYC ] = {
		.pme_name = "PM_LSU_LMQ_FULL_CYC",
		.pme_short_desc = "Cycles LMQ full",
		.pme_long_desc = "The LMQ was full",
		.pme_event_ids = { -1, -1, 44, 42, -1, -1, 42, 44 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_ST_REF_L1_LSU0 121
	[ PPC970MP_PME_PM_ST_REF_L1_LSU0 ] = {
		.pme_name = "PM_ST_REF_L1_LSU0",
		.pme_short_desc = "LSU0 L1 D cache store references",
		.pme_long_desc = "A store executed on unit 0",
		.pme_event_ids = { -1, -1, 67, 64, -1, -1, 64, 64 },
		.pme_group_vector = {
			0x0000000000030000ULL }
	},
#define PPC970MP_PME_PM_LSU0_DERAT_MISS 122
	[ PPC970MP_PME_PM_LSU0_DERAT_MISS ] = {
		.pme_name = "PM_LSU0_DERAT_MISS",
		.pme_short_desc = "LSU0 DERAT misses",
		.pme_long_desc = "A data request (load or store) from LSU Unit 0 missed the ERAT and resulted in an ERAT reload. Multiple instructions may miss the ERAT entry for the same 4K page, but only one reload will occur.",
		.pme_event_ids = { 44, 43, -1, -1, 45, 42, -1, -1 },
		.pme_group_vector = {
			0x0000000000040000ULL }
	},
#define PPC970MP_PME_PM_LSU_SRQ_SYNC_CYC 123
	[ PPC970MP_PME_PM_LSU_SRQ_SYNC_CYC ] = {
		.pme_name = "PM_LSU_SRQ_SYNC_CYC",
		.pme_short_desc = "SRQ sync duration",
		.pme_long_desc = "This signal is asserted every cycle when a sync is in the SRQ.",
		.pme_event_ids = { -1, -1, 51, 49, -1, -1, 48, 50 },
		.pme_group_vector = {
			0x0000000040000000ULL }
	},
#define PPC970MP_PME_PM_FPU_STALL3 124
	[ PPC970MP_PME_PM_FPU_STALL3 ] = {
		.pme_name = "PM_FPU_STALL3",
		.pme_short_desc = "FPU stalled in pipe3",
		.pme_long_desc = "FPU has generated a stall in pipe3 due to overflow, underflow, massive cancel, convert to integer (sometimes), or convert from integer (always). This signal is active during the entire duration of the stall. Combined Unit 0 + Unit 1",
		.pme_event_ids = { -1, 26, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000020ULL }
	},
#define PPC970MP_PME_PM_LSU_REJECT_ERAT_MISS 125
	[ PPC970MP_PME_PM_LSU_REJECT_ERAT_MISS ] = {
		.pme_name = "PM_LSU_REJECT_ERAT_MISS",
		.pme_short_desc = "LSU reject due to ERAT miss",
		.pme_long_desc = "LSU reject due to ERAT miss",
		.pme_event_ids = { -1, -1, -1, -1, 68, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_DATA_FROM_L2 126
	[ PPC970MP_PME_PM_MRK_DATA_FROM_L2 ] = {
		.pme_name = "PM_MRK_DATA_FROM_L2",
		.pme_short_desc = "Marked data loaded from L2",
		.pme_long_desc = "DL1 was reloaded from the local L2 due to a marked demand load",
		.pme_event_ids = { 71, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0004000000000000ULL }
	},
#define PPC970MP_PME_PM_LSU0_FLUSH_SRQ 127
	[ PPC970MP_PME_PM_LSU0_FLUSH_SRQ ] = {
		.pme_name = "PM_LSU0_FLUSH_SRQ",
		.pme_short_desc = "LSU0 SRQ flushes",
		.pme_long_desc = "A store was flushed because younger load hits and older store that is already in the SRQ or in the same group.",
		.pme_event_ids = { 46, 45, -1, -1, 47, 44, -1, -1 },
		.pme_group_vector = {
			0x0000000000004000ULL }
	},
#define PPC970MP_PME_PM_FPU0_FMOV_FEST 128
	[ PPC970MP_PME_PM_FPU0_FMOV_FEST ] = {
		.pme_name = "PM_FPU0_FMOV_FEST",
		.pme_short_desc = "FPU0 executed FMOV or FEST instructions",
		.pme_long_desc = "This signal is active for one cycle when fp0 is executing a move kind of instruction or one of the estimate instructions.. This could be fmr*, fneg*, fabs*, fnabs* , fres* or frsqrte* where XYZ* means XYZ or XYZ",
		.pme_event_ids = { -1, -1, 14, 15, -1, -1, 14, 15 },
		.pme_group_vector = {
			0x0000000000001000ULL }
	},
#define PPC970MP_PME_PM_IOPS_CMPL 129
	[ PPC970MP_PME_PM_IOPS_CMPL ] = {
		.pme_name = "PM_IOPS_CMPL",
		.pme_short_desc = "IOPS instructions completed",
		.pme_long_desc = "Number of IOPS Instructions that completed.",
		.pme_event_ids = { 91, -1, -1, 68, -1, 86, 73, 69 },
		.pme_group_vector = {
			0x0000100000000000ULL }
	},
#define PPC970MP_PME_PM_LD_REF_L1_LSU0 130
	[ PPC970MP_PME_PM_LD_REF_L1_LSU0 ] = {
		.pme_name = "PM_LD_REF_L1_LSU0",
		.pme_short_desc = "LSU0 L1 D cache load references",
		.pme_long_desc = "A load executed on unit 0",
		.pme_event_ids = { -1, -1, 39, 37, -1, -1, 37, 38 },
		.pme_group_vector = {
			0x0000000000008000ULL }
	},
#define PPC970MP_PME_PM_LSU1_FLUSH_SRQ 131
	[ PPC970MP_PME_PM_LSU1_FLUSH_SRQ ] = {
		.pme_name = "PM_LSU1_FLUSH_SRQ",
		.pme_short_desc = "LSU1 SRQ flushes",
		.pme_long_desc = "A store was flushed because younger load hits and older store that is already in the SRQ or in the same group. ",
		.pme_event_ids = { 56, 55, -1, -1, 57, 54, -1, -1 },
		.pme_group_vector = {
			0x0000000000004000ULL }
	},
#define PPC970MP_PME_PM_CMPLU_STALL_DIV 132
	[ PPC970MP_PME_PM_CMPLU_STALL_DIV ] = {
		.pme_name = "PM_CMPLU_STALL_DIV",
		.pme_short_desc = "Completion stall caused by DIV instruction",
		.pme_long_desc = "Completion stall caused by DIV instruction",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, 68, -1 },
		.pme_group_vector = {
			0x0000080000000000ULL }
	},
#define PPC970MP_PME_PM_GRP_BR_MPRED 133
	[ PPC970MP_PME_PM_GRP_BR_MPRED ] = {
		.pme_name = "PM_GRP_BR_MPRED",
		.pme_short_desc = "Group experienced a branch mispredict",
		.pme_long_desc = "Group experienced a branch mispredict",
		.pme_event_ids = { 30, 29, -1, -1, 30, 29, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_LSU_LMQ_S0_ALLOC 134
	[ PPC970MP_PME_PM_LSU_LMQ_S0_ALLOC ] = {
		.pme_name = "PM_LSU_LMQ_S0_ALLOC",
		.pme_short_desc = "LMQ slot 0 allocated",
		.pme_long_desc = "The first entry in the LMQ was allocated.",
		.pme_event_ids = { -1, -1, 46, 44, -1, -1, 44, 46 },
		.pme_group_vector = {
			0x0000400008000000ULL }
	},
#define PPC970MP_PME_PM_LSU0_REJECT_LMQ_FULL 135
	[ PPC970MP_PME_PM_LSU0_REJECT_LMQ_FULL ] = {
		.pme_name = "PM_LSU0_REJECT_LMQ_FULL",
		.pme_short_desc = "LSU0 reject due to LMQ full or missed data coming",
		.pme_long_desc = "LSU0 reject due to LMQ full or missed data coming",
		.pme_event_ids = { 50, 49, -1, -1, 51, 48, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_ST_REF_L1 136
	[ PPC970MP_PME_PM_ST_REF_L1 ] = {
		.pme_name = "PM_ST_REF_L1",
		.pme_short_desc = "L1 D cache store references",
		.pme_long_desc = "Total DL1 Store references",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, 63, -1 },
		.pme_group_vector = {
			0x000000010260000eULL }
	},
#define PPC970MP_PME_PM_MRK_VMX_FIN 137
	[ PPC970MP_PME_PM_MRK_VMX_FIN ] = {
		.pme_name = "PM_MRK_VMX_FIN",
		.pme_short_desc = "Marked instruction VMX processing finished",
		.pme_long_desc = "Marked instruction VMX processing finished",
		.pme_event_ids = { -1, -1, 63, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_LSU_SRQ_EMPTY_CYC 138
	[ PPC970MP_PME_PM_LSU_SRQ_EMPTY_CYC ] = {
		.pme_name = "PM_LSU_SRQ_EMPTY_CYC",
		.pme_short_desc = "Cycles SRQ empty",
		.pme_long_desc = "The Store Request Queue is empty",
		.pme_event_ids = { -1, -1, -1, 47, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_FPU1_STF 139
	[ PPC970MP_PME_PM_FPU1_STF ] = {
		.pme_name = "PM_FPU1_STF",
		.pme_short_desc = "FPU1 executed store instruction",
		.pme_long_desc = "This signal is active for one cycle when fp1 is executing a store instruction.",
		.pme_event_ids = { 25, 24, -1, -1, 25, 24, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_RUN_CYC 140
	[ PPC970MP_PME_PM_RUN_CYC ] = {
		.pme_name = "PM_RUN_CYC",
		.pme_short_desc = "Run cycles",
		.pme_long_desc = "Processor Cycles gated by the run latch",
		.pme_event_ids = { 81, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000004000001ULL }
	},
#define PPC970MP_PME_PM_LSU_LMQ_S0_VALID 141
	[ PPC970MP_PME_PM_LSU_LMQ_S0_VALID ] = {
		.pme_name = "PM_LSU_LMQ_S0_VALID",
		.pme_short_desc = "LMQ slot 0 valid",
		.pme_long_desc = "This signal is asserted every cycle when the first entry in the LMQ is valid. The LMQ had eight entries that are allocated FIFO",
		.pme_event_ids = { -1, -1, 47, 45, -1, -1, 45, 47 },
		.pme_group_vector = {
			0x0000400008000000ULL }
	},
#define PPC970MP_PME_PM_LSU0_LDF 142
	[ PPC970MP_PME_PM_LSU0_LDF ] = {
		.pme_name = "PM_LSU0_LDF",
		.pme_short_desc = "LSU0 executed Floating Point load instruction",
		.pme_long_desc = "A floating point load was executed from LSU unit 0",
		.pme_event_ids = { -1, -1, 41, 39, -1, -1, 39, 40 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_LSU_LRQ_S0_VALID 143
	[ PPC970MP_PME_PM_LSU_LRQ_S0_VALID ] = {
		.pme_name = "PM_LSU_LRQ_S0_VALID",
		.pme_short_desc = "LRQ slot 0 valid",
		.pme_long_desc = "This signal is asserted every cycle that the Load Request Queue slot zero is valid. The SRQ is 32 entries long and is allocated round-robin.",
		.pme_event_ids = { 66, 66, -1, -1, 67, 65, -1, -1 },
		.pme_group_vector = {
			0x0000000010000000ULL }
	},
#define PPC970MP_PME_PM_PMC3_OVERFLOW 144
	[ PPC970MP_PME_PM_PMC3_OVERFLOW ] = {
		.pme_name = "PM_PMC3_OVERFLOW",
		.pme_short_desc = "PMC3 Overflow",
		.pme_long_desc = "PMC3 Overflow",
		.pme_event_ids = { -1, -1, -1, 62, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_IMR_RELOAD 145
	[ PPC970MP_PME_PM_MRK_IMR_RELOAD ] = {
		.pme_name = "PM_MRK_IMR_RELOAD",
		.pme_short_desc = "Marked IMR reloaded",
		.pme_long_desc = "A DL1 reload occured due to marked load",
		.pme_event_ids = { 73, 71, -1, -1, 72, 71, -1, -1 },
		.pme_group_vector = {
			0x0000001000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_GRP_TIMEO 146
	[ PPC970MP_PME_PM_MRK_GRP_TIMEO ] = {
		.pme_name = "PM_MRK_GRP_TIMEO",
		.pme_short_desc = "Marked group completion timeout",
		.pme_long_desc = "The sampling timeout expired indicating that the previously sampled instruction is no longer in the processor",
		.pme_event_ids = { -1, -1, -1, -1, 71, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000800000000ULL }
	},
#define PPC970MP_PME_PM_FPU_FMOV_FEST 147
	[ PPC970MP_PME_PM_FPU_FMOV_FEST ] = {
		.pme_name = "PM_FPU_FMOV_FEST",
		.pme_short_desc = "FPU executing FMOV or FEST instructions",
		.pme_long_desc = "This signal is active for one cycle when executing a move kind of instruction or one of the estimate instructions.. This could be fmr*, fneg*, fabs*, fnabs* , fres* or frsqrte* where XYZ* means XYZ or XYZ . Combined Unit 0 + Unit 1",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, -1, 22 },
		.pme_group_vector = {
			0x0000000000100010ULL }
	},
#define PPC970MP_PME_PM_GRP_DISP_BLK_SB_CYC 148
	[ PPC970MP_PME_PM_GRP_DISP_BLK_SB_CYC ] = {
		.pme_name = "PM_GRP_DISP_BLK_SB_CYC",
		.pme_short_desc = "Cycles group dispatch blocked by scoreboard",
		.pme_long_desc = "The ISU sends a signal indicating that dispatch is blocked by scoreboard.",
		.pme_event_ids = { -1, -1, 28, 29, -1, -1, 29, 28 },
		.pme_group_vector = {
			0x0000000000000040ULL }
	},
#define PPC970MP_PME_PM_XER_MAP_FULL_CYC 149
	[ PPC970MP_PME_PM_XER_MAP_FULL_CYC ] = {
		.pme_name = "PM_XER_MAP_FULL_CYC",
		.pme_short_desc = "Cycles XER mapper full",
		.pme_long_desc = "The ISU sends a signal indicating that the xer mapper cannot accept any more groups. Dispatch is stopped. Note: this condition indicates that a pool of mapper is full but the entire mapper may not be.",
		.pme_event_ids = { 87, 84, -1, -1, 83, 83, -1, -1 },
		.pme_group_vector = {
			0x0000000000000040ULL }
	},
#define PPC970MP_PME_PM_ST_MISS_L1 150
	[ PPC970MP_PME_PM_ST_MISS_L1 ] = {
		.pme_name = "PM_ST_MISS_L1",
		.pme_short_desc = "L1 D cache store misses",
		.pme_long_desc = "A store missed the dcache",
		.pme_event_ids = { -1, -1, 66, 63, -1, -1, 62, 63 },
		.pme_group_vector = {
			0x0000000000610000ULL }
	},
#define PPC970MP_PME_PM_STOP_COMPLETION 151
	[ PPC970MP_PME_PM_STOP_COMPLETION ] = {
		.pme_name = "PM_STOP_COMPLETION",
		.pme_short_desc = "Completion stopped",
		.pme_long_desc = "RAS Unit has signaled completion to stop",
		.pme_event_ids = { -1, -1, 65, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000201ULL }
	},
#define PPC970MP_PME_PM_MRK_GRP_CMPL 152
	[ PPC970MP_PME_PM_MRK_GRP_CMPL ] = {
		.pme_name = "PM_MRK_GRP_CMPL",
		.pme_short_desc = "Marked group completed",
		.pme_long_desc = "A group containing a sampled instruction completed. Microcoded instructions that span multiple groups will generate this event once per group.",
		.pme_event_ids = { -1, -1, -1, 51, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000a00000000ULL }
	},
#define PPC970MP_PME_PM_ISLB_MISS 153
	[ PPC970MP_PME_PM_ISLB_MISS ] = {
		.pme_name = "PM_ISLB_MISS",
		.pme_short_desc = "Instruction SLB misses",
		.pme_long_desc = "A SLB miss for an instruction fetch as occurred",
		.pme_event_ids = { 40, 39, -1, -1, 41, 38, -1, -1 },
		.pme_group_vector = {
			0x0000000004000000ULL }
	},
#define PPC970MP_PME_PM_SUSPENDED 154
	[ PPC970MP_PME_PM_SUSPENDED ] = {
		.pme_name = "PM_SUSPENDED",
		.pme_short_desc = "Suspended",
		.pme_long_desc = "Suspended",
		.pme_event_ids = { 86, 81, 69, 66, 82, 82, 66, 66 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_CYC 155
	[ PPC970MP_PME_PM_CYC ] = {
		.pme_name = "PM_CYC",
		.pme_short_desc = "Processor cycles",
		.pme_long_desc = "Processor cycles",
		.pme_event_ids = { 2, 2, 4, 5, 3, 2, 4, 4 },
		.pme_group_vector = {
			0x0007ffffffffffffULL }
	},
#define PPC970MP_PME_PM_LD_MISS_L1_LSU1 156
	[ PPC970MP_PME_PM_LD_MISS_L1_LSU1 ] = {
		.pme_name = "PM_LD_MISS_L1_LSU1",
		.pme_short_desc = "LSU1 L1 D cache load misses",
		.pme_long_desc = "A load, executing on unit 1, missed the dcache",
		.pme_event_ids = { -1, -1, 38, 36, -1, -1, 36, 36 },
		.pme_group_vector = {
			0x0003000000008000ULL }
	},
#define PPC970MP_PME_PM_STCX_FAIL 157
	[ PPC970MP_PME_PM_STCX_FAIL ] = {
		.pme_name = "PM_STCX_FAIL",
		.pme_short_desc = "STCX failed",
		.pme_long_desc = "A stcx (stwcx or stdcx) failed",
		.pme_event_ids = { 83, 78, -1, -1, 79, 79, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_LSU1_SRQ_STFWD 158
	[ PPC970MP_PME_PM_LSU1_SRQ_STFWD ] = {
		.pme_name = "PM_LSU1_SRQ_STFWD",
		.pme_short_desc = "LSU1 SRQ store forwarded",
		.pme_long_desc = "Data from a store instruction was forwarded to a load on unit 1",
		.pme_event_ids = { 63, 62, -1, -1, 64, 61, -1, -1 },
		.pme_group_vector = {
			0x0000000000020000ULL }
	},
#define PPC970MP_PME_PM_GRP_DISP 159
	[ PPC970MP_PME_PM_GRP_DISP ] = {
		.pme_name = "PM_GRP_DISP",
		.pme_short_desc = "Group dispatches",
		.pme_long_desc = "A group was dispatched",
		.pme_event_ids = { -1, 31, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_L2_PREF 160
	[ PPC970MP_PME_PM_L2_PREF ] = {
		.pme_name = "PM_L2_PREF",
		.pme_short_desc = "L2 cache prefetches",
		.pme_long_desc = "A request to prefetch data into L2 was made",
		.pme_event_ids = { -1, -1, 35, 34, -1, -1, 34, 34 },
		.pme_group_vector = {
			0x0000000010000000ULL }
	},
#define PPC970MP_PME_PM_FPU1_DENORM 161
	[ PPC970MP_PME_PM_FPU1_DENORM ] = {
		.pme_name = "PM_FPU1_DENORM",
		.pme_short_desc = "FPU1 received denormalized data",
		.pme_long_desc = "This signal is active for one cycle when one of the operands is denormalized.",
		.pme_event_ids = { 18, 17, -1, -1, 18, 17, -1, -1 },
		.pme_group_vector = {
			0x0000000000001000ULL }
	},
#define PPC970MP_PME_PM_DATA_FROM_L2 162
	[ PPC970MP_PME_PM_DATA_FROM_L2 ] = {
		.pme_name = "PM_DATA_FROM_L2",
		.pme_short_desc = "Data loaded from L2",
		.pme_long_desc = "DL1 was reloaded from the local L2 due to a demand load",
		.pme_event_ids = { 3, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0003000008000000ULL }
	},
#define PPC970MP_PME_PM_FPU0_FPSCR 163
	[ PPC970MP_PME_PM_FPU0_FPSCR ] = {
		.pme_name = "PM_FPU0_FPSCR",
		.pme_short_desc = "FPU0 executed FPSCR instruction",
		.pme_long_desc = "This signal is active for one cycle when fp0 is executing fpscr move related instruction. This could be mtfsfi*, mtfsb0*, mtfsb1*. mffs*, mtfsf*, mcrsf* where XYZ* means XYZ, XYZs, XYZ., XYZs",
		.pme_event_ids = { -1, -1, 15, 16, -1, -1, 15, 16 },
		.pme_group_vector = {
			0x0000000000002000ULL }
	},
#define PPC970MP_PME_PM_MRK_DATA_FROM_L25_MOD 164
	[ PPC970MP_PME_PM_MRK_DATA_FROM_L25_MOD ] = {
		.pme_name = "PM_MRK_DATA_FROM_L25_MOD",
		.pme_short_desc = "Marked data loaded from L2.5 modified",
		.pme_long_desc = "DL1 was reloaded with modified (M) data from the L2 of a chip on this MCM due to a marked demand load",
		.pme_event_ids = { -1, -1, -1, -1, -1, 88, -1, -1 },
		.pme_group_vector = {
			0x0004000000000000ULL }
	},
#define PPC970MP_PME_PM_FPU0_FSQRT 165
	[ PPC970MP_PME_PM_FPU0_FSQRT ] = {
		.pme_name = "PM_FPU0_FSQRT",
		.pme_short_desc = "FPU0 executed FSQRT instruction",
		.pme_long_desc = "This signal is active for one cycle at the end of the microcode executed when fp0 is executing a square root instruction. This could be fsqrt* where XYZ* means XYZ, XYZs, XYZ., XYZs.",
		.pme_event_ids = { 12, 11, -1, -1, 12, 11, -1, -1 },
		.pme_group_vector = {
			0x0000000000000800ULL }
	},
#define PPC970MP_PME_PM_LD_REF_L1 166
	[ PPC970MP_PME_PM_LD_REF_L1 ] = {
		.pme_name = "PM_LD_REF_L1",
		.pme_short_desc = "L1 D cache load references",
		.pme_long_desc = "Total DL1 Load references",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, -1, 37 },
		.pme_group_vector = {
			0x000304004260000eULL }
	},
#define PPC970MP_PME_PM_MRK_L1_RELOAD_VALID 167
	[ PPC970MP_PME_PM_MRK_L1_RELOAD_VALID ] = {
		.pme_name = "PM_MRK_L1_RELOAD_VALID",
		.pme_short_desc = "Marked L1 reload data source valid",
		.pme_long_desc = "The source information is valid and is for a marked load",
		.pme_event_ids = { -1, -1, 52, 52, -1, -1, 51, 51 },
		.pme_group_vector = {
			0x0004000000000000ULL }
	},
#define PPC970MP_PME_PM_1PLUS_PPC_CMPL 168
	[ PPC970MP_PME_PM_1PLUS_PPC_CMPL ] = {
		.pme_name = "PM_1PLUS_PPC_CMPL",
		.pme_short_desc = "One or more PPC instruction completed",
		.pme_long_desc = "A group containing at least one PPC instruction completed. For microcoded instructions that span multiple groups, this will only occur once.",
		.pme_event_ids = { -1, -1, -1, -1, 0, -1, -1, -1 },
		.pme_group_vector = {
			0x0001000000080001ULL }
	},
#define PPC970MP_PME_PM_INST_FROM_L1 169
	[ PPC970MP_PME_PM_INST_FROM_L1 ] = {
		.pme_name = "PM_INST_FROM_L1",
		.pme_short_desc = "Instruction fetched from L1",
		.pme_long_desc = "An instruction fetch group was fetched from L1. Fetch Groups can contain up to 8 instructions",
		.pme_event_ids = { 38, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000010080000000ULL }
	},
#define PPC970MP_PME_PM_EE_OFF_EXT_INT 170
	[ PPC970MP_PME_PM_EE_OFF_EXT_INT ] = {
		.pme_name = "PM_EE_OFF_EXT_INT",
		.pme_short_desc = "Cycles MSR(EE) bit off and external interrupt pending",
		.pme_long_desc = "Cycles MSR(EE) bit off and external interrupt pending",
		.pme_event_ids = { -1, -1, 9, 10, -1, -1, 9, 9 },
		.pme_group_vector = {
			0x0000000000000200ULL }
	},
#define PPC970MP_PME_PM_PMC6_OVERFLOW 171
	[ PPC970MP_PME_PM_PMC6_OVERFLOW ] = {
		.pme_name = "PM_PMC6_OVERFLOW",
		.pme_short_desc = "PMC6 Overflow",
		.pme_long_desc = "PMC6 Overflow",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, 61, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_LSU_LRQ_FULL_CYC 172
	[ PPC970MP_PME_PM_LSU_LRQ_FULL_CYC ] = {
		.pme_name = "PM_LSU_LRQ_FULL_CYC",
		.pme_short_desc = "Cycles LRQ full",
		.pme_long_desc = "The ISU sends this signal when the LRQ is full.",
		.pme_event_ids = { -1, -1, 49, 46, -1, -1, 46, 48 },
		.pme_group_vector = {
			0x0000000000000080ULL }
	},
#define PPC970MP_PME_PM_IC_PREF_INSTALL 173
	[ PPC970MP_PME_PM_IC_PREF_INSTALL ] = {
		.pme_name = "PM_IC_PREF_INSTALL",
		.pme_short_desc = "Instruction prefetched installed in prefetch",
		.pme_long_desc = "New line coming into the prefetch buffer",
		.pme_event_ids = { 34, 34, -1, -1, 36, 33, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_DC_PREF_OUT_OF_STREAMS 174
	[ PPC970MP_PME_PM_DC_PREF_OUT_OF_STREAMS ] = {
		.pme_name = "PM_DC_PREF_OUT_OF_STREAMS",
		.pme_short_desc = "D cache out of streams",
		.pme_long_desc = "out of streams",
		.pme_event_ids = { -1, -1, 6, 7, -1, -1, 6, 6 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_LSU1_FLUSH_SRQ 175
	[ PPC970MP_PME_PM_MRK_LSU1_FLUSH_SRQ ] = {
		.pme_name = "PM_MRK_LSU1_FLUSH_SRQ",
		.pme_short_desc = "LSU1 marked SRQ flushes",
		.pme_long_desc = "A marked store was flushed because younger load hits and older store that is already in the SRQ or in the same group.",
		.pme_event_ids = { -1, -1, 58, 58, -1, -1, 57, 57 },
		.pme_group_vector = {
			0x0000002000000000ULL }
	},
#define PPC970MP_PME_PM_GCT_FULL_CYC 176
	[ PPC970MP_PME_PM_GCT_FULL_CYC ] = {
		.pme_name = "PM_GCT_FULL_CYC",
		.pme_short_desc = "Cycles GCT full",
		.pme_long_desc = "The ISU sends a signal indicating the gct is full. ",
		.pme_event_ids = { 29, 28, -1, -1, 29, 28, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_INST_FROM_MEM 177
	[ PPC970MP_PME_PM_INST_FROM_MEM ] = {
		.pme_name = "PM_INST_FROM_MEM",
		.pme_short_desc = "Instruction fetched from memory",
		.pme_long_desc = "Instruction fetched from memory",
		.pme_event_ids = { -1, 38, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000810020000000ULL }
	},
#define PPC970MP_PME_PM_FLUSH_LSU_BR_MPRED 178
	[ PPC970MP_PME_PM_FLUSH_LSU_BR_MPRED ] = {
		.pme_name = "PM_FLUSH_LSU_BR_MPRED",
		.pme_short_desc = "Flush caused by LSU or branch mispredict",
		.pme_long_desc = "Flush caused by LSU or branch mispredict",
		.pme_event_ids = { -1, -1, 11, 12, -1, -1, 11, 12 },
		.pme_group_vector = {
			0x0000020000000000ULL }
	},
#define PPC970MP_PME_PM_FXU_BUSY 179
	[ PPC970MP_PME_PM_FXU_BUSY ] = {
		.pme_name = "PM_FXU_BUSY",
		.pme_short_desc = "FXU busy",
		.pme_long_desc = "FXU0 and FXU1 are both busy",
		.pme_event_ids = { -1, -1, -1, -1, -1, 27, -1, -1 },
		.pme_group_vector = {
			0x000008c000000000ULL }
	},
#define PPC970MP_PME_PM_ST_REF_L1_LSU1 180
	[ PPC970MP_PME_PM_ST_REF_L1_LSU1 ] = {
		.pme_name = "PM_ST_REF_L1_LSU1",
		.pme_short_desc = "LSU1 L1 D cache store references",
		.pme_long_desc = "A store executed on unit 1",
		.pme_event_ids = { -1, -1, 68, 65, -1, -1, 65, 65 },
		.pme_group_vector = {
			0x0000000000030000ULL }
	},
#define PPC970MP_PME_PM_MRK_LD_MISS_L1 181
	[ PPC970MP_PME_PM_MRK_LD_MISS_L1 ] = {
		.pme_name = "PM_MRK_LD_MISS_L1",
		.pme_short_desc = "Marked L1 D cache load misses",
		.pme_long_desc = "Marked L1 D cache load misses",
		.pme_event_ids = { 74, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000200000000ULL }
	},
#define PPC970MP_PME_PM_L1_WRITE_CYC 182
	[ PPC970MP_PME_PM_L1_WRITE_CYC ] = {
		.pme_name = "PM_L1_WRITE_CYC",
		.pme_short_desc = "Cycles writing to instruction L1",
		.pme_long_desc = "This signal is asserted each cycle a cache write is active.",
		.pme_event_ids = { -1, -1, 34, 33, -1, -1, 33, 33 },
		.pme_group_vector = {
			0x0000200000000000ULL }
	},
#define PPC970MP_PME_PM_LSU1_BUSY 183
	[ PPC970MP_PME_PM_LSU1_BUSY ] = {
		.pme_name = "PM_LSU1_BUSY",
		.pme_short_desc = "LSU1 busy",
		.pme_long_desc = "LSU unit 0 is busy rejecting instructions ",
		.pme_event_ids = { 89, 85, -1, -1, 89, 84, -1, -1 },
		.pme_group_vector = {
			0x0000020000000000ULL }
	},
#define PPC970MP_PME_PM_LSU_REJECT_LMQ_FULL 184
	[ PPC970MP_PME_PM_LSU_REJECT_LMQ_FULL ] = {
		.pme_name = "PM_LSU_REJECT_LMQ_FULL",
		.pme_short_desc = "LSU reject due to LMQ full or missed data coming",
		.pme_long_desc = "LSU reject due to LMQ full or missed data coming",
		.pme_event_ids = { -1, 67, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_CMPLU_STALL_FDIV 185
	[ PPC970MP_PME_PM_CMPLU_STALL_FDIV ] = {
		.pme_name = "PM_CMPLU_STALL_FDIV",
		.pme_short_desc = "Completion stall caused by FDIV or FQRT instruction",
		.pme_long_desc = "Completion stall caused by FDIV or FQRT instruction",
		.pme_event_ids = { -1, -1, -1, -1, 87, -1, -1, -1 },
		.pme_group_vector = {
			0x0000100000000000ULL }
	},
#define PPC970MP_PME_PM_FPU_ALL 186
	[ PPC970MP_PME_PM_FPU_ALL ] = {
		.pme_name = "PM_FPU_ALL",
		.pme_short_desc = "FPU executed add",
		.pme_long_desc = " mult",
		.pme_event_ids = { -1, -1, -1, -1, 26, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000020ULL }
	},
#define PPC970MP_PME_PM_LSU_SRQ_S0_ALLOC 187
	[ PPC970MP_PME_PM_LSU_SRQ_S0_ALLOC ] = {
		.pme_name = "PM_LSU_SRQ_S0_ALLOC",
		.pme_short_desc = "SRQ slot 0 allocated",
		.pme_long_desc = "SRQ Slot zero was allocated",
		.pme_event_ids = { 68, 68, -1, -1, 69, 67, -1, -1 },
		.pme_group_vector = {
			0x0000000040000000ULL }
	},
#define PPC970MP_PME_PM_INST_FROM_L25_SHR 188
	[ PPC970MP_PME_PM_INST_FROM_L25_SHR ] = {
		.pme_name = "PM_INST_FROM_L25_SHR",
		.pme_short_desc = "Instruction fetched from L2.5 shared",
		.pme_long_desc = "Instruction fetched from L2.5 shared",
		.pme_event_ids = { -1, -1, -1, -1, 40, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_GRP_MRK 189
	[ PPC970MP_PME_PM_GRP_MRK ] = {
		.pme_name = "PM_GRP_MRK",
		.pme_short_desc = "Group marked in IDU",
		.pme_long_desc = "A group was sampled (marked)",
		.pme_event_ids = { -1, -1, -1, -1, 35, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000600000000ULL }
	},
#define PPC970MP_PME_PM_BR_MPRED_CR 190
	[ PPC970MP_PME_PM_BR_MPRED_CR ] = {
		.pme_name = "PM_BR_MPRED_CR",
		.pme_short_desc = "Branch mispredictions due to CR bit setting",
		.pme_long_desc = "This signal is asserted when the branch execution unit detects a branch mispredict because the CR value is opposite of the predicted value. This signal is asserted after a branch issue event and will result in a branch redirect flush if not overridden by a flush of an older instruction.",
		.pme_event_ids = { -1, -1, 1, 2, -1, -1, 1, 1 },
		.pme_group_vector = {
			0x0000800005000000ULL }
	},
#define PPC970MP_PME_PM_DC_PREF_STREAM_ALLOC 191
	[ PPC970MP_PME_PM_DC_PREF_STREAM_ALLOC ] = {
		.pme_name = "PM_DC_PREF_STREAM_ALLOC",
		.pme_short_desc = "D cache new prefetch stream allocated",
		.pme_long_desc = "A new Prefetch Stream was allocated",
		.pme_event_ids = { -1, -1, 7, 8, -1, -1, 7, 7 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_FPU1_FIN 192
	[ PPC970MP_PME_PM_FPU1_FIN ] = {
		.pme_name = "PM_FPU1_FIN",
		.pme_short_desc = "FPU1 produced a result",
		.pme_long_desc = "fp1 finished, produced a result. This only indicates finish, not completion. ",
		.pme_event_ids = { -1, -1, 18, 19, -1, -1, 18, 19 },
		.pme_group_vector = {
			0x0000000000802800ULL }
	},
#define PPC970MP_PME_PM_LSU_REJECT_SRQ 193
	[ PPC970MP_PME_PM_LSU_REJECT_SRQ ] = {
		.pme_name = "PM_LSU_REJECT_SRQ",
		.pme_short_desc = "LSU SRQ rejects",
		.pme_long_desc = "LSU SRQ rejects",
		.pme_event_ids = { 67, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_BR_MPRED_TA 194
	[ PPC970MP_PME_PM_BR_MPRED_TA ] = {
		.pme_name = "PM_BR_MPRED_TA",
		.pme_short_desc = "Branch mispredictions due to target address",
		.pme_long_desc = "branch miss predict due to a target address prediction. This signal will be asserted each time the branch execution unit detects an incorrect target address prediction. This signal will be asserted after a valid branch execution unit issue and will cause a branch mispredict flush unless a flush is detected from an older instruction.",
		.pme_event_ids = { -1, -1, 2, 3, -1, -1, 2, 2 },
		.pme_group_vector = {
			0x0000a00005000000ULL }
	},
#define PPC970MP_PME_PM_CRQ_FULL_CYC 195
	[ PPC970MP_PME_PM_CRQ_FULL_CYC ] = {
		.pme_name = "PM_CRQ_FULL_CYC",
		.pme_short_desc = "Cycles CR issue queue full",
		.pme_long_desc = "The ISU sends a signal indicating that the issue queue that feeds the ifu cr unit cannot accept any more group (queue is full of groups).",
		.pme_event_ids = { -1, -1, 3, 4, -1, -1, 3, 3 },
		.pme_group_vector = {
			0x0000000000000040ULL }
	},
#define PPC970MP_PME_PM_LD_MISS_L1 196
	[ PPC970MP_PME_PM_LD_MISS_L1 ] = {
		.pme_name = "PM_LD_MISS_L1",
		.pme_short_desc = "L1 D cache load misses",
		.pme_long_desc = "Total DL1 Load references that miss the DL1",
		.pme_event_ids = { -1, -1, 36, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000040043600006ULL }
	},
#define PPC970MP_PME_PM_INST_FROM_PREF 197
	[ PPC970MP_PME_PM_INST_FROM_PREF ] = {
		.pme_name = "PM_INST_FROM_PREF",
		.pme_short_desc = "Instructions fetched from prefetch",
		.pme_long_desc = "An instruction fetch group was fetched from the prefetch buffer. Fetch Groups can contain up to 8 instructions",
		.pme_event_ids = { -1, -1, 31, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000810000000000ULL }
	},
#define PPC970MP_PME_PM_STCX_PASS 198
	[ PPC970MP_PME_PM_STCX_PASS ] = {
		.pme_name = "PM_STCX_PASS",
		.pme_short_desc = "Stcx passes",
		.pme_long_desc = "A stcx (stwcx or stdcx) instruction was successful",
		.pme_event_ids = { 84, 79, -1, -1, 80, 80, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_DC_INV_L2 199
	[ PPC970MP_PME_PM_DC_INV_L2 ] = {
		.pme_name = "PM_DC_INV_L2",
		.pme_short_desc = "L1 D cache entries invalidated from L2",
		.pme_long_desc = "A dcache invalidated was received from the L2 because a line in L2 was castout.",
		.pme_event_ids = { -1, -1, 5, 6, -1, -1, 5, 5 },
		.pme_group_vector = {
			0x0000000020010006ULL }
	},
#define PPC970MP_PME_PM_LSU_SRQ_FULL_CYC 200
	[ PPC970MP_PME_PM_LSU_SRQ_FULL_CYC ] = {
		.pme_name = "PM_LSU_SRQ_FULL_CYC",
		.pme_short_desc = "Cycles SRQ full",
		.pme_long_desc = "The ISU sends this signal when the srq is full.",
		.pme_event_ids = { -1, -1, 50, 48, -1, -1, 47, 49 },
		.pme_group_vector = {
			0x0000000000000080ULL }
	},
#define PPC970MP_PME_PM_LSU0_FLUSH_LRQ 201
	[ PPC970MP_PME_PM_LSU0_FLUSH_LRQ ] = {
		.pme_name = "PM_LSU0_FLUSH_LRQ",
		.pme_short_desc = "LSU0 LRQ flushes",
		.pme_long_desc = "A load was flushed by unit 1 because a younger load executed before an older store executed and they had overlapping data OR two loads executed out of order and they have byte overlap and there was a snoop in between to an overlapped byte.",
		.pme_event_ids = { 45, 44, -1, -1, 46, 43, -1, -1 },
		.pme_group_vector = {
			0x0000000000004000ULL }
	},
#define PPC970MP_PME_PM_LSU_SRQ_S0_VALID 202
	[ PPC970MP_PME_PM_LSU_SRQ_S0_VALID ] = {
		.pme_name = "PM_LSU_SRQ_S0_VALID",
		.pme_short_desc = "SRQ slot 0 valid",
		.pme_long_desc = "This signal is asserted every cycle that the Store Request Queue slot zero is valid. The SRQ is 32 entries long and is allocated round-robin.",
		.pme_event_ids = { 69, 69, -1, -1, 70, 68, -1, -1 },
		.pme_group_vector = {
			0x0000000040000000ULL }
	},
#define PPC970MP_PME_PM_LARX_LSU0 203
	[ PPC970MP_PME_PM_LARX_LSU0 ] = {
		.pme_name = "PM_LARX_LSU0",
		.pme_short_desc = "Larx executed on LSU0",
		.pme_long_desc = "A larx (lwarx or ldarx) was executed on side 0 (there is no coresponding unit 1 event since larx instructions can only execute on unit 0)",
		.pme_event_ids = { 42, 41, -1, -1, 43, 40, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_GCT_EMPTY_CYC 204
	[ PPC970MP_PME_PM_GCT_EMPTY_CYC ] = {
		.pme_name = "PM_GCT_EMPTY_CYC",
		.pme_short_desc = "Cycles GCT empty",
		.pme_long_desc = "The Global Completion Table is completely empty",
		.pme_event_ids = { 28, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000200100080200ULL }
	},
#define PPC970MP_PME_PM_FPU1_ALL 205
	[ PPC970MP_PME_PM_FPU1_ALL ] = {
		.pme_name = "PM_FPU1_ALL",
		.pme_short_desc = "FPU1 executed add",
		.pme_long_desc = " mult",
		.pme_event_ids = { 17, 16, -1, -1, 17, 16, -1, -1 },
		.pme_group_vector = {
			0x0000000000000800ULL }
	},
#define PPC970MP_PME_PM_FPU1_FSQRT 206
	[ PPC970MP_PME_PM_FPU1_FSQRT ] = {
		.pme_name = "PM_FPU1_FSQRT",
		.pme_short_desc = "FPU1 executed FSQRT instruction",
		.pme_long_desc = "This signal is active for one cycle at the end of the microcode executed when fp1 is executing a square root instruction. This could be fsqrt* where XYZ* means XYZ, XYZs, XYZ., XYZs.",
		.pme_event_ids = { 21, 20, -1, -1, 21, 20, -1, -1 },
		.pme_group_vector = {
			0x0000000000000800ULL }
	},
#define PPC970MP_PME_PM_FPU_FIN 207
	[ PPC970MP_PME_PM_FPU_FIN ] = {
		.pme_name = "PM_FPU_FIN",
		.pme_short_desc = "FPU produced a result",
		.pme_long_desc = "FPU finished, produced a result This only indicates finish, not completion. Combined Unit 0 + Unit 1",
		.pme_event_ids = { -1, -1, -1, 22, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000080000100010ULL }
	},
#define PPC970MP_PME_PM_LSU_SRQ_STFWD 208
	[ PPC970MP_PME_PM_LSU_SRQ_STFWD ] = {
		.pme_name = "PM_LSU_SRQ_STFWD",
		.pme_short_desc = "SRQ store forwarded",
		.pme_long_desc = "Data from a store instruction was forwarded to a load",
		.pme_event_ids = { 70, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_LD_MISS_L1_LSU1 209
	[ PPC970MP_PME_PM_MRK_LD_MISS_L1_LSU1 ] = {
		.pme_name = "PM_MRK_LD_MISS_L1_LSU1",
		.pme_short_desc = "LSU1 L1 D cache load misses",
		.pme_long_desc = "A marked load, executing on unit 1, missed the dcache",
		.pme_event_ids = { 76, 73, -1, -1, 74, 73, -1, -1 },
		.pme_group_vector = {
			0x0000002000000000ULL }
	},
#define PPC970MP_PME_PM_FXU0_FIN 210
	[ PPC970MP_PME_PM_FXU0_FIN ] = {
		.pme_name = "PM_FXU0_FIN",
		.pme_short_desc = "FXU0 produced a result",
		.pme_long_desc = "The Fixed Point unit 0 finished an instruction and produced a result",
		.pme_event_ids = { -1, -1, 24, 25, -1, -1, 25, 25 },
		.pme_group_vector = {
			0x0000008000000100ULL }
	},
#define PPC970MP_PME_PM_MRK_FPU_FIN 211
	[ PPC970MP_PME_PM_MRK_FPU_FIN ] = {
		.pme_name = "PM_MRK_FPU_FIN",
		.pme_short_desc = "Marked instruction FPU processing finished",
		.pme_long_desc = "One of the Floating Point Units finished a marked instruction. Instructions that finish may not necessary complete",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, 49, -1 },
		.pme_group_vector = {
			0x0000000400000000ULL }
	},
#define PPC970MP_PME_PM_PMC5_OVERFLOW 212
	[ PPC970MP_PME_PM_PMC5_OVERFLOW ] = {
		.pme_name = "PM_PMC5_OVERFLOW",
		.pme_short_desc = "PMC5 Overflow",
		.pme_long_desc = "PMC5 Overflow",
		.pme_event_ids = { -1, -1, -1, -1, -1, 77, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_SNOOP_TLBIE 213
	[ PPC970MP_PME_PM_SNOOP_TLBIE ] = {
		.pme_name = "PM_SNOOP_TLBIE",
		.pme_short_desc = "Snoop TLBIE",
		.pme_long_desc = "A TLB miss for a data request occurred. Requests that miss the TLB may be retried until the instruction is in the next to complete group (unless HID4 is set to allow speculative tablewalks). This may result in multiple TLB misses for the same instruction.",
		.pme_event_ids = { 82, 77, -1, -1, 78, 78, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_FPU1_FRSP_FCONV 214
	[ PPC970MP_PME_PM_FPU1_FRSP_FCONV ] = {
		.pme_name = "PM_FPU1_FRSP_FCONV",
		.pme_short_desc = "FPU1 executed FRSP or FCONV instructions",
		.pme_long_desc = "This signal is active for one cycle when fp1 is executing frsp or convert kind of instruction. This could be frsp*, fcfid*, fcti* where XYZ* means XYZ, XYZs, XYZ., XYZs.",
		.pme_event_ids = { -1, -1, 20, 21, -1, -1, 20, 21 },
		.pme_group_vector = {
			0x0000000000000400ULL }
	},
#define PPC970MP_PME_PM_FPU0_FDIV 215
	[ PPC970MP_PME_PM_FPU0_FDIV ] = {
		.pme_name = "PM_FPU0_FDIV",
		.pme_short_desc = "FPU0 executed FDIV instruction",
		.pme_long_desc = "This signal is active for one cycle at the end of the microcode executed when fp0 is executing a divide instruction. This could be fdiv, fdivs, fdiv. fdivs.",
		.pme_event_ids = { 10, 9, -1, -1, 10, 9, -1, -1 },
		.pme_group_vector = {
			0x0000000000000400ULL }
	},
#define PPC970MP_PME_PM_LD_REF_L1_LSU1 216
	[ PPC970MP_PME_PM_LD_REF_L1_LSU1 ] = {
		.pme_name = "PM_LD_REF_L1_LSU1",
		.pme_short_desc = "LSU1 L1 D cache load references",
		.pme_long_desc = "A load executed on unit 1",
		.pme_event_ids = { -1, -1, 40, 38, -1, -1, 38, 39 },
		.pme_group_vector = {
			0x0000000000008000ULL }
	},
#define PPC970MP_PME_PM_HV_CYC 217
	[ PPC970MP_PME_PM_HV_CYC ] = {
		.pme_name = "PM_HV_CYC",
		.pme_short_desc = "Hypervisor Cycles",
		.pme_long_desc = "Cycles when the processor is executing in Hypervisor (MSR[HV] = 1 and MSR[PR]=0)",
		.pme_event_ids = { -1, -1, 29, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000020080000ULL }
	},
#define PPC970MP_PME_PM_LR_CTR_MAP_FULL_CYC 218
	[ PPC970MP_PME_PM_LR_CTR_MAP_FULL_CYC ] = {
		.pme_name = "PM_LR_CTR_MAP_FULL_CYC",
		.pme_short_desc = "Cycles LR/CTR mapper full",
		.pme_long_desc = "The ISU sends a signal indicating that the lr/ctr mapper cannot accept any more groups. Dispatch is stopped. Note: this condition indicates that a pool of mapper is full but the entire mapper may not be.",
		.pme_event_ids = { 43, 42, -1, -1, 44, 41, -1, -1 },
		.pme_group_vector = {
			0x0000000000000040ULL }
	},
#define PPC970MP_PME_PM_FPU_DENORM 219
	[ PPC970MP_PME_PM_FPU_DENORM ] = {
		.pme_name = "PM_FPU_DENORM",
		.pme_short_desc = "FPU received denormalized data",
		.pme_long_desc = "This signal is active for one cycle when one of the operands is denormalized. Combined Unit 0 + Unit 1",
		.pme_event_ids = { 26, -1, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000020ULL }
	},
#define PPC970MP_PME_PM_LSU0_REJECT_SRQ 220
	[ PPC970MP_PME_PM_LSU0_REJECT_SRQ ] = {
		.pme_name = "PM_LSU0_REJECT_SRQ",
		.pme_short_desc = "LSU0 SRQ rejects",
		.pme_long_desc = "LSU0 SRQ rejects",
		.pme_event_ids = { 52, 51, -1, -1, 53, 50, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_LSU1_REJECT_SRQ 221
	[ PPC970MP_PME_PM_LSU1_REJECT_SRQ ] = {
		.pme_name = "PM_LSU1_REJECT_SRQ",
		.pme_short_desc = "LSU1 SRQ rejects",
		.pme_long_desc = "LSU1 SRQ rejects",
		.pme_event_ids = { 62, 61, -1, -1, 63, 60, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_LSU1_DERAT_MISS 222
	[ PPC970MP_PME_PM_LSU1_DERAT_MISS ] = {
		.pme_name = "PM_LSU1_DERAT_MISS",
		.pme_short_desc = "LSU1 DERAT misses",
		.pme_long_desc = "A data request (load or store) from LSU Unit 1 missed the ERAT and resulted in an ERAT reload. Multiple instructions may miss the ERAT entry for the same 4K page, but only one reload will occur.",
		.pme_event_ids = { 54, 53, -1, -1, 55, 52, -1, -1 },
		.pme_group_vector = {
			0x0000000000040000ULL }
	},
#define PPC970MP_PME_PM_IC_PREF_REQ 223
	[ PPC970MP_PME_PM_IC_PREF_REQ ] = {
		.pme_name = "PM_IC_PREF_REQ",
		.pme_short_desc = "Instruction prefetch requests",
		.pme_long_desc = "Asserted when a non-canceled prefetch is made to the cache interface unit (CIU).",
		.pme_event_ids = { 35, 35, -1, -1, 37, 34, -1, -1 },
		.pme_group_vector = {
			0x0000000000000000ULL }
	},
#define PPC970MP_PME_PM_MRK_LSU_FIN 224
	[ PPC970MP_PME_PM_MRK_LSU_FIN ] = {
		.pme_name = "PM_MRK_LSU_FIN",
		.pme_short_desc = "Marked instruction LSU processing finished",
		.pme_long_desc = "One of the Load/Store Units finished a marked instruction. Instructions that finish may not necessary complete",
		.pme_event_ids = { -1, -1, -1, -1, -1, -1, -1, 60 },
		.pme_group_vector = {
			0x0000000400000000ULL }
	},
#define PPC970MP_PME_PM_MRK_DATA_FROM_MEM 225
	[ PPC970MP_PME_PM_MRK_DATA_FROM_MEM ] = {
		.pme_name = "PM_MRK_DATA_FROM_MEM",
		.pme_short_desc = "Marked data loaded from memory",
		.pme_long_desc = "Marked data loaded from memory",
		.pme_event_ids = { -1, 88, -1, -1, -1, -1, -1, -1 },
		.pme_group_vector = {
			0x0004000000000000ULL }
	},
#define PPC970MP_PME_PM_CMPLU_STALL_DCACHE_MISS 226
	[ PPC970MP_PME_PM_CMPLU_STALL_DCACHE_MISS ] = {
		.pme_name = "PM_CMPLU_STALL_DCACHE_MISS",
		.pme_short_desc = "Completion stall caused by D cache miss",
		.pme_long_desc = "Completion stall caused by D cache miss",
		.pme_event_ids = { -1, -1, -1, -1, 86, -1, -1, -1 },
		.pme_group_vector = {
			0x0000040000000000ULL }
	},
#define PPC970MP_PME_PM_LSU0_FLUSH_UST 227
	[ PPC970MP_PME_PM_LSU0_FLUSH_UST ] = {
		.pme_name = "PM_LSU0_FLUSH_UST",
		.pme_short_desc = "LSU0 unaligned store flushes",
		.pme_long_desc = "A store was flushed from unit 0 because it was unaligned (crossed a 4k boundary)",
		.pme_event_ids = { 48, 47, -1, -1, 49, 46, -1, -1 },
		.pme_group_vector = {
			0x0000000000010000ULL }
	},
#define PPC970MP_PME_PM_LSU_FLUSH_LRQ 228
	[ PPC970MP_PME_PM_LSU_FLUSH_LRQ ] = {
		.pme_name = "PM_LSU_FLUSH_LRQ",
		.pme_short_desc = "LRQ flushes",
		.pme_long_desc = "A load was flushed because a younger load executed before an older store executed and they had overlapping data OR two loads executed out of order and they have byte overlap and there was a snoop in between to an overlapped byte.",
		.pme_event_ids = { -1, -1, -1, -1, -1, 63, -1, -1 },
		.pme_group_vector = {
			0x0000000000000008ULL }
	},
#define PPC970MP_PME_PM_LSU_FLUSH_SRQ 229
	[ PPC970MP_PME_PM_LSU_FLUSH_SRQ ] = {
		.pme_name = "PM_LSU_FLUSH_SRQ",
		.pme_short_desc = "SRQ flushes",
		.pme_long_desc = "A store was flushed because younger load hits and older store that is already in the SRQ or in the same group.",
		.pme_event_ids = { -1, -1, -1, -1, 65, -1, -1, -1 },
		.pme_group_vector = {
			0x0000000000000008ULL }
	}
};
#define PPC970MP_PME_EVENT_COUNT 230

static pmg_ppc970mp_group_t ppc970mp_groups[] = {
	[ 0 ] = {
		.pmg_name = "pm_slice0",
		.pmg_desc = "Time Slice 0",
		.pmg_event_ids = { 81, 2, 65, 30, 0, 2, 28, 29 },
		.pmg_mmcr0 = 0x000000000000051eULL,
		.pmg_mmcr1 = 0x000000000a46f18cULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 1 ] = {
		.pmg_name = "pm_eprof",
		.pmg_desc = "Group for use with eprof",
		.pmg_event_ids = { 2, 2, 36, 6, 39, 35, 63, 37 },
		.pmg_mmcr0 = 0x0000000000000f1eULL,
		.pmg_mmcr1 = 0x4003001005f09000ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 2 ] = {
		.pmg_name = "pm_basic",
		.pmg_desc = "Basic performance indicators",
		.pmg_event_ids = { 36, 2, 36, 6, 39, 35, 63, 37 },
		.pmg_mmcr0 = 0x000000000000091eULL,
		.pmg_mmcr1 = 0x4003001005f09000ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 3 ] = {
		.pmg_name = "pm_lsu",
		.pmg_desc = "Information on the Load Store Unit",
		.pmg_event_ids = { 64, 63, 4, 30, 65, 63, 63, 37 },
		.pmg_mmcr0 = 0x0000000000000000ULL,
		.pmg_mmcr1 = 0x000f00007a400000ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 4 ] = {
		.pmg_name = "pm_fpu1",
		.pmg_desc = "Floating Point events",
		.pmg_event_ids = { 27, 25, 21, 22, 3, 25, 30, 22 },
		.pmg_mmcr0 = 0x0000000000000000ULL,
		.pmg_mmcr1 = 0x00000000001e0480ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 5 ] = {
		.pmg_name = "pm_fpu2",
		.pmg_desc = "Floating Point events",
		.pmg_event_ids = { 26, 26, 4, 30, 26, 26, 21, 43 },
		.pmg_mmcr0 = 0x0000000000000000ULL,
		.pmg_mmcr1 = 0x000020e87a400000ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 6 ] = {
		.pmg_name = "pm_isu_rename",
		.pmg_desc = "ISU Rename Pool Events",
		.pmg_event_ids = { 87, 1, 3, 29, 44, 36, 30, 4 },
		.pmg_mmcr0 = 0x0000000000001228ULL,
		.pmg_mmcr1 = 0x400000218e6d84bcULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 7 ] = {
		.pmg_name = "pm_isu_queues1",
		.pmg_desc = "ISU Rename Pool Events",
		.pmg_event_ids = { 13, 21, 22, 24, 3, 35, 46, 49 },
		.pmg_mmcr0 = 0x000000000000132eULL,
		.pmg_mmcr1 = 0x40000000851e994cULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 8 ] = {
		.pmg_name = "pm_isu_flow",
		.pmg_desc = "ISU Instruction Flow Events",
		.pmg_event_ids = { 37, 2, 24, 27, 34, 31, 30, 4 },
		.pmg_mmcr0 = 0x000000000000181eULL,
		.pmg_mmcr1 = 0x400000b3d7b7c4bcULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 9 ] = {
		.pmg_name = "pm_isu_work",
		.pmg_desc = "ISU Indicators of Work Blockage",
		.pmg_event_ids = { 28, 83, 65, 10, 3, 35, 8, 10 },
		.pmg_mmcr0 = 0x0000000000000402ULL,
		.pmg_mmcr1 = 0x400000050fde9d88ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 10 ] = {
		.pmg_name = "pm_fpu3",
		.pmg_desc = "Floating Point events by unit",
		.pmg_event_ids = { 10, 18, 16, 21, 11, 19, 30, 4 },
		.pmg_mmcr0 = 0x0000000000001028ULL,
		.pmg_mmcr1 = 0x000000008d6354bcULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 11 ] = {
		.pmg_name = "pm_fpu4",
		.pmg_desc = "Floating Point events by unit",
		.pmg_event_ids = { 12, 20, 13, 19, 8, 16, 30, 4 },
		.pmg_mmcr0 = 0x000000000000122cULL,
		.pmg_mmcr1 = 0x000000009de774bcULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 12 ] = {
		.pmg_name = "pm_fpu5",
		.pmg_desc = "Floating Point events by unit",
		.pmg_event_ids = { 9, 17, 14, 20, 3, 35, 12, 18 },
		.pmg_mmcr0 = 0x0000000000001838ULL,
		.pmg_mmcr1 = 0x000000c0851e9958ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 13 ] = {
		.pmg_name = "pm_fpu7",
		.pmg_desc = "Floating Point events by unit",
		.pmg_event_ids = { 15, 23, 13, 19, 3, 35, 4, 16 },
		.pmg_mmcr0 = 0x000000000000193aULL,
		.pmg_mmcr1 = 0x000000c89dde97e0ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 14 ] = {
		.pmg_name = "pm_lsu_flush",
		.pmg_desc = "LSU Flush Events",
		.pmg_event_ids = { 45, 54, 4, 5, 47, 54, 30, 4 },
		.pmg_mmcr0 = 0x000000000000122cULL,
		.pmg_mmcr1 = 0x000c00007be774bcULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 15 ] = {
		.pmg_name = "pm_lsu_load1",
		.pmg_desc = "LSU Load Events",
		.pmg_event_ids = { 47, 56, 39, 38, 3, 35, 35, 36 },
		.pmg_mmcr0 = 0x0000000000001028ULL,
		.pmg_mmcr1 = 0x000f0000851e9958ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 16 ] = {
		.pmg_name = "pm_lsu_store1",
		.pmg_desc = "LSU Store Events",
		.pmg_event_ids = { 48, 57, 67, 65, 3, 35, 62, 5 },
		.pmg_mmcr0 = 0x000000000000112aULL,
		.pmg_mmcr1 = 0x000f00008d5e99dcULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 17 ] = {
		.pmg_name = "pm_lsu_store2",
		.pmg_desc = "LSU Store Events",
		.pmg_event_ids = { 53, 62, 67, 65, 81, 2, 30, 4 },
		.pmg_mmcr0 = 0x0000000000001838ULL,
		.pmg_mmcr1 = 0x0003c0d08d76f4bcULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 18 ] = {
		.pmg_name = "pm_lsu7",
		.pmg_desc = "Information on the Load Store Unit",
		.pmg_event_ids = { 44, 53, 4, 5, 38, 2, 31, 4 },
		.pmg_mmcr0 = 0x000000000000122cULL,
		.pmg_mmcr1 = 0x000830047bd2fe3cULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 19 ] = {
		.pmg_name = "pm_misc",
		.pmg_desc = "Misc Events for testing",
		.pmg_event_ids = { 28, 64, 29, 5, 0, 35, 28, 67 },
		.pmg_mmcr0 = 0x0000000000000404ULL,
		.pmg_mmcr1 = 0x0000000023c69194ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 20 ] = {
		.pmg_name = "pm_pe_bench1",
		.pmg_desc = "PE Benchmarker group for FP analysis",
		.pmg_event_ids = { 27, 25, 26, 22, 3, 25, 30, 22 },
		.pmg_mmcr0 = 0x0000000000000000ULL,
		.pmg_mmcr1 = 0x10001002001e0480ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 21 ] = {
		.pmg_name = "pm_pe_bench4",
		.pmg_desc = "PE Benchmarker group for L1 and TLB",
		.pmg_event_ids = { 6, 40, 36, 63, 3, 35, 63, 37 },
		.pmg_mmcr0 = 0x0000000000001420ULL,
		.pmg_mmcr1 = 0x000b000004de9000ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 22 ] = {
		.pmg_name = "pm_hpmcount1",
		.pmg_desc = "Hpmcount group for L1 and TLB behavior",
		.pmg_event_ids = { 6, 64, 36, 63, 3, 35, 63, 37 },
		.pmg_mmcr0 = 0x0000000000001404ULL,
		.pmg_mmcr1 = 0x000b000004de9000ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 23 ] = {
		.pmg_name = "pm_hpmcount2",
		.pmg_desc = "Hpmcount group for computation",
		.pmg_event_ids = { 27, 25, 13, 19, 3, 26, 30, 43 },
		.pmg_mmcr0 = 0x0000000000000000ULL,
		.pmg_mmcr1 = 0x000020289dde0480ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 24 ] = {
		.pmg_name = "pm_l1andbr",
		.pmg_desc = "L1 misses and branch misspredict analysis",
		.pmg_event_ids = { 36, 2, 36, 1, 81, 2, 1, 2 },
		.pmg_mmcr0 = 0x000000000000091eULL,
		.pmg_mmcr1 = 0x8003c01d0676fd6cULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 25 ] = {
		.pmg_name = "Instruction mix: loads",
		.pmg_desc = " stores and branches",
		.pmg_event_ids = { 36, 2, 36, 1, 3, 81, 63, 37 },
		.pmg_mmcr0 = 0x000000000000091eULL,
		.pmg_mmcr1 = 0x8003c021065fb000ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 26 ] = {
		.pmg_name = "pm_branch",
		.pmg_desc = "SLB and branch misspredict analysis",
		.pmg_event_ids = { 81, 4, 0, 2, 41, 2, 30, 2 },
		.pmg_mmcr0 = 0x000000000000052aULL,
		.pmg_mmcr1 = 0x8008000bcea2f4ecULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 27 ] = {
		.pmg_name = "pm_data",
		.pmg_desc = "data source and LMQ",
		.pmg_event_ids = { 3, 87, 30, 5, 38, 2, 44, 47 },
		.pmg_mmcr0 = 0x000000000000070eULL,
		.pmg_mmcr1 = 0x0000300c4bd2ff74ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 28 ] = {
		.pmg_name = "pm_tlb",
		.pmg_desc = "TLB and LRQ plus data prefetch",
		.pmg_event_ids = { 6, 40, 30, 5, 66, 65, 32, 34 },
		.pmg_mmcr0 = 0x0000000000001420ULL,
		.pmg_mmcr1 = 0x0008e03c4bfdacecULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 29 ] = {
		.pmg_name = "pm_isource",
		.pmg_desc = "inst source and tablewalk",
		.pmg_event_ids = { 39, 38, 29, 30, 4, 2, 28, 5 },
		.pmg_mmcr0 = 0x000000000000060cULL,
		.pmg_mmcr1 = 0x800b00c0226ef1dcULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 30 ] = {
		.pmg_name = "pm_sync",
		.pmg_desc = "Sync and SRQ",
		.pmg_event_ids = { 68, 69, 36, 49, 38, 35, 4, 37 },
		.pmg_mmcr0 = 0x0000000000001d32ULL,
		.pmg_mmcr1 = 0x0003e0c107529780ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 31 ] = {
		.pmg_name = "pm_ierat",
		.pmg_desc = "IERAT",
		.pmg_event_ids = { 38, 36, 70, 5, 38, 2, 30, 4 },
		.pmg_mmcr0 = 0x0000000000000d12ULL,
		.pmg_mmcr1 = 0x80000082c3d2f4bcULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 32 ] = {
		.pmg_name = "pm_derat",
		.pmg_desc = "DERAT",
		.pmg_event_ids = { 28, 33, 32, 30, 39, 62, 63, 4 },
		.pmg_mmcr0 = 0x0000000000000436ULL,
		.pmg_mmcr1 = 0x100b7052e274003cULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 33 ] = {
		.pmg_name = "pm_mark1",
		.pmg_desc = "Information on marked instructions",
		.pmg_event_ids = { 74, 82, 4, 51, 35, 70, 50, 30 },
		.pmg_mmcr0 = 0x0000000000000006ULL,
		.pmg_mmcr1 = 0x00008080790852a4ULL,
		.pmg_mmcra = 0x0000000000002001ULL
	},
	[ 34 ] = {
		.pmg_name = "pm_mark2",
		.pmg_desc = "Marked Instructions Processing Flow",
		.pmg_event_ids = { 72, 70, 4, 50, 35, 69, 49, 60 },
		.pmg_mmcr0 = 0x000000000000020aULL,
		.pmg_mmcr1 = 0x0000000079484210ULL,
		.pmg_mmcra = 0x0000000000002001ULL
	},
	[ 35 ] = {
		.pmg_name = "pm_mark3",
		.pmg_desc = "Marked Stores Processing Flow",
		.pmg_event_ids = { 78, 2, 62, 51, 71, 75, 60, 30 },
		.pmg_mmcr0 = 0x000000000000031eULL,
		.pmg_mmcr1 = 0x00203004190a3f24ULL,
		.pmg_mmcra = 0x0000000000002001ULL
	},
	[ 36 ] = {
		.pmg_name = "pm_lsu_mark1",
		.pmg_desc = "Load Store Unit Marked Events",
		.pmg_event_ids = { 79, 71, 56, 60, 3, 35, 54, 58 },
		.pmg_mmcr0 = 0x0000000000001b34ULL,
		.pmg_mmcr1 = 0x000280c08d5e9850ULL,
		.pmg_mmcra = 0x0000000000002001ULL
	},
	[ 37 ] = {
		.pmg_name = "pm_lsu_mark2",
		.pmg_desc = "Load Store Unit Marked Events",
		.pmg_event_ids = { 75, 73, 53, 57, 3, 35, 53, 57 },
		.pmg_mmcr0 = 0x0000000000001838ULL,
		.pmg_mmcr1 = 0x000280c0959e99dcULL,
		.pmg_mmcra = 0x0000000000002001ULL
	},
	[ 38 ] = {
		.pmg_name = "pm_fxu1",
		.pmg_desc = "Fixed Point events by unit",
		.pmg_event_ids = { 36, 36, 26, 26, 28, 27, 24, 4 },
		.pmg_mmcr0 = 0x0000000000000912ULL,
		.pmg_mmcr1 = 0x100010020084213cULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 39 ] = {
		.pmg_name = "pm_fxu2",
		.pmg_desc = "Fixed Point events by unit",
		.pmg_event_ids = { 36, 2, 23, 23, 28, 27, 25, 26 },
		.pmg_mmcr0 = 0x000000000000091eULL,
		.pmg_mmcr1 = 0x4000000ca4042d78ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 40 ] = {
		.pmg_name = "pm_ifu",
		.pmg_desc = "pm_ifu",
		.pmg_event_ids = { 38, 38, 31, 0, 90, 37, 4, 30 },
		.pmg_mmcr0 = 0x0000000000000d0cULL,
		.pmg_mmcr1 = 0x800000f06b7867a4ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 41 ] = {
		.pmg_name = "pm_cpi_stack1",
		.pmg_desc = "CPI stack analysis",
		.pmg_event_ids = { 85, 85, 43, 12, 84, 35, 70, 4 },
		.pmg_mmcr0 = 0x0000000000001b3eULL,
		.pmg_mmcr1 = 0x4000c0c0add6963dULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 42 ] = {
		.pmg_name = "pm_cpi_stack2",
		.pmg_desc = "CPI stack analysis",
		.pmg_event_ids = { 88, 36, 36, 5, 86, 62, 69, 37 },
		.pmg_mmcr0 = 0x0000000000000b12ULL,
		.pmg_mmcr1 = 0x000b000003d60583ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 43 ] = {
		.pmg_name = "pm_cpi_stack3",
		.pmg_desc = "CPI stack analysis",
		.pmg_event_ids = { 36, 27, 26, 22, 85, 27, 68, 4 },
		.pmg_mmcr0 = 0x0000000000000916ULL,
		.pmg_mmcr1 = 0x10001002001625beULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 44 ] = {
		.pmg_name = "pm_cpi_stack4",
		.pmg_desc = "CPI stack analysis",
		.pmg_event_ids = { 27, 25, 30, 68, 87, 25, 67, 4 },
		.pmg_mmcr0 = 0x0000000000000000ULL,
		.pmg_mmcr1 = 0x00000000485805bdULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 45 ] = {
		.pmg_name = "pm_cpi_stack5",
		.pmg_desc = "CPI stack analysis",
		.pmg_event_ids = { 28, 36, 10, 3, 88, 2, 71, 33 },
		.pmg_mmcr0 = 0x0000000000000412ULL,
		.pmg_mmcr1 = 0x90014009b6d8f672ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 46 ] = {
		.pmg_name = "pm_data2",
		.pmg_desc = "data source and LMQ",
		.pmg_event_ids = { 36, 36, 4, 5, 91, 87, 44, 47 },
		.pmg_mmcr0 = 0x0000000000000912ULL,
		.pmg_mmcr1 = 0x0000300c7bce7f74ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 47 ] = {
		.pmg_name = "pm_fetch_branch",
		.pmg_desc = "Instruction fetch and branch events",
		.pmg_event_ids = { 39, 38, 31, 1, 3, 35, 1, 2 },
		.pmg_mmcr0 = 0x000000000000060cULL,
		.pmg_mmcr1 = 0x800000cd6e5e9d6cULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 48 ] = {
		.pmg_name = "pm_l1l2_miss",
		.pmg_desc = "L1 and L2 miss events",
		.pmg_event_ids = { 3, 87, 30, 35, 0, 2, 36, 37 },
		.pmg_mmcr0 = 0x000000000000070eULL,
		.pmg_mmcr1 = 0x000330004c86fb00ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 49 ] = {
		.pmg_name = "pm_data_from",
		.pmg_desc = "Data From L2 instructions",
		.pmg_event_ids = { 3, 87, 30, 5, 91, 87, 36, 37 },
		.pmg_mmcr0 = 0x000000000000070eULL,
		.pmg_mmcr1 = 0x000330004bce7b00ULL,
		.pmg_mmcra = 0x0000000000002000ULL
	},
	[ 50 ] = {
		.pmg_name = "pm_mark_data_from",
		.pmg_desc = "Marked Data From L2 instructions",
		.pmg_event_ids = { 71, 88, 30, 5, 92, 88, 50, 51 },
		.pmg_mmcr0 = 0x000000000000070eULL,
		.pmg_mmcr1 = 0x002030084bce72f0ULL,
		.pmg_mmcra = 0x0000000000002001ULL
	}
};
#endif

