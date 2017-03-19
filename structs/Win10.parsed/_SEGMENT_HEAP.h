
struct _SEGMENT_HEAP {
	uint64_t	TotalReservedPages;
	uint64_t	TotalCommittedPages;
	uint32_t	Signature;
	uint32_t	GlobalFlags;
	uint64_t	FreeCommittedPages;
	uint32_t	Interceptor;
	uint16_t	ProcessHeapListIndex;
	uint16_t	GlobalLockCount;
	uint32_t	GlobalLockOwner;
	struct _RTL_SRWLOCK	LargeMetadataLock;
	struct _RTL_RB_TREE	LargeAllocMetadata;
	uint64_t	LargeReservedPages;
	uint64_t	LargeCommittedPages;
	struct _RTL_SRWLOCK	SegmentAllocatorLock;
	struct _LIST_ENTRY	SegmentListHead;
	uint64_t	SegmentCount;
	struct _RTL_RB_TREE	FreePageRanges;
	struct _RTL_RUN_ONCE	StackTraceInitVar;
	struct _RTL_SRWLOCK	ContextExtendLock;
	uint8_t	*AllocatedBase;
	uint8_t	*UncommittedBase;
	uint8_t	*ReservedLimit;
	struct _HEAP_VS_CONTEXT	VsContext;
	struct _HEAP_LFH_CONTEXT	LfhContext;
}__attribute__((packed));
