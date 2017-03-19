
/* CrossTebFlags */
#define	SpareCrossTebBits	0x0000FFFF

/* SameTebFlags */
#define	SafeThunkCall	0x00000001
#define	InDebugPrint	0x00000002
#define	HasFiberData	0x00000004
#define	SkipThreadAttach	0x00000008
#define	WerInShipAssertCode	0x00000010
#define	RanProcessInit	0x00000020
#define	ClonedThread	0x00000040
#define	SuppressDebugMsg	0x00000080
#define	DisableUserStackWalk	0x00000100
#define	RtlExceptionAttached	0x00000200
#define	InitialThread	0x00000400
#define	SessionAware	0x00000800
#define	LoadOwner	0x00001000
#define	LoaderWorker	0x00002000
#define	SpareSameTebBits	0x0000C000

struct _TEB32 {
	struct _NT_TIB32	NtTib;
	uint32_t	EnvironmentPointer;
	struct _CLIENT_ID32	ClientId;
	uint32_t	ActiveRpcHandle;
	uint32_t	ThreadLocalStoragePointer;
	uint32_t	ProcessEnvironmentBlock;
	uint32_t	LastErrorValue;
	uint32_t	CountOfOwnedCriticalSections;
	uint32_t	CsrClientThread;
	uint32_t	Win32ThreadInfo;
	uint32_t	User32Reserved[26];
	uint32_t	UserReserved[5];
	uint32_t	WOW32Reserved;
	uint32_t	CurrentLocale;
	uint32_t	FpSoftwareStatusRegister;
	uint32_t	ReservedForDebuggerInstrumentation[16];
	uint32_t	SystemReserved1[36];
	uint8_t	WorkingOnBehalfTicket[8];
	int32_t	ExceptionCode;
	uint32_t	ActivationContextStackPointer;
	uint32_t	InstrumentationCallbackSp;
	uint32_t	InstrumentationCallbackPreviousPc;
	uint32_t	InstrumentationCallbackPreviousSp;
	uint8_t	InstrumentationCallbackDisabled;
	uint8_t	SpareBytes[23];
	uint32_t	TxFsContext;
	struct _GDI_TEB_BATCH32	GdiTebBatch;
	struct _CLIENT_ID32	RealClientId;
	uint32_t	GdiCachedProcessHandle;
	uint32_t	GdiClientPID;
	uint32_t	GdiClientTID;
	uint32_t	GdiThreadLocalInfo;
	uint32_t	Win32ClientInfo[62];
	uint32_t	glDispatchTable[233];
	uint32_t	glReserved1[29];
	uint32_t	glReserved2;
	uint32_t	glSectionInfo;
	uint32_t	glSection;
	uint32_t	glTable;
	uint32_t	glCurrentRC;
	uint32_t	glContext;
	uint32_t	LastStatusValue;
	struct _STRING32	StaticUnicodeString;
	struct Wchar	StaticUnicodeBuffer[261];
	uint32_t	DeallocationStack;
	uint32_t	TlsSlots[64];
	struct LIST_ENTRY32	TlsLinks;
	uint32_t	Vdm;
	uint32_t	ReservedForNtRpc;
	uint32_t	DbgSsReserved[2];
	uint32_t	HardErrorMode;
	uint32_t	Instrumentation[9];
	struct _GUID	ActivityId;
	uint32_t	SubProcessTag;
	uint32_t	PerflibData;
	uint32_t	EtwTraceData;
	uint32_t	WinSockData;
	uint32_t	GdiBatchCount;
	union {
		struct _PROCESSOR_NUMBER	CurrentIdealProcessor;
		uint32_t	IdealProcessorValue;
		uint8_t	ReservedPad0;
	};
	uint8_t	ReservedPad1;
	uint8_t	ReservedPad2;
	uint8_t	IdealProcessor;
	uint32_t	GuaranteedStackBytes;
	uint32_t	ReservedForPerf;
	uint32_t	ReservedForOle;
	uint32_t	WaitingOnLoaderLock;
	uint32_t	SavedPriorityState;
	uint32_t	ReservedForCodeCoverage;
	uint32_t	ThreadPoolData;
	uint32_t	TlsExpansionSlots;
	uint32_t	MuiGeneration;
	uint32_t	IsImpersonating;
	uint32_t	NlsCache;
	uint32_t	pShimData;
	uint16_t	HeapVirtualAffinity;
	uint16_t	LowFragHeapDataSlot;
	uint32_t	CurrentTransactionHandle;
	uint32_t	ActiveFrame;
	uint32_t	FlsData;
	uint32_t	PreferredLanguages;
	uint32_t	UserPrefLanguages;
	uint32_t	MergedPrefLanguages;
	uint32_t	MuiImpersonation;
	uint16_t	CrossTebFlags;
	uint16_t	SameTebFlags;
	uint32_t	TxnScopeEnterCallback;
	uint32_t	TxnScopeExitCallback;
	uint32_t	TxnScopeContext;
	uint32_t	LockCount;
	int32_t	WowTebOffset;
	uint32_t	ResourceRetValue;
	uint32_t	ReservedForWdf;
	uint64_t	ReservedForCrt;
	struct _GUID	EffectiveContainerId;
}__attribute__((packed));
