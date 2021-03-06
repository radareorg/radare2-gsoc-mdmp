
struct _DPH_HEAP_ROOT {
	uint32_t	Signature;
	uint32_t	HeapFlags;
	struct _RTL_CRITICAL_SECTION	*HeapCritSect;
	uint32_t	nRemoteLockAcquired;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _DPH_HEAP_BLOCK	*pVirtualStorageListHead;
	struct _DPH_HEAP_BLOCK	*pVirtualStorageListTail;
	uint32_t	nVirtualStorageRanges;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	nVirtualStorageBytes;
	struct _RTL_AVL_TABLE	BusyNodesTable;
	struct _DPH_HEAP_BLOCK	*NodeToAllocate;
	uint32_t	nBusyAllocations;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	nBusyAllocationBytesCommitted;
	struct _DPH_HEAP_BLOCK	*pFreeAllocationListHead;
	struct _DPH_HEAP_BLOCK	*pFreeAllocationListTail;
	uint32_t	nFreeAllocations;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	nFreeAllocationBytesCommitted;
	struct _LIST_ENTRY	AvailableAllocationHead;
	uint32_t	nAvailableAllocations;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	nAvailableAllocationBytesCommitted;
	struct _DPH_HEAP_BLOCK	*pUnusedNodeListHead;
	struct _DPH_HEAP_BLOCK	*pUnusedNodeListTail;
	uint32_t	nUnusedNodes;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	nBusyAllocationBytesAccessible;
	struct _DPH_HEAP_BLOCK	*pNodePoolListHead;
	struct _DPH_HEAP_BLOCK	*pNodePoolListTail;
	uint32_t	nNodePools;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	nNodePoolBytes;
	struct _LIST_ENTRY	NextHeap;
	uint32_t	ExtraFlags;
	uint32_t	Seed;
	void	*NormalHeap;
	struct _RTL_TRACE_BLOCK	*CreateStackTrace;
	void	*FirstThread;
}__attribute__((packed));
