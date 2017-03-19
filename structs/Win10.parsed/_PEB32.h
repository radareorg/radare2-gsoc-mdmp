
/* BitField */
#define	ImageUsesLargePages	0x00000001
#define	IsProtectedProcess	0x00000002
#define	IsImageDynamicallyRelocated	0x00000004
#define	SkipPatchingUser32Forwarders	0x00000008
#define	IsPackagedProcess	0x00000010
#define	IsAppContainer	0x00000020
#define	IsProtectedProcessLight	0x00000040
#define	IsLongPathAwareProcess	0x00000080

/* CrossProcessFlags */
#define	ProcessInJob	0x00000001
#define	ProcessInitializing	0x00000002
#define	ProcessUsingVEH	0x00000004
#define	ProcessUsingVCH	0x00000008
#define	ProcessUsingFTH	0x00000010
#define	ReservedBits0	0xFFFFFFE0

/* TracingFlags */
#define	HeapTracingEnabled	0x00000001
#define	CritSecTracingEnabled	0x00000002
#define	LibLoaderTracingEnabled	0x00000004
#define	SpareTracingBits	0xFFFFFFF8

struct _PEB32 {
	uint8_t	InheritedAddressSpace;
	uint8_t	ReadImageFileExecOptions;
	uint8_t	BeingDebugged;
	uint8_t	BitField;
	uint32_t	Mutant;
	uint32_t	ImageBaseAddress;
	uint32_t	Ldr;
	uint32_t	ProcessParameters;
	uint32_t	SubSystemData;
	uint32_t	ProcessHeap;
	uint32_t	FastPebLock;
	uint32_t	AtlThunkSListPtr;
	uint32_t	IFEOKey;
	uint32_t	CrossProcessFlags;
	union {
		uint32_t	KernelCallbackTable;
		uint32_t	UserSharedInfoPtr;
	};
	uint32_t	SystemReserved[1];
	uint32_t	AtlThunkSListPtr32;
	uint32_t	ApiSetMap;
	uint32_t	TlsExpansionCounter;
	uint32_t	TlsBitmap;
	uint32_t	TlsBitmapBits[2];
	uint32_t	ReadOnlySharedMemoryBase;
	uint32_t	SparePvoid0;
	uint32_t	ReadOnlyStaticServerData;
	uint32_t	AnsiCodePageData;
	uint32_t	OemCodePageData;
	uint32_t	UnicodeCaseTableData;
	uint32_t	NumberOfProcessors;
	uint32_t	NtGlobalFlag;
	struct _LARGE_INTEGER	CriticalSectionTimeout;
	uint32_t	HeapSegmentReserve;
	uint32_t	HeapSegmentCommit;
	uint32_t	HeapDeCommitTotalFreeThreshold;
	uint32_t	HeapDeCommitFreeBlockThreshold;
	uint32_t	NumberOfHeaps;
	uint32_t	MaximumNumberOfHeaps;
	uint32_t	ProcessHeaps;
	uint32_t	GdiSharedHandleTable;
	uint32_t	ProcessStarterHelper;
	uint32_t	GdiDCAttributeList;
	uint32_t	LoaderLock;
	uint32_t	OSMajorVersion;
	uint32_t	OSMinorVersion;
	uint16_t	OSBuildNumber;
	uint16_t	OSCSDVersion;
	uint32_t	OSPlatformId;
	uint32_t	ImageSubsystem;
	uint32_t	ImageSubsystemMajorVersion;
	uint32_t	ImageSubsystemMinorVersion;
	uint32_t	ActiveProcessAffinityMask;
	uint32_t	GdiHandleBuffer[34];
	uint32_t	PostProcessInitRoutine;
	uint32_t	TlsExpansionBitmap;
	uint32_t	TlsExpansionBitmapBits[32];
	uint32_t	SessionId;
	struct _ULARGE_INTEGER	AppCompatFlags;
	struct _ULARGE_INTEGER	AppCompatFlagsUser;
	uint32_t	pShimData;
	uint32_t	AppCompatInfo;
	struct _STRING32	CSDVersion;
	uint32_t	ActivationContextData;
	uint32_t	ProcessAssemblyStorageMap;
	uint32_t	SystemDefaultActivationContextData;
	uint32_t	SystemAssemblyStorageMap;
	uint32_t	MinimumStackCommit;
	uint32_t	FlsCallback;
	struct LIST_ENTRY32	FlsListHead;
	uint32_t	FlsBitmap;
	uint32_t	FlsBitmapBits[4];
	uint32_t	FlsHighIndex;
	uint32_t	WerRegistrationData;
	uint32_t	WerShipAssertPtr;
	uint32_t	pUnused;
	uint32_t	pImageHeaderHash;
	uint32_t	TracingFlags;
	uint64_t	CsrServerReadOnlySharedMemoryBase;
	uint32_t	TppWorkerpListLock;
	struct LIST_ENTRY32	TppWorkerpList;
	uint32_t	WaitOnAddressHashTable[128];
}__attribute__((packed));
