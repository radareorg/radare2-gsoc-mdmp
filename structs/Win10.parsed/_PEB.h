
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

struct _PEB {
	uint8_t	InheritedAddressSpace;
	uint8_t	ReadImageFileExecOptions;
	uint8_t	BeingDebugged;
	uint8_t	BitField;
	uint8_t	Padding0[4];
	void	*Mutant;
	void	*ImageBaseAddress;
	struct _PEB_LDR_DATA	*Ldr;
	struct _RTL_USER_PROCESS_PARAMETERS	*ProcessParameters;
	void	*SubSystemData;
	void	*ProcessHeap;
	struct _RTL_CRITICAL_SECTION	*FastPebLock;
	struct _SLIST_HEADER	*AtlThunkSListPtr;
	void	*IFEOKey;
	uint32_t	CrossProcessFlags;
	uint8_t	Padding1[4];
	union {
		void	*KernelCallbackTable;
		void	*UserSharedInfoPtr;
	};
	uint32_t	SystemReserved[1];
	uint32_t	AtlThunkSListPtr32;
	void	*ApiSetMap;
	uint32_t	TlsExpansionCounter;
	uint8_t	Padding2[4];
	void	*TlsBitmap;
	uint32_t	TlsBitmapBits[2];
	void	*ReadOnlySharedMemoryBase;
	void	*SparePvoid0;
	void	**ReadOnlyStaticServerData;
	void	*AnsiCodePageData;
	void	*OemCodePageData;
	void	*UnicodeCaseTableData;
	uint32_t	NumberOfProcessors;
	uint32_t	NtGlobalFlag;
	struct _LARGE_INTEGER	CriticalSectionTimeout;
	uint64_t	HeapSegmentReserve;
	uint64_t	HeapSegmentCommit;
	uint64_t	HeapDeCommitTotalFreeThreshold;
	uint64_t	HeapDeCommitFreeBlockThreshold;
	uint32_t	NumberOfHeaps;
	uint32_t	MaximumNumberOfHeaps;
	void	**ProcessHeaps;
	void	*GdiSharedHandleTable;
	void	*ProcessStarterHelper;
	uint32_t	GdiDCAttributeList;
	uint8_t	Padding3[4];
	struct _RTL_CRITICAL_SECTION	*LoaderLock;
	uint32_t	OSMajorVersion;
	uint32_t	OSMinorVersion;
	uint16_t	OSBuildNumber;
	uint16_t	OSCSDVersion;
	uint32_t	OSPlatformId;
	uint32_t	ImageSubsystem;
	uint32_t	ImageSubsystemMajorVersion;
	uint32_t	ImageSubsystemMinorVersion;
	uint8_t	Padding4[4];
	uint64_t	ActiveProcessAffinityMask;
	uint32_t	GdiHandleBuffer[60];
	void	*PostProcessInitRoutine;
	void	*TlsExpansionBitmap;
	uint32_t	TlsExpansionBitmapBits[32];
	uint32_t	SessionId;
	uint8_t	Padding5[4];
	struct _ULARGE_INTEGER	AppCompatFlags;
	struct _ULARGE_INTEGER	AppCompatFlagsUser;
	void	*pShimData;
	void	*AppCompatInfo;
	struct _UNICODE_STRING	CSDVersion;
	struct _ACTIVATION_CONTEXT_DATA	*ActivationContextData;
	struct _ASSEMBLY_STORAGE_MAP	*ProcessAssemblyStorageMap;
	struct _ACTIVATION_CONTEXT_DATA	*SystemDefaultActivationContextData;
	struct _ASSEMBLY_STORAGE_MAP	*SystemAssemblyStorageMap;
	uint64_t	MinimumStackCommit;
	struct _FLS_CALLBACK_INFO	*FlsCallback;
	struct _LIST_ENTRY	FlsListHead;
	void	*FlsBitmap;
	uint32_t	FlsBitmapBits[4];
	uint32_t	FlsHighIndex;
	void	*WerRegistrationData;
	void	*WerShipAssertPtr;
	void	*pUnused;
	void	*pImageHeaderHash;
	uint32_t	TracingFlags;
	uint8_t	Padding6[4];
	uint64_t	CsrServerReadOnlySharedMemoryBase;
	uint64_t	TppWorkerpListLock;
	struct _LIST_ENTRY	TppWorkerpList;
	void	*WaitOnAddressHashTable[128];
}__attribute__((packed));
