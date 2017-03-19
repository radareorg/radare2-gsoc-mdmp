
/* Alerted[2] */
#define	AutoBoostActive	0x00000001
#define	ReadyTransition	0x00000002
#define	WaitNext	0x00000004
#define	SystemAffinityActive	0x00000008
#define	Alertable	0x00000010
#define	UserStackWalkActive	0x00000020
#define	ApcInterruptRequest	0x00000040
#define	QuantumEndMigrate	0x00000080
#define	UmsDirectedSwitchEnable	0x00000100
#define	TimerActive	0x00000200
#define	SystemThread	0x00000400
#define	ProcessDetachActive	0x00000800
#define	CalloutActive	0x00001000
#define	ScbReadyQueue	0x00002000
#define	ApcQueueable	0x00004000
#define	ReservedStackInUse	0x00008000
#define	UmsPerformingSyscall	0x00010000
#define	TimerSuspended	0x00020000
#define	SuspendedWaitMode	0x00040000
#define	SuspendSchedulerApcWait	0x00080000
#define	Reserved	0xFFF00000

/* MiscFlags */
#define	AutoAlignment	0x00000001
#define	DisableBoost	0x00000002
#define	ThreadFlagsSpare0	0x00000004
#define	AlertedByThreadId	0x00000008
#define	QuantumDonation	0x00000010
#define	EnableStackSwap	0x00000020
#define	GuiThread	0x00000040
#define	DisableQuantum	0x00000080
#define	ChargeOnlySchedulingGroup	0x00000100
#define	DeferPreemption	0x00000200
#define	QueueDeferPreemption	0x00000400
#define	ForceDeferSchedule	0x00000800
#define	SharedReadyQueueAffinity	0x00001000
#define	FreezeCount	0x00002000
#define	TerminationApcRequest	0x00004000
#define	AutoBoostEntriesExhausted	0x00008000
#define	KernelStackResident	0x00010000
#define	CommitFailTerminateRequest	0x00020000
#define	ProcessStackCountDecremented	0x00040000
#define	RestrictedGuiThread	0x00080000
#define	ThreadFlagsSpare	0x00F00000
#define	EtwStackTraceApcInserted	0xFF000000

/* SystemHeteroCpuPolicy */
#define	UserHeteroCpuPolicy	0x0000007F
#define	ExplicitSystemHeteroCpuPolicy	0x00000080

/* NextProcessor */
#define	NextProcessorNumber	0x7FFFFFFF
#define	SharedReadyQueue	0x80000000

/* PriorityDecrement */
#define	ForegroundBoost	0x0000000F
#define	UnusualBoost	0x000000F0

struct _KTHREAD {
	struct _DISPATCHER_HEADER	Header;
	void	*SListFaultAddress;
	uint64_t	QuantumTarget;
	void	*InitialStack;
	void	*StackLimit;
	void	*StackBase;
	uint64_t	ThreadLock;
	uint64_t	CycleTime;
	uint32_t	CurrentRunTime;
	uint32_t	ExpectedRunTime;
	void	*KernelStack;
	struct _XSAVE_FORMAT	*StateSaveArea;
	struct _KSCHEDULING_GROUP	*SchedulingGroup;
	struct _KWAIT_STATUS_REGISTER	WaitRegister;
	uint8_t	Running;
	uint8_t	Alerted[2];
	int32_t	MiscFlags;
	int32_t	ThreadFlags;
	uint8_t	Tag;
	uint8_t	SystemHeteroCpuPolicy;
	uint8_t	Spare0;
	uint32_t	SystemCallNumber;
	uint32_t	Spare10;
	void	*FirstArgument;
	struct _KTRAP_FRAME	*TrapFrame;
	union {
		struct _KAPC_STATE	ApcState;
		uint8_t	ApcStateFill[43];
	};
	struct Char	Priority;
	uint32_t	UserIdealProcessor;
	int64_t	WaitStatus;
	struct _KWAIT_BLOCK	*WaitBlockList;
	union {
		struct _LIST_ENTRY	WaitListEntry;
		struct _SINGLE_LIST_ENTRY	SwapListEntry;
	};
	struct _DISPATCHER_HEADER	*Queue;
	void	*Teb;
	uint64_t	RelativeTimerBias;
	struct _KTIMER	Timer;
	union {
		struct _KWAIT_BLOCK	WaitBlock[4];
		uint8_t	WaitBlockFill4[20];
	};
	uint32_t	ContextSwitches;
	uint8_t	WaitBlockFill5[68];
	uint8_t	State;
	struct Char	Spare13;
	uint8_t	WaitIrql;
	struct Char	WaitMode;
	uint8_t	WaitBlockFill6[116];
	uint32_t	WaitTime;
	uint8_t	WaitBlockFill7[164];
	int16_t	KernelApcDisable;
	int16_t	SpecialApcDisable;
	uint32_t	CombinedApcDisable;
	uint8_t	WaitBlockFill8[40];
	struct _KTHREAD_COUNTERS	*ThreadCounters;
	uint8_t	WaitBlockFill9[88];
	struct _XSTATE_SAVE	*XStateSave;
	uint8_t	WaitBlockFill10[136];
	void	*Win32Thread;
	uint8_t	WaitBlockFill11[176];
	struct _UMS_CONTROL_BLOCK	*Ucb;
	struct _KUMS_CONTEXT_HEADER	*Uch;
	void	*TebMappedLowVa;
	struct _LIST_ENTRY	QueueListEntry;
	uint32_t	NextProcessor;
	int32_t	QueuePriority;
	struct _KPROCESS	*Process;
	union {
		struct _GROUP_AFFINITY	UserAffinity;
		uint8_t	UserAffinityFill[10];
	};
	struct Char	PreviousMode;
	struct Char	BasePriority;
	struct Char	PriorityDecrement;
	uint8_t	Preempted;
	uint8_t	AdjustReason;
	struct Char	AdjustIncrement;
	uint64_t	AffinityVersion;
	union {
		struct _GROUP_AFFINITY	Affinity;
		uint8_t	AffinityFill[10];
	};
	uint8_t	ApcStateIndex;
	uint8_t	WaitBlockCount;
	uint32_t	IdealProcessor;
	uint64_t	NpxState;
	union {
		struct _KAPC_STATE	SavedApcState;
		uint8_t	SavedApcStateFill[43];
	};
	uint8_t	WaitReason;
	struct Char	SuspendCount;
	struct Char	Saturation;
	uint16_t	SListFaultCount;
	union {
		struct _KAPC	SchedulerApc;
		uint8_t	SchedulerApcFill0[1];
	};
	uint8_t	ResourceIndex;
	uint8_t	SchedulerApcFill1[3];
	uint8_t	QuantumReset;
	uint8_t	SchedulerApcFill2[4];
	uint32_t	KernelTime;
	uint8_t	SchedulerApcFill3[64];
	struct _KPRCB	*WaitPrcb;
	uint8_t	SchedulerApcFill4[72];
	void	*LegoData;
	uint8_t	SchedulerApcFill5[83];
	uint8_t	CallbackNestingLevel;
	uint32_t	UserTime;
	struct _KEVENT	SuspendEvent;
	struct _LIST_ENTRY	ThreadListEntry;
	struct _LIST_ENTRY	MutantListHead;
	uint8_t	AbEntrySummary;
	uint8_t	AbWaitEntryCount;
	uint16_t	Spare20;
	uint32_t	SecureThreadCookie;
	struct _KLOCK_ENTRY	LockEntries[6];
	struct _SINGLE_LIST_ENTRY	PropagateBoostsEntry;
	struct _SINGLE_LIST_ENTRY	IoSelfBoostsEntry;
	uint8_t	PriorityFloorCounts[16];
	uint32_t	PriorityFloorSummary;
	int32_t	AbCompletedIoBoostCount;
	int32_t	AbCompletedIoQoSBoostCount;
	int16_t	KeReferenceCount;
	uint8_t	AbOrphanedEntrySummary;
	uint8_t	AbOwnedEntryCount;
	uint32_t	ForegroundLossTime;
	union {
		struct _LIST_ENTRY	GlobalForegroundListEntry;
		struct _SINGLE_LIST_ENTRY	ForegroundDpcStackListEntry;
	};
	uint64_t	InGlobalForegroundList;
	int64_t	ReadOperationCount;
	int64_t	WriteOperationCount;
	int64_t	OtherOperationCount;
	int64_t	ReadTransferCount;
	int64_t	WriteTransferCount;
	int64_t	OtherTransferCount;
	struct _KSCB	*QueuedScb;
}__attribute__((packed));
