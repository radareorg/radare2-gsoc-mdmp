
struct _MM_DRIVER_VERIFIER_DATA {
	uint32_t	Level;
	uint32_t	RaiseIrqls;
	uint32_t	AcquireSpinLocks;
	uint32_t	SynchronizeExecutions;
	uint32_t	AllocationsAttempted;
	uint32_t	AllocationsSucceeded;
	uint32_t	AllocationsSucceededSpecialPool;
	uint32_t	AllocationsWithNoTag;
	uint32_t	TrimRequests;
	uint32_t	Trims;
	uint32_t	AllocationsFailed;
	uint32_t	AllocationsFailedDeliberately;
	uint32_t	Loads;
	uint32_t	Unloads;
	uint32_t	UnTrackedPool;
	uint32_t	UserTrims;
	uint32_t	CurrentPagedPoolAllocations;
	uint32_t	CurrentNonPagedPoolAllocations;
	uint32_t	PeakPagedPoolAllocations;
	uint32_t	PeakNonPagedPoolAllocations;
	uint64_t	PagedBytes;
	uint64_t	NonPagedBytes;
	uint64_t	PeakPagedBytes;
	uint64_t	PeakNonPagedBytes;
	uint32_t	BurstAllocationsFailedDeliberately;
	uint32_t	SessionTrims;
	uint32_t	OptionChanges;
	uint32_t	VerifyMode;
	struct _UNICODE_STRING	PreviousBucketName;
	uint32_t	ExecutePoolTypes;
	uint32_t	ExecutePageProtections;
	uint32_t	ExecutePageMappings;
	uint32_t	ExecuteWriteSections;
	uint32_t	SectionAlignmentFailures;
	uint32_t	UnsupportedRelocs;
	uint32_t	IATInExecutableSection;
}__attribute__((packed));