
struct _KPCR {
	union {
		struct _NT_TIB	NtTib;
		struct _KGDTENTRY64	*GdtBase;
	};
	struct _KTSS64	*TssBase;
	uint64_t	UserRsp;
	struct _KPCR	*Self;
	struct _KPRCB	*CurrentPrcb;
	struct _KSPIN_LOCK_QUEUE	*LockArray;
	void	*Used_Self;
	struct _KIDTENTRY64	*IdtBase;
	uint64_t	Unused[2];
	uint8_t	Irql;
	uint8_t	SecondLevelCacheAssociativity;
	uint8_t	ObsoleteNumber;
	uint8_t	Fill0;
	uint32_t	Unused0[3];
	uint16_t	MajorVersion;
	uint16_t	MinorVersion;
	uint32_t	StallScaleFactor;
	void	*Unused1[3];
	uint32_t	KernelReserved[15];
	uint32_t	SecondLevelCacheSize;
	uint32_t	HalReserved[16];
	uint32_t	Unused2;
	void	*KdVersionBlock;
	void	*Unused3;
	uint32_t	PcrAlign1[24];
	struct _KPRCB	Prcb;
}__attribute__((packed));
