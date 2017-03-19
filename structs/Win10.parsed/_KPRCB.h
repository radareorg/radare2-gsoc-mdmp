
/* PendingTickFlags */
#define	PendingTick	0x00000001
#define	PendingBackupTick	0x00000002

/* ThreadDpcState */
#define	DpcNormalProcessingActive	0x00000001
#define	DpcNormalProcessingRequested	0x00000002
#define	DpcNormalThreadSignal	0x00000004
#define	DpcNormalTimerExpiration	0x00000008
#define	DpcNormalDpcPresent	0x00000010
#define	DpcNormalLocalInterrupt	0x00000020
#define	DpcNormalSpare	0x0000FFC0
#define	DpcThreadActive	0x00010000
#define	DpcThreadRequested	0x00020000
#define	DpcThreadSpare	0xFFFC0000

struct _KPRCB {
	uint32_t	MxCsr;
	uint8_t	LegacyNumber;
	uint8_t	ReservedMustBeZero;
	uint8_t	InterruptRequest;
	uint8_t	IdleHalt;
	struct _KTHREAD	*CurrentThread;
	struct _KTHREAD	*NextThread;
	struct _KTHREAD	*IdleThread;
	uint8_t	NestingLevel;
	uint8_t	ClockOwner;
	uint8_t	PendingTickFlags;
	uint8_t	IdleState;
	uint32_t	Number;
	uint64_t	RspBase;
	uint64_t	PrcbLock;
	struct Char	*PriorityState;
	struct _KPROCESSOR_STATE	ProcessorState;
	struct Char	CpuType;
	struct Char	CpuID;
	union {
		uint16_t	CpuStep;
		uint8_t	CpuStepping;
	};
	uint8_t	CpuModel;
	uint32_t	MHz;
	uint64_t	HalReserved[8];
	uint16_t	MinorVersion;
	uint16_t	MajorVersion;
	uint8_t	BuildType;
	uint8_t	CpuVendor;
	uint8_t	CoresPerPhysicalProcessor;
	uint8_t	LogicalProcessorsPerCore;
	struct _KNODE	*ParentNode;
	uint64_t	GroupSetMember;
	uint8_t	Group;
	uint8_t	GroupIndex;
	uint8_t	PrcbPad05[2];
	uint32_t	InitialApicId;
	uint32_t	ScbOffset;
	uint32_t	ApicMask;
	void	*AcpiReserved;
	uint32_t	CFlushSize;
	uint32_t	PrcbPad10;
	struct _KSPIN_LOCK_QUEUE	LockQueue[17];
	struct _PP_LOOKASIDE_LIST	PPLookasideList[16];
	struct _GENERAL_LOOKASIDE_POOL	PPNxPagedLookasideList[32];
	struct _GENERAL_LOOKASIDE_POOL	PPNPagedLookasideList[32];
	struct _GENERAL_LOOKASIDE_POOL	PPPagedLookasideList[32];
	uint64_t	PrcbPad20;
	struct _SINGLE_LIST_ENTRY	DeferredReadyListHead;
	int32_t	MmPageFaultCount;
	int32_t	MmCopyOnWriteCount;
	int32_t	MmTransitionCount;
	int32_t	MmDemandZeroCount;
	int32_t	MmPageReadCount;
	int32_t	MmPageReadIoCount;
	int32_t	MmDirtyPagesWriteCount;
	int32_t	MmDirtyWriteIoCount;
	int32_t	MmMappedPagesWriteCount;
	int32_t	MmMappedWriteIoCount;
	uint32_t	KeSystemCalls;
	uint32_t	KeContextSwitches;
	uint16_t	LdtSelector;
	uint16_t	PrcbPad40;
	uint32_t	CcFastReadNoWait;
	uint32_t	CcFastReadWait;
	uint32_t	CcFastReadNotPossible;
	uint32_t	CcCopyReadNoWait;
	uint32_t	CcCopyReadWait;
	uint32_t	CcCopyReadNoWaitMiss;
	int32_t	IoReadOperationCount;
	int32_t	IoWriteOperationCount;
	int32_t	IoOtherOperationCount;
	struct _LARGE_INTEGER	IoReadTransferCount;
	struct _LARGE_INTEGER	IoWriteTransferCount;
	struct _LARGE_INTEGER	IoOtherTransferCount;
	int32_t	PacketBarrier;
	int32_t	TargetCount;
	uint32_t	IpiFrozen;
	void	*IsrDpcStats;
	uint32_t	DeviceInterrupts;
	int32_t	LookasideIrpFloat;
	uint32_t	InterruptLastCount;
	uint32_t	InterruptRate;
	uint64_t	LastNonHrTimerExpiration;
	uint32_t	PrcbPad41[20];
	struct _KDPC_DATA	DpcData[2];
	void	*DpcStack;
	int32_t	MaximumDpcQueueDepth;
	uint32_t	DpcRequestRate;
	uint32_t	MinimumDpcRate;
	uint32_t	DpcLastCount;
	uint8_t	ThreadDpcEnable;
	uint8_t	QuantumEnd;
	uint8_t	DpcRoutineActive;
	uint8_t	IdleSchedule;
	union {
		int32_t	DpcRequestSummary;
		int16_t	DpcRequestSlot[2];
		int16_t	NormalDpcState;
	};
	int16_t	ThreadDpcState;
	uint32_t	LastTimerHand;
	uint32_t	LastTick;
	uint32_t	ClockInterrupts;
	uint32_t	ReadyScanTick;
	void	*InterruptObject[256];
	struct _KTIMER_TABLE	TimerTable;
	struct _KGATE	DpcGate;
	void	*PrcbPad52;
	struct _KDPC	CallDpc;
	int32_t	ClockKeepAlive;
	uint8_t	PrcbPad60[2];
	uint16_t	NmiActive;
	int32_t	DpcWatchdogPeriod;
	int32_t	DpcWatchdogCount;
	int32_t	KeSpinLockOrdering;
	uint32_t	PrcbPad70[1];
	void	*CachedPtes;
	struct _LIST_ENTRY	WaitListHead;
	uint64_t	WaitLock;
	uint32_t	ReadySummary;
	int32_t	AffinitizedSelectionMask;
	uint32_t	QueueIndex;
	uint32_t	PrcbPad75[3];
	struct _KDPC	TimerExpirationDpc;
	struct _RTL_RB_TREE	ScbQueue;
	struct _LIST_ENTRY	DispatcherReadyListHead[32];
	uint32_t	InterruptCount;
	uint32_t	KernelTime;
	uint32_t	UserTime;
	uint32_t	DpcTime;
	uint32_t	InterruptTime;
	uint32_t	AdjustDpcThreshold;
	uint8_t	DebuggerSavedIRQL;
	uint8_t	GroupSchedulingOverQuota;
	uint8_t	DeepSleep;
	uint8_t	PrcbPad80[5];
	uint32_t	DpcTimeCount;
	uint32_t	DpcTimeLimit;
	uint32_t	PeriodicCount;
	uint32_t	PeriodicBias;
	uint32_t	AvailableTime;
	uint32_t	KeExceptionDispatchCount;
	uint64_t	StartCycles;
	uint64_t	TaggedCyclesStart;
	uint64_t	TaggedCycles[2];
	uint64_t	GenerationTarget;
	uint64_t	AffinitizedCycles;
	uint32_t	PrcbPad81[29];
	int32_t	MmSpinLockOrdering;
	uint32_t	PageColor;
	uint32_t	NodeColor;
	uint32_t	NodeShiftedColor;
	uint32_t	SecondaryColorMask;
	uint32_t	PrcbPad83;
	uint64_t	CycleTime;
	uint64_t	Cycles[2][4];
	uint32_t	PrcbPad84[16];
	uint32_t	CcFastMdlReadNoWait;
	uint32_t	CcFastMdlReadWait;
	uint32_t	CcFastMdlReadNotPossible;
	uint32_t	CcMapDataNoWait;
	uint32_t	CcMapDataWait;
	uint32_t	CcPinMappedDataCount;
	uint32_t	CcPinReadNoWait;
	uint32_t	CcPinReadWait;
	uint32_t	CcMdlReadNoWait;
	uint32_t	CcMdlReadWait;
	uint32_t	CcLazyWriteHotSpots;
	uint32_t	CcLazyWriteIos;
	uint32_t	CcLazyWritePages;
	uint32_t	CcDataFlushes;
	uint32_t	CcDataPages;
	uint32_t	CcLostDelayedWrites;
	uint32_t	CcFastReadResourceMiss;
	uint32_t	CcCopyReadWaitMiss;
	uint32_t	CcFastMdlReadResourceMiss;
	uint32_t	CcMapDataNoWaitMiss;
	uint32_t	CcMapDataWaitMiss;
	uint32_t	CcPinReadNoWaitMiss;
	uint32_t	CcPinReadWaitMiss;
	uint32_t	CcMdlReadNoWaitMiss;
	uint32_t	CcMdlReadWaitMiss;
	uint32_t	CcReadAheadIos;
	int32_t	MmCacheTransitionCount;
	int32_t	MmCacheReadCount;
	int32_t	MmCacheIoCount;
	uint32_t	PrcbPad91[3];
	struct _PROCESSOR_POWER_STATE	PowerState;
	struct _LIST_ENTRY	ScbList;
	uint32_t	PrcbPad92[7];
	uint32_t	KeAlignmentFixupCount;
	struct _KDPC	DpcWatchdogDpc;
	struct _KTIMER	DpcWatchdogTimer;
	struct _CACHE_DESCRIPTOR	Cache[5];
	uint32_t	CacheCount;
	uint32_t	CachedCommit;
	uint32_t	CachedResidentAvailable;
	void	*HyperPte;
	void	*WheaInfo;
	void	*EtwSupport;
	struct _SLIST_HEADER	InterruptObjectPool;
	struct _SLIST_HEADER	HypercallPageList;
	void	*HypercallCachedPages;
	void	*VirtualApicAssist;
	uint64_t	*StatisticsPage;
	struct _KAFFINITY_EX	PackageProcessorSet;
	uint64_t	SharedReadyQueueMask;
	struct _KSHARED_READY_QUEUE	*SharedReadyQueue;
	uint32_t	SharedQueueScanOwner;
	uint32_t	ScanSiblingIndex;
	uint64_t	CoreProcessorSet;
	uint64_t	ScanSiblingMask;
	uint64_t	LLCMask;
	uint64_t	CacheProcessorMask[5];
	struct _PROCESSOR_PROFILE_CONTROL_AREA	*ProcessorProfileControlArea;
	void	*ProfileEventIndexAddress;
	uint64_t	PrcbPad94[11];
	struct _SYNCH_COUNTERS	SynchCounters;
	uint64_t	PteBitCache;
	uint32_t	PteBitOffset;
	struct _FILESYSTEM_DISK_COUNTERS	FsCounters;
	uint8_t	VendorString[13];
	uint8_t	PrcbPad100[3];
	uint64_t	FeatureBits;
	uint32_t	PrcbPad110;
	struct _LARGE_INTEGER	UpdateSignature;
	struct _CONTEXT	*Context;
	uint32_t	ContextFlagsInit;
	struct _XSAVE_AREA	*ExtendedState;
	void	*IsrStack;
	struct _KENTROPY_TIMING_STATE	EntropyTimingState;
	struct _SINGLE_LIST_ENTRY	AbSelfIoBoostsList;
	struct _SINGLE_LIST_ENTRY	AbPropagateBoostsList;
	struct _KDPC	AbDpc;
	struct _IOP_IRP_STACK_PROFILER	IoIrpStackProfilerCurrent;
	struct _IOP_IRP_STACK_PROFILER	IoIrpStackProfilerPrevious;
	struct _KSHARED_READY_QUEUE	LocalSharedReadyQueue;
	struct _KTIMER_EXPIRATION_TRACE	TimerExpirationTrace[16];
	uint32_t	TimerExpirationTraceCount;
	void	*ExSaPageArray;
	struct _REQUEST_MAILBOX	*Mailbox;
	struct _REQUEST_MAILBOX	RequestMailbox[1];
}__attribute__((packed));
