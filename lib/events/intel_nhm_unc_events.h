/*
 * Copyright (c) 2008 Google, Inc
 * Contributed by Stephane Eranian <eranian@gmail.com>
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
 * This file is part of libpfm, a performance monitoring support library for
 * applications on Linux.
 */
static const intel_x86_entry_t intel_nhm_unc_pe[]={
	/*
	 * BEGIN uncore events
	 */
	{ .name   = "UNC_CLK_UNHALTED",
		.desc   = "Uncore clockticks.",
		.cntmsk = 1ULL << 20,
		.modmsk = 0,
		.code   = 0x0000,
	},
	{ .name   = "UNC_DRAM_OPEN",
		.desc   = "DRAM open comamnds issued for read or write",
		.modmsk = NHM_UNC_ATTRS,
		.code   = 0x60,
		.cntmsk = 0x1fe00000,
		.flags  = 0,
		.umasks = {
			{ .uname  = "CH0",
				.udesc  = "DRAM Channel 0 open comamnds issued for read or write",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "CH1",
				.udesc  = "DRAM Channel 1 open comamnds issued for read or write",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "CH2",
				.udesc  = "DRAM Channel 2 open comamnds issued for read or write",
				.ucode  = 0x04,
				.uflags = 0,
			},
		},
		.numasks = 3
	},
	{ .name   = "UNC_DRAM_PAGE_CLOSE",
		.desc   = "DRAM page close due to idle timer expiration",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x61,
		.flags  = 0,
		.umasks = {
			{ .uname  = "CH0",
				.udesc  = "DRAM Channel 0 page close",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "CH1",
				.udesc  = "DRAM Channel 1 page close",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "CH2",
				.udesc  = "DRAM Channel 2 page close",
				.ucode  = 0x04,
				.uflags = 0,
			},
		},
		.numasks = 3
	},
	{ .name   = "UNC_DRAM_PAGE_MISS",
		.desc   = "DRAM Channel 0 page miss",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x62,
		.flags  = 0,
		.umasks = {
			{ .uname  = "CH0",
				.udesc  = "DRAM Channel 0 page miss",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "CH1",
				.udesc  = "DRAM Channel 1 page miss",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "CH2",
				.udesc  = "DRAM Channel 2 page miss",
				.ucode  = 0x04,
				.uflags = 0,
			},
		},
		.numasks = 3
	},
	{ .name   = "UNC_DRAM_PRE_ALL",
		.desc   = "DRAM Channel 0 precharge all commands",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x66,
		.flags  = 0,
		.umasks = {
			{ .uname  = "CH0",
				.udesc  = "DRAM Channel 0 precharge all commands",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "CH1",
				.udesc  = "DRAM Channel 1 precharge all commands",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "CH2",
				.udesc  = "DRAM Channel 2 precharge all commands",
				.ucode  = 0x04,
				.uflags = 0,
			},
		},
		.numasks = 3
	},
	{ .name   = "UNC_DRAM_READ_CAS",
		.desc   = "DRAM Channel 0 read CAS commands",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x63,
		.flags  = 0,
		.umasks = {
			{ .uname  = "CH0",
				.udesc  = "DRAM Channel 0 read CAS commands",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "AUTOPRE_CH0",
				.udesc  = "DRAM Channel 0 read CAS auto page close commands",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "CH1",
				.udesc  = "DRAM Channel 1 read CAS commands",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "AUTOPRE_CH1",
				.udesc  = "DRAM Channel 1 read CAS auto page close commands",
				.ucode  = 0x08,
				.uflags = 0,
			},
			{ .uname  = "CH2",
				.udesc  = "DRAM Channel 2 read CAS commands",
				.ucode  = 0x10,
				.uflags = 0,
			},
			{ .uname  = "AUTOPRE_CH2",
				.udesc  = "DRAM Channel 2 read CAS auto page close commands",
				.ucode  = 0x20,
				.uflags = 0,
			},
		},
		.numasks = 6
	},
	{ .name   = "UNC_DRAM_REFRESH",
		.desc   = "DRAM Channel 0 refresh commands",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x65,
		.flags  = 0,
		.umasks = {
			{ .uname  = "CH0",
				.udesc  = "DRAM Channel 0 refresh commands",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "CH1",
				.udesc  = "DRAM Channel 1 refresh commands",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "CH2",
				.udesc  = "DRAM Channel 2 refresh commands",
				.ucode  = 0x04,
				.uflags = 0,
			},
		},
		.numasks = 3
	},
	{ .name   = "UNC_DRAM_WRITE_CAS",
		.desc   = "DRAM Channel 0 write CAS commands",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x64,
		.flags  = 0,
		.umasks = {
			{ .uname  = "CH0",
				.udesc  = "DRAM Channel 0 write CAS commands",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "AUTOPRE_CH0",
				.udesc  = "DRAM Channel 0 write CAS auto page close commands",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "CH1",
				.udesc  = "DRAM Channel 1 write CAS commands",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "AUTOPRE_CH1",
				.udesc  = "DRAM Channel 1 write CAS auto page close commands",
				.ucode  = 0x08,
				.uflags = 0,
			},
			{ .uname  = "CH2",
				.udesc  = "DRAM Channel 2 write CAS commands",
				.ucode  = 0x10,
				.uflags = 0,
			},
			{ .uname  = "AUTOPRE_CH2",
				.udesc  = "DRAM Channel 2 write CAS auto page close commands",
				.ucode  = 0x20,
				.uflags = 0,
			},
		},
		.numasks = 6
	},
	{ .name   = "UNC_GQ_ALLOC",
		.desc   = "GQ read tracker requests",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x03,
		.flags  = 0,
		.umasks = {
			{ .uname  = "READ_TRACKER",
				.udesc  = "GQ read tracker requests",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "RT_LLC_MISS",
				.udesc  = "GQ read tracker LLC misses",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "RT_TO_LLC_RESP",
				.udesc  = "GQ read tracker LLC requests",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "RT_TO_RTID_ACQUIRED",
				.udesc  = "GQ read tracker LLC miss to RTID acquired",
				.ucode  = 0x08,
				.uflags = 0,
			},
			{ .uname  = "WT_TO_RTID_ACQUIRED",
				.udesc  = "GQ write tracker LLC miss to RTID acquired",
				.ucode  = 0x10,
				.uflags = 0,
			},
			{ .uname  = "WRITE_TRACKER",
				.udesc  = "GQ write tracker LLC misses",
				.ucode  = 0x20,
				.uflags = 0,
			},
			{ .uname  = "PEER_PROBE_TRACKER",
				.udesc  = "GQ peer probe tracker requests",
				.ucode  = 0x40,
				.uflags = 0,
			},
		},
		.numasks = 7
	},
	{ .name   = "UNC_GQ_CYCLES_FULL",
		.desc   = "Cycles GQ read tracker is full.",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x00,
		.flags  = 0,
		.umasks = {
			{ .uname  = "READ_TRACKER",
				.udesc  = "Cycles GQ read tracker is full.",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "WRITE_TRACKER",
				.udesc  = "Cycles GQ write tracker is full.",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "PEER_PROBE_TRACKER",
				.udesc  = "Cycles GQ peer probe tracker is full.",
				.ucode  = 0x04,
				.uflags = 0,
			},
		},
		.numasks = 3
	},
	{ .name   = "UNC_GQ_CYCLES_NOT_EMPTY",
		.desc   = "Cycles GQ read tracker is busy",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x01,
		.flags  = 0,
		.umasks = {
			{ .uname  = "READ_TRACKER",
				.udesc  = "Cycles GQ read tracker is busy",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "WRITE_TRACKER",
				.udesc  = "Cycles GQ write tracker is busy",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "PEER_PROBE_TRACKER",
				.udesc  = "Cycles GQ peer probe tracker is busy",
				.ucode  = 0x04,
				.uflags = 0,
			},
		},
		.numasks = 3
	},
	{ .name   = "UNC_GQ_DATA",
		.desc   = "Cycles GQ data is imported from Quickpath interface",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x04,
		.flags  = 0,
		.umasks = {
			{ .uname  = "FROM_QPI",
				.udesc  = "Cycles GQ data is imported from Quickpath interface",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "FROM_QMC",
				.udesc  = "Cycles GQ data is imported from Quickpath memory interface",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "FROM_LLC",
				.udesc  = "Cycles GQ data is imported from LLC",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "FROM_CORES_02",
				.udesc  = "Cycles GQ data is imported from Cores 0 and 2",
				.ucode  = 0x08,
				.uflags = 0,
			},
			{ .uname  = "FROM_CORES_13",
				.udesc  = "Cycles GQ data is imported from Cores 1 and 3",
				.ucode  = 0x10,
				.uflags = 0,
			},
			{ .uname  = "TO_QPI_QMC",
				.udesc  = "Cycles GQ data sent to the QPI or QMC",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "TO_LLC",
				.udesc  = "Cycles GQ data sent to LLC",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "TO_CORES",
				.udesc  = "Cycles GQ data sent to cores",
				.ucode  = 0x04,
				.uflags = 0,
			},
		},
		.numasks = 8
	},
	{ .name   = "UNC_LLC_HITS",
		.desc   = "Number of LLC read hits",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x08,
		.flags  = 0,
		.umasks = {
			{ .uname  = "READ",
				.udesc  = "Number of LLC read hits",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "WRITE",
				.udesc  = "Number of LLC write hits",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "PROBE",
				.udesc  = "Number of LLC peer probe hits",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "ANY",
				.udesc  = "Number of LLC hits",
				.ucode  = 0x03,
				.uflags = 0,
			},
		},
		.numasks = 4
	},
	{ .name   = "UNC_LLC_LINES_IN",
		.desc   = "LLC lines allocated in M state",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x0A,
		.flags  = 0,
		.umasks = {
			{ .uname  = "M_STATE",
				.udesc  = "LLC lines allocated in M state",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "E_STATE",
				.udesc  = "LLC lines allocated in E state",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "S_STATE",
				.udesc  = "LLC lines allocated in S state",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "F_STATE",
				.udesc  = "LLC lines allocated in F state",
				.ucode  = 0x08,
				.uflags = 0,
			},
			{ .uname  = "ANY",
				.udesc  = "LLC lines allocated",
				.ucode  = 0x0F,
				.uflags = 0,
			},
		},
		.numasks = 5
	},
	{ .name   = "UNC_LLC_LINES_OUT",
		.desc   = "LLC lines victimized in M state",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x0B,
		.flags  = 0,
		.umasks = {
			{ .uname  = "M_STATE",
				.udesc  = "LLC lines victimized in M state",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "E_STATE",
				.udesc  = "LLC lines victimized in E state",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "S_STATE",
				.udesc  = "LLC lines victimized in S state",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "I_STATE",
				.udesc  = "LLC lines victimized in I state",
				.ucode  = 0x08,
				.uflags = 0,
			},
			{ .uname  = "F_STATE",
				.udesc  = "LLC lines victimized in F state",
				.ucode  = 0x10,
				.uflags = 0,
			},
			{ .uname  = "ANY",
				.udesc  = "LLC lines victimized",
				.ucode  = 0x1F,
				.uflags = 0,
			},
		},
		.numasks = 6
	},
	{ .name   = "UNC_LLC_MISS",
		.desc   = "Number of LLC read misses",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x09,
		.flags  = 0,
		.umasks = {
			{ .uname  = "READ",
				.udesc  = "Number of LLC read misses",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "WRITE",
				.udesc  = "Number of LLC write misses",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "PROBE",
				.udesc  = "Number of LLC peer probe misses",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "ANY",
				.udesc  = "Number of LLC misses",
				.ucode  = 0x03,
				.uflags = 0,
			},
		},
		.numasks = 4
	},
	{ .name   = "UNC_QHL_ADDRESS_CONFLICTS",
		.desc   = "QHL 2 way address conflicts",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x24,
		.flags  = 0,
		.umasks = {
			{ .uname  = "2WAY",
				.udesc  = "QHL 2 way address conflicts",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "3WAY",
				.udesc  = "QHL 3 way address conflicts",
				.ucode  = 0x04,
				.uflags = 0,
			},
		},
		.numasks = 2
	},
	{ .name   = "UNC_QHL_CONFLICT_CYCLES",
		.desc   = "QHL IOH Tracker conflict cycles",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x25,
		.flags  = 0,
		.umasks = {
			{ .uname  = "IOH",
				.udesc  = "QHL IOH Tracker conflict cycles",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "REMOTE",
				.udesc  = "QHL Remote Tracker conflict cycles",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "LOCAL",
				.udesc  = "QHL Local Tracker conflict cycles",
				.ucode  = 0x04,
				.uflags = 0,
			},
		},
		.numasks = 3
	},
	{ .name   = "UNC_QHL_CYCLES_FULL",
		.desc   = "Cycles QHL  Remote Tracker is full",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x21,
		.flags  = 0,
		.umasks = {
			{ .uname  = "REMOTE",
				.udesc  = "Cycles QHL  Remote Tracker is full",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "LOCAL",
				.udesc  = "Cycles QHL Local Tracker is full",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "IOH",
				.udesc  = "Cycles QHL IOH Tracker is full",
				.ucode  = 0x01,
				.uflags = 0,
			},

		},
		.numasks = 3
	},
	{ .name   = "UNC_QHL_CYCLES_NOT_EMPTY",
		.desc   = "Cycles QHL Tracker is not empty",
		.code   = 0x22,
		.cntmsk = 0x1fe00000,
		.code   = 0x21,
		.flags  = 0,
		.umasks = {
			{ .uname  = "IOH",
				.udesc  = "Cycles QHL IOH is busy",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "REMOTE",
				.udesc  = "Cycles QHL Remote Tracker is busy",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "LOCAL",
				.udesc  = "Cycles QHL Local Tracker is busy",
				.ucode  = 0x04,
				.uflags = 0,
			},
		},
		.numasks = 3
	},
	{ .name   = "UNC_QHL_FRC_ACK_CNFLTS",
		.desc   = "QHL FrcAckCnflts sent to local home",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x33,
		.flags  = 0,
		.umasks = {
			{ .uname  = "LOCAL",
				.udesc  = "QHL FrcAckCnflts sent to local home",
				.ucode  = 0x04,
				.uflags = 0,
			},
		},
		.numasks = 1
	},
	{ .name   = "UNC_QHL_OCCUPANCY",
		.desc   = "Cycles QHL Tracker Allocate to Deallocate Read Occupancy",
		.code   = 0x23,
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.flags  = 0,
		.umasks = {
			{ .uname  = "IOH",
				.udesc  = "Cycles QHL IOH Tracker Allocate to Deallocate Read Occupancy",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "REMOTE",
				.udesc  = "Cycles QHL Remote Tracker Allocate to Deallocate Read Occupancy",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "LOCAL",
				.udesc  = "Cycles QHL Local Tracker Allocate to Deallocate Read Occupancy",
				.ucode  = 0x04,
				.uflags = 0,
			},
		},
		.numasks = 3
	},
	{ .name   = "UNC_QHL_REQUESTS",
		.desc   = "Quickpath Home Logic local read requests",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x20,
		.flags  = 0,
		.umasks = {
			{ .uname  = "LOCAL_READS",
				.udesc  = "Quickpath Home Logic local read requests",
				.ucode  = 0x10,
				.uflags = 0,
			},
			{ .uname  = "LOCAL_WRITES",
				.udesc  = "Quickpath Home Logic local write requests",
				.ucode  = 0x20,
				.uflags = 0,
			},
			{ .uname  = "REMOTE_READS",
				.udesc  = "Quickpath Home Logic remote read requests",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "IOH_READS",
				.udesc  = "Quickpath Home Logic IOH read requests",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "IOH_WRITES",
				.udesc  = "Quickpath Home Logic IOH write requests",
				.ucode  = 0x02,
				.uflags = 0,
		},
			{ .uname  = "REMOTE_WRITES",
				.udesc  = "Quickpath Home Logic remote write requests",
				.ucode  = 0x08,
				.uflags = 0,
			},
		},
		.numasks = 6
	},
	{ .name   = "UNC_QHL_TO_QMC_BYPASS",
		.desc   = "Number of requests to QMC that bypass QHL",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x0126,
		.flags  = 0,
	},
	{ .name   = "UNC_QMC_BUSY",
		.desc   = "Cycles QMC busy with a read request",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x29,
		.flags  = 0,
		.umasks = {
			{ .uname  = "READ_CH0",
				.udesc  = "Cycles QMC channel 0 busy with a read request",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "READ_CH1",
				.udesc  = "Cycles QMC channel 1 busy with a read request",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "READ_CH2",
				.udesc  = "Cycles QMC channel 2 busy with a read request",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "WRITE_CH0",
				.udesc  = "Cycles QMC channel 0 busy with a write request",
				.ucode  = 0x08,
				.uflags = 0,
			},
			{ .uname  = "WRITE_CH1",
				.udesc  = "Cycles QMC channel 1 busy with a write request",
				.ucode  = 0x10,
				.uflags = 0,
			},
			{ .uname  = "WRITE_CH2",
				.udesc  = "Cycles QMC channel 2 busy with a write request",
				.ucode  = 0x20,
				.uflags = 0,
			},
		},
		.numasks = 6
	},
	{ .name   = "UNC_QMC_CANCEL",
		.desc   = "QMC cancels",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x30,
		.flags  = 0,
		.umasks = {
			{ .uname  = "CH0",
				.udesc  = "QMC channel 0 cancels",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "CH1",
				.udesc  = "QMC channel 1 cancels",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "CH2",
				.udesc  = "QMC channel 2 cancels",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "ANY",
				.udesc  = "QMC cancels",
				.ucode  = 0x07,
				.uflags = 0,
			},
		},
		.numasks = 4
	},
	{ .name   = "UNC_QMC_CRITICAL_PRIORITY_READS",
		.desc   = "QMC critical priority read requests",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x2E,
		.flags  = 0,
		.umasks = {
			{ .uname  = "CH0",
				.udesc  = "QMC channel 0 critical priority read requests",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "CH1",
				.udesc  = "QMC channel 1 critical priority read requests",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "CH2",
				.udesc  = "QMC channel 2 critical priority read requests",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "ANY",
				.udesc  = "QMC critical priority read requests",
				.ucode  = 0x07,
				.uflags = 0,
			},
		},
		.numasks = 4
	},
	{ .name   = "UNC_QMC_HIGH_PRIORITY_READS",
		.desc   = "QMC high priority read requests",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x2D,
		.flags  = 0,
		.umasks = {
			{ .uname  = "CH0",
				.udesc  = "QMC channel 0 high priority read requests",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "CH1",
				.udesc  = "QMC channel 1 high priority read requests",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "CH2",
				.udesc  = "QMC channel 2 high priority read requests",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "ANY",
				.udesc  = "QMC high priority read requests",
				.ucode  = 0x07,
				.uflags = 0,
			},
		},
		.numasks = 4
	},
	{ .name   = "UNC_QMC_ISOC_FULL",
		.desc   = "Cycles DRAM full with isochronous (ISOC) read requests",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x28,
		.flags  = 0,
		.umasks = {
			{ .uname  = "READ_CH0",
				.udesc  = "Cycles DRAM channel 0 full with isochronous read requests",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "READ_CH1",
				.udesc  = "Cycles DRAM channel 1 full with isochronous read requests",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "READ_CH2",
				.udesc  = "Cycles DRAM channel 2 full with isochronous read requests",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "WRITE_CH0",
				.udesc  = "Cycles DRAM channel 0 full with isochronous write requests",
				.ucode  = 0x08,
				.uflags = 0,
			},
			{ .uname  = "WRITE_CH1",
				.udesc  = "Cycles DRAM channel 1 full with isochronous write requests",
				.ucode  = 0x10,
				.uflags = 0,
			},
			{ .uname  = "WRITE_CH2",
				.udesc  = "Cycles DRAM channel 2 full with isochronous write requests",
				.ucode  = 0x20,
				.uflags = 0,
			},
		},
		.numasks = 6
	},
	{ .name   = "UNC_IMC_ISOC_OCCUPANCY",
		.desc   = "IMC isochronous (ISOC) Read Occupancy",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x2B,
		.flags  = 0,
		.umasks = {
			{ .uname  = "CH0",
				.udesc  = "IMC channel 0 isochronous read request occupancy",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "CH1",
				.udesc  = "IMC channel 1 isochronous read request occupancy",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "CH2",
				.udesc  = "IMC channel 2 isochronous read request occupancy",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "ANY",
				.udesc  = "IMC isochronous read request occupancy",
				.ucode  = 0x07,
				.uflags = 0,
			},
		},
		.numasks = 4
	},
	{ .name   = "UNC_QMC_NORMAL_FULL",
		.desc   = "Cycles DRAM full with normal read requests",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x27,
		.flags  = 0,
		.umasks = {
			{ .uname  = "READ_CH0",
				.udesc  = "Cycles DRAM channel 0 full with normal read requests",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "READ_CH1",
				.udesc  = "Cycles DRAM channel 1 full with normal read requests",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "READ_CH2",
				.udesc  = "Cycles DRAM channel 2 full with normal read requests",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "WRITE_CH0",
				.udesc  = "Cycles DRAM channel 0 full with normal write requests",
				.ucode  = 0x08,
				.uflags = 0,
			},
			{ .uname  = "WRITE_CH1",
				.udesc  = "Cycles DRAM channel 1 full with normal write requests",
				.ucode  = 0x10,
				.uflags = 0,
			},
			{ .uname  = "WRITE_CH2",
				.udesc  = "Cycles DRAM channel 2 full with normal write requests",
				.ucode  = 0x20,
				.uflags = 0,
			},
		},
		.numasks = 6
	},
	{ .name   = "UNC_QMC_NORMAL_READS",
		.desc   = "QMC normal read requests",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x2C,
		.flags  = 0,
		.umasks = {
			{ .uname  = "CH0",
				.udesc  = "QMC channel 0 normal read requests",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "CH1",
				.udesc  = "QMC channel 1 normal read requests",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "CH2",
				.udesc  = "QMC channel 2 normal read requests",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "ANY",
				.udesc  = "QMC normal read requests",
				.ucode  = 0x07,
				.uflags = 0,
			},
		},
		.numasks = 4
	},
	{ .name   = "UNC_QMC_OCCUPANCY",
		.desc   = "QMC Occupancy",
		.code   = 0x2A,
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.flags  = 0,
		.umasks = {
			{ .uname  = "CH0",
				.udesc  = "IMC channel 0 normal read request occupancy",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "CH1",
				.udesc  = "IMC channel 1 normal read request occupancy",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "CH2",
				.udesc  = "IMC channel 2 normal read request occupancy",
				.ucode  = 0x04,
				.uflags = 0,
			},
		},
		.numasks = 3
	},
	{ .name   = "UNC_QMC_PRIORITY_UPDATES",
		.desc   = "QMC priority updates",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x31,
		.flags  = 0,
		.umasks = {
			{ .uname  = "CH0",
				.udesc  = "QMC channel 0 priority updates",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "CH1",
				.udesc  = "QMC channel 1 priority updates",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "CH2",
				.udesc  = "QMC channel 2 priority updates",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "ANY",
				.udesc  = "QMC priority updates",
				.ucode  = 0x07,
				.uflags = 0,
			},
		},
		.numasks = 4
	},
	{ .name   = "UNC_QMC_WRITES",
		.desc   = "QMC full cache line writes",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x2F,
		.flags  = 0,
		.umasks = {
			{ .uname  = "FULL_CH0",
				.udesc  = "QMC channel 0 full cache line writes",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "FULL_CH1",
				.udesc  = "QMC channel 1 full cache line writes",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "FULL_CH2",
				.udesc  = "QMC channel 2 full cache line writes",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "FULL_ANY",
				.udesc  = "QMC full cache line writes",
				.ucode  = 0x07,
				.uflags = 0,
			},
			{ .uname  = "PARTIAL_CH0",
				.udesc  = "QMC channel 0 partial cache line writes",
				.ucode  = 0x08,
				.uflags = 0,
			},
			{ .uname  = "PARTIAL_CH1",
				.udesc  = "QMC channel 1 partial cache line writes",
				.ucode  = 0x10,
				.uflags = 0,
			},
			{ .uname  = "PARTIAL_CH2",
				.udesc  = "QMC channel 2 partial cache line writes",
				.ucode  = 0x20,
				.uflags = 0,
			},
			{ .uname  = "PARTIAL_ANY",
				.udesc  = "QMC partial cache line writes",
				.ucode  = 0x38,
				.uflags = 0,
			},
		},
		.numasks = 8
	},
	{ .name   = "UNC_QPI_RX_NO_PPT_CREDIT",
		.desc   = "Link 0 snoop stalls due to no PPT entry",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x43,
		.flags  = 0,
		.umasks = {
			{ .uname  = "STALLS_LINK_0",
				.udesc  = "Link 0 snoop stalls due to no PPT entry",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "STALLS_LINK_1",
				.udesc  = "Link 1 snoop stalls due to no PPT entry",
				.ucode  = 0x02,
				.uflags = 0,
			},
		},
		.numasks = 2
	},
	{ .name   = "UNC_QPI_TX_HEADER",
		.desc   = "Cycles link 0 outbound header busy",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x42,
		.flags  = 0,
		.umasks = {
			{ .uname  = "BUSY_LINK_0",
				.udesc  = "Cycles link 0 outbound header busy",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "BUSY_LINK_1",
				.udesc  = "Cycles link 1 outbound header busy",
				.ucode  = 0x08,
				.uflags = 0,
			},
		},
		.numasks = 2
	},
	{ .name   = "UNC_QPI_TX_STALLED_MULTI_FLIT",
		.desc   = "Cycles QPI outbound link 0 DRS stalled",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x41,
		.flags  = 0,
		.umasks = {
			{ .uname  = "DRS_LINK_0",
				.udesc  = "Cycles QPI outbound link 0 DRS stalled",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "NCB_LINK_0",
				.udesc  = "Cycles QPI outbound link 0 NCB stalled",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "NCS_LINK_0",
				.udesc  = "Cycles QPI outbound link 0 NCS stalled",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "DRS_LINK_1",
				.udesc  = "Cycles QPI outbound link 1 DRS stalled",
				.ucode  = 0x08,
				.uflags = 0,
			},
			{ .uname  = "NCB_LINK_1",
				.udesc  = "Cycles QPI outbound link 1 NCB stalled",
				.ucode  = 0x10,
				.uflags = 0,
			},
			{ .uname  = "NCS_LINK_1",
				.udesc  = "Cycles QPI outbound link 1 NCS stalled",
				.ucode  = 0x20,
				.uflags = 0,
			},
			{ .uname  = "LINK_0",
				.udesc  = "Cycles QPI outbound link 0 multi flit stalled",
				.ucode  = 0x07,
				.uflags = 0,
			},
			{ .uname  = "LINK_1",
				.udesc  = "Cycles QPI outbound link 1 multi flit stalled",
				.ucode  = 0x38,
				.uflags = 0,
			},
		},
		.numasks = 8
	},
	{ .name   = "UNC_QPI_TX_STALLED_SINGLE_FLIT",
		.desc   = "Cycles QPI outbound link 0 HOME stalled",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x40,
		.flags  = 0,
		.umasks = {
			{ .uname  = "HOME_LINK_0",
				.udesc  = "Cycles QPI outbound link 0 HOME stalled",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "SNOOP_LINK_0",
				.udesc  = "Cycles QPI outbound link 0 SNOOP stalled",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "NDR_LINK_0",
				.udesc  = "Cycles QPI outbound link 0 NDR stalled",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "HOME_LINK_1",
				.udesc  = "Cycles QPI outbound link 1 HOME stalled",
				.ucode  = 0x08,
				.uflags = 0,
			},
			{ .uname  = "SNOOP_LINK_1",
				.udesc  = "Cycles QPI outbound link 1 SNOOP stalled",
				.ucode  = 0x10,
				.uflags = 0,
			},
			{ .uname  = "NDR_LINK_1",
				.udesc  = "Cycles QPI outbound link 1 NDR stalled",
				.ucode  = 0x20,
				.uflags = 0,
			},
			{ .uname  = "LINK_0",
				.udesc  = "Cycles QPI outbound link 0 single flit stalled",
				.ucode  = 0x07,
				.uflags = 0,
			},
			{ .uname  = "LINK_1",
				.udesc  = "Cycles QPI outbound link 1 single flit stalled",
				.ucode  = 0x38,
				.uflags = 0,
			},
		},
		.numasks = 8
	},
	{ .name   = "UNC_SNP_RESP_TO_LOCAL_HOME",
		.desc   = "Local home snoop response - LLC does not have cache line",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x06,
		.flags  = 0,
		.umasks = {
			{ .uname  = "I_STATE",
				.udesc  = "Local home snoop response - LLC does not have cache line",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "S_STATE",
				.udesc  = "Local home snoop response - LLC has  cache line in S state",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "FWD_S_STATE",
				.udesc  = "Local home snoop response - LLC forwarding cache line in S state.",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "FWD_I_STATE",
				.udesc  = "Local home snoop response - LLC has forwarded a modified cache line",
				.ucode  = 0x08,
				.uflags = 0,
			},
			{ .uname  = "CONFLICT",
				.udesc  = "Local home conflict snoop response",
				.ucode  = 0x10,
				.uflags = 0,
			},
			{ .uname  = "WB",
				.udesc  = "Local home snoop response - LLC has cache line in the M state",
				.ucode  = 0x20,
				.uflags = 0,
			},
		},
		.numasks = 6
	},
	{ .name   = "UNC_SNP_RESP_TO_REMOTE_HOME",
		.desc   = "Remote home snoop response - LLC does not have cache line",
		.modmsk = NHM_UNC_ATTRS,
		.cntmsk = 0x1fe00000,
		.code   = 0x07,
		.flags  = 0,
		.umasks = {
			{ .uname  = "I_STATE",
				.udesc  = "Remote home snoop response - LLC does not have cache line",
				.ucode  = 0x01,
				.uflags = 0,
			},
			{ .uname  = "S_STATE",
				.udesc  = "Remote home snoop response - LLC has  cache line in S state",
				.ucode  = 0x02,
				.uflags = 0,
			},
			{ .uname  = "FWD_S_STATE",
				.udesc  = "Remote home snoop response - LLC forwarding cache line in S state.",
				.ucode  = 0x04,
				.uflags = 0,
			},
			{ .uname  = "FWD_I_STATE",
				.udesc  = "Remote home snoop response - LLC has forwarded a modified cache line",
				.ucode  = 0x08,
				.uflags = 0,
			},
			{ .uname  = "CONFLICT",
				.udesc  = "Remote home conflict snoop response",
				.ucode  = 0x10,
				.uflags = 0,
			},
			{ .uname  = "WB",
				.udesc  = "Remote home snoop response - LLC has cache line in the M state",
				.ucode  = 0x20,
				.uflags = 0,
			},
			{ .uname  = "HITM",
				.udesc  = "Remote home snoop response - LLC HITM",
				.ucode  = 0x24,
				.uflags = 0,
			},
		},
		.numasks = 7
	},
};
#define PME_INTEL_NHM_UNC_CYCLE	0
#define PME_NHM_UNC_EVENT_COUNT	  (sizeof(intel_nhm_unc_pe)/sizeof(intel_x86_entry_t))
