/*
 * Device Mapper PMDA - VDO (Virtual Data Optimizer) stats
 *
 * Copyright (c) 2018-2019 Red Hat.
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#ifndef DM_VDO_H
#define DM_VDO_H

enum {
    VDODEV_ALLOCATOR_SLAB_COUNT			= 1,
    VDODEV_ALLOCATOR_SLABS_OPENED		= 2,
    VDODEV_ALLOCATOR_SLABS_REOPENED		= 3,
    VDODEV_BIOS_ACKNOWLEDGED_DISCARD		= 4,
    VDODEV_BIOS_ACKNOWLEDGED_FLUSH		= 5,
    VDODEV_BIOS_ACKNOWLEDGED_FUA		= 6,
    VDODEV_BIOS_ACKNOWLEDGED_PARTIAL_DISCARD	= 9,
    VDODEV_BIOS_ACKNOWLEDGED_PARTIAL_FLUSH	= 10,
    VDODEV_BIOS_ACKNOWLEDGED_PARTIAL_FUA	= 11,
    VDODEV_BIOS_ACKNOWLEDGED_PARTIAL_READ	= 12,
    VDODEV_BIOS_ACKNOWLEDGED_PARTIAL_WRITE	= 13,
    VDODEV_BIOS_ACKNOWLEDGED_READ		= 7,
    VDODEV_BIOS_ACKNOWLEDGED_WRITE		= 8,
    VDODEV_BIOS_IN_DISCARD			= 14,
    VDODEV_BIOS_IN_FLUSH			= 15,
    VDODEV_BIOS_IN_FUA				= 16,
    VDODEV_BIOS_IN_PARTIAL_DISCARD		= 19,
    VDODEV_BIOS_IN_PARTIAL_FLUSH		= 20,
    VDODEV_BIOS_IN_PARTIAL_FUA			= 21,
    VDODEV_BIOS_IN_PARTIAL_READ			= 22,
    VDODEV_BIOS_IN_PARTIAL_WRITE		= 23,
    VDODEV_BIOS_IN_PROGRESS_DISCARD		= 24,
    VDODEV_BIOS_IN_PROGRESS_FLUSH		= 25,
    VDODEV_BIOS_IN_PROGRESS_FUA			= 26,
    VDODEV_BIOS_IN_PROGRESS_READ		= 27,
    VDODEV_BIOS_IN_PROGRESS_WRITE		= 28,
    VDODEV_BIOS_IN_READ				= 17,
    VDODEV_BIOS_IN_WRITE			= 18,
    VDODEV_BIOS_JOURNAL_COMPLETED_DISCARD	= 34,
    VDODEV_BIOS_JOURNAL_COMPLETED_FLUSH		= 35,
    VDODEV_BIOS_JOURNAL_COMPLETED_FUA		= 36,
    VDODEV_BIOS_JOURNAL_COMPLETED_READ		= 37,
    VDODEV_BIOS_JOURNAL_COMPLETED_WRITE		= 38,
    VDODEV_BIOS_JOURNAL_DISCARD			= 29,
    VDODEV_BIOS_JOURNAL_FLUSH			= 30,
    VDODEV_BIOS_JOURNAL_FUA			= 31,
    VDODEV_BIOS_JOURNAL_READ			= 32,
    VDODEV_BIOS_JOURNAL_WRITE			= 33,
    VDODEV_BIOS_META_COMPLETED_DISCARD		= 44,
    VDODEV_BIOS_META_COMPLETED_FLUSH		= 45,
    VDODEV_BIOS_META_COMPLETED_FUA		= 46,
    VDODEV_BIOS_META_COMPLETED_READ		= 47,
    VDODEV_BIOS_META_COMPLETED_WRITE		= 48,
    VDODEV_BIOS_META_DISCARD			= 39,
    VDODEV_BIOS_META_FLUSH			= 40,
    VDODEV_BIOS_META_FUA			= 41,
    VDODEV_BIOS_META_READ			= 42,
    VDODEV_BIOS_META_WRITE			= 43,
    VDODEV_BIOS_OUT_COMPLETED_DISCARD		= 54,
    VDODEV_BIOS_OUT_COMPLETED_FLUSH		= 55,
    VDODEV_BIOS_OUT_COMPLETED_FUA		= 56,
    VDODEV_BIOS_OUT_COMPLETED_READ		= 57,
    VDODEV_BIOS_OUT_COMPLETED_WRITE		= 58,
    VDODEV_BIOS_OUT_DISCARD			= 49,
    VDODEV_BIOS_OUT_FLUSH			= 50,
    VDODEV_BIOS_OUT_FUA				= 51,
    VDODEV_BIOS_OUT_READ			= 52,
    VDODEV_BIOS_OUT_WRITE			= 53,
    VDODEV_BIOS_PAGE_CACHE_COMPLETED_DISCARD	= 64,
    VDODEV_BIOS_PAGE_CACHE_COMPLETED_FLUSH	= 65,
    VDODEV_BIOS_PAGE_CACHE_COMPLETED_FUA	= 66,
    VDODEV_BIOS_PAGE_CACHE_COMPLETED_READ	= 67,
    VDODEV_BIOS_PAGE_CACHE_COMPLETED_WRITE	= 68,
    VDODEV_BIOS_PAGE_CACHE_DISCARD		= 69,
    VDODEV_BIOS_PAGE_CACHE_FLUSH		= 70,
    VDODEV_BIOS_PAGE_CACHE_FUA			= 71,
    VDODEV_BIOS_PAGE_CACHE_READ			= 72,
    VDODEV_BIOS_PAGE_CACHE_WRITE		= 73,
    VDODEV_BLOCK_MAP_CACHE_PRESSURE		= 74,
    VDODEV_BLOCK_MAP_CACHE_SIZE			= 75,
    VDODEV_BLOCK_MAP_CLEAN_PAGES		= 76,
    VDODEV_BLOCK_MAP_DIRTY_PAGES		= 77,
    VDODEV_BLOCK_MAP_DISCARD_REQUIRED		= 78,
    VDODEV_BLOCK_MAP_FAILED_PAGES		= 79,
    VDODEV_BLOCK_MAP_FAILED_READS		= 80,
    VDODEV_BLOCK_MAP_FAILED_WRITES		= 81,
    VDODEV_BLOCK_MAP_FETCH_REQUIRED		= 82,
    VDODEV_BLOCK_MAP_FLUSH_COUNT		= 83,
    VDODEV_BLOCK_MAP_FOUND_IN_CACHE		= 84,
    VDODEV_BLOCK_MAP_FREE_PAGES			= 85,
    VDODEV_BLOCK_MAP_INCOMING_PAGES		= 86,
    VDODEV_BLOCK_MAP_OUTGOING_PAGES		= 87,
    VDODEV_BLOCK_MAP_PAGES_LOADED		= 88,
    VDODEV_BLOCK_MAP_PAGES_SAVED		= 89,
    VDODEV_BLOCK_MAP_READ_COUNT			= 90,
    VDODEV_BLOCK_MAP_READ_OUTGOING		= 91,
    VDODEV_BLOCK_MAP_RECLAIMED			= 92,
    VDODEV_BLOCK_MAP_WAIT_FOR_PAGE		= 93,
    VDODEV_BLOCK_MAP_WRITE_COUNT		= 94,
    VDODEV_BLOCK_SIZE				= 95,
    VDODEV_COMPLETE_RECOVERIES			= 96,
    VDODEV_CURR_DEDUPE_QUERIES			= 97,
    VDODEV_CURRENTVIOS_IN_PROGRESS		= 98,
    VDODEV_DATA_BLOCKS_USED			= 99,
    VDODEV_DEDUPE_ADVICE_STALE			= 100,
    VDODEV_DEDUPE_ADVICE_TIMEOUTS		= 101,
    VDODEV_DEDUPE_ADVICE_VALID			= 102,
    VDODEV_ERRORS_INVALID_ADVICEPBNCOUNT	= 103,
    VDODEV_ERRORS_NO_SPACE_ERROR_COUNT		= 104,
    VDODEV_ERRORS_READ_ONLY_ERROR_COUNT		= 105,
    VDODEV_FLUSH_OUT				= 106,
    VDODEV_IN_RECOVERY_MODE			= 107,
    VDODEV_INSTANCE				= 108,
    VDODEV_JOURNAL_BLOCKS_COMMITTED		= 109,
    VDODEV_JOURNAL_BLOCKS_STARTED		= 110,
    VDODEV_JOURNAL_BLOCKS_WRITTEN		= 111,
    VDODEV_JOURNAL_DISK_FULL			= 112,
    VDODEV_JOURNAL_ENTRIES_COMMITTED		= 113,
    VDODEV_JOURNAL_ENTRIES_STARTED		= 114,
    VDODEV_JOURNAL_ENTRIES_WRITTEN		= 115,
    VDODEV_JOURNAL_SLAB_JOURNAL_COMMITS_REQUESTED = 116,
    VDODEV_LOGICAL_BLOCKS			= 117,
    VDODEV_LOGICAL_BLOCK_SIZE			= 118,
    VDODEV_LOGICAL_BLOCKS_USED			= 119,
    VDODEV_MAX_DEDUPE_QUERIES			= 120,
    VDODEV_MAXVIOS				= 121,
    VDODEV_MEMORY_USAGE_BIOS_USED		= 122,
    VDODEV_MEMORY_USAGE_BYTES_USED		= 123,
    VDODEV_MEMORY_USAGE_PEAK_BIO_COUNT		= 124,
    VDODEV_MEMORY_USAGE_PEAK_BYTES_USED		= 125,
    VDODEV_MODE					= 126,
    VDODEV_OVERHEAD_BLOCKS_USED			= 127,
    VDODEV_PACKER_COMPRESSED_BLOCKS_WRITTEN	= 128,
    VDODEV_PACKER_COMPRESSED_FRAGMENTS_IN_PACKER = 129,
    VDODEV_PACKER_COMPRESSED_FRAGMENTS_WRITTEN	= 130,
    VDODEV_PHYSICAL_BLOCKS			= 131,
    VDODEV_READ_CACHE_ACCESSES			= 132,
    VDODEV_READ_CACHE_DATA_HITS			= 133,
    VDODEV_READ_CACHE_HITS			= 134,
    VDODEV_READ_ONLY_RECOVERIES			= 135,
    VDODEV_RECOVERY_PERCENTAGE			= 136,
    VDODEV_REF_COUNTS_BLOCKS_WRITTEN		= 137,
    VDODEV_SLAB_JOURNAL_BLOCKED_COUNT		= 138,
    VDODEV_SLAB_JOURNAL_BLOCKS_WRITTEN		= 139,
    VDODEV_SLAB_JOURNAL_DISK_FULL_COUNT		= 140,
    VDODEV_SLAB_JOURNAL_FLUSH_COUNT		= 141,
    VDODEV_SLAB_JOURNAL_TAIL_BUSY_COUNT		= 142,
    VDODEV_SLAB_SUMMARY_BLOCKS_WRITTEN		= 143,
    VDODEV_WRITE_POLICY				= 144,
    VDODEV_JOURNAL_BLOCKS_BATCHING		= 145,
    VDODEV_JOURNAL_BLOCKS_WRITING		= 146,
    VDODEV_JOURNAL_ENTRIES_BATCHING		= 147,
    VDODEV_JOURNAL_ENTRIES_WRITING		= 148,
    VDODEV_CAPACITY				= 149,
    VDODEV_USED					= 150,
    VDODEV_AVAILABLE				= 151,
    VDODEV_USED_PERCENTAGE			= 152,
    VDODEV_SAVINGS_PERCENTAGE			= 153,
    VDODEV_HASH_LOCK_CONCURRENT_DATA_MATCHES	= 154,
    VDODEV_HASH_LOCK_CONCURRENT_HASH_COLLISIONS	= 155,
    VDODEV_HASH_LOCK_DEDUPE_ADVICE_STALE	= 156,
    VDODEV_HASH_LOCK_DEDUPE_ADVICE_VALID	= 157,
    VDODEV_INDEX_CURR_DEDUPE_QUERIES		= 158,
    VDODEV_INDEX_ENTRIES_INDEXED		= 159,
    VDODEV_INDEX_MAX_DEDUPE_QUERIES		= 160,
    VDODEV_INDEX_POSTS_FOUND			= 161,
    VDODEV_INDEX_POSTS_NOT_FOUND		= 162,
    VDODEV_INDEX_QUERIES_FOUND			= 163,
    VDODEV_INDEX_QUERIES_NOT_FOUND		= 164,
    VDODEV_INDEX_UPDATES_FOUND			= 165,
    VDODEV_INDEX_UPDATES_NOT_FOUND		= 166,
};

extern int dm_vdodev_fetch(pmdaMetric *, const char *, pmAtomValue *);
extern int dm_vdodev_instance_refresh(void);
extern void dm_vdo_setup(void);

#endif /* DM_VDO_H */
