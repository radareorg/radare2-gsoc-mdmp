
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
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint8_t	Irql;
	uint8_t	SecondLevelCacheAssociativity;
	uint8_t	ObsoleteNumber;
	uint8_t	Fill0;
	uint32_t	Unused0[3];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint16_t	MajorVersion;
	uint16_t	MinorVersion;
	uint32_t	StallScaleFactor;
	void	*Unused1[3];
	uint32_t	KernelReserved[15];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint8_t	__padding8__;
	uint8_t	__padding9__;
	uint8_t	__padding10__;
	uint8_t	__padding11__;
	uint8_t	__padding12__;
	uint8_t	__padding13__;
	uint8_t	__padding14__;
	uint8_t	__padding15__;
	uint8_t	__padding16__;
	uint8_t	__padding17__;
	uint8_t	__padding18__;
	uint8_t	__padding19__;
	uint8_t	__padding20__;
	uint8_t	__padding21__;
	uint8_t	__padding22__;
	uint8_t	__padding23__;
	uint8_t	__padding24__;
	uint8_t	__padding25__;
	uint8_t	__padding26__;
	uint8_t	__padding27__;
	uint8_t	__padding28__;
	uint8_t	__padding29__;
	uint8_t	__padding30__;
	uint8_t	__padding31__;
	uint8_t	__padding32__;
	uint8_t	__padding33__;
	uint8_t	__padding34__;
	uint8_t	__padding35__;
	uint8_t	__padding36__;
	uint8_t	__padding37__;
	uint8_t	__padding38__;
	uint8_t	__padding39__;
	uint8_t	__padding40__;
	uint8_t	__padding41__;
	uint8_t	__padding42__;
	uint8_t	__padding43__;
	uint8_t	__padding44__;
	uint8_t	__padding45__;
	uint8_t	__padding46__;
	uint8_t	__padding47__;
	uint8_t	__padding48__;
	uint8_t	__padding49__;
	uint8_t	__padding50__;
	uint8_t	__padding51__;
	uint8_t	__padding52__;
	uint8_t	__padding53__;
	uint8_t	__padding54__;
	uint8_t	__padding55__;
	uint32_t	SecondLevelCacheSize;
	uint32_t	HalReserved[16];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint8_t	__padding8__;
	uint8_t	__padding9__;
	uint8_t	__padding10__;
	uint8_t	__padding11__;
	uint8_t	__padding12__;
	uint8_t	__padding13__;
	uint8_t	__padding14__;
	uint8_t	__padding15__;
	uint8_t	__padding16__;
	uint8_t	__padding17__;
	uint8_t	__padding18__;
	uint8_t	__padding19__;
	uint8_t	__padding20__;
	uint8_t	__padding21__;
	uint8_t	__padding22__;
	uint8_t	__padding23__;
	uint8_t	__padding24__;
	uint8_t	__padding25__;
	uint8_t	__padding26__;
	uint8_t	__padding27__;
	uint8_t	__padding28__;
	uint8_t	__padding29__;
	uint8_t	__padding30__;
	uint8_t	__padding31__;
	uint8_t	__padding32__;
	uint8_t	__padding33__;
	uint8_t	__padding34__;
	uint8_t	__padding35__;
	uint8_t	__padding36__;
	uint8_t	__padding37__;
	uint8_t	__padding38__;
	uint8_t	__padding39__;
	uint8_t	__padding40__;
	uint8_t	__padding41__;
	uint8_t	__padding42__;
	uint8_t	__padding43__;
	uint8_t	__padding44__;
	uint8_t	__padding45__;
	uint8_t	__padding46__;
	uint8_t	__padding47__;
	uint8_t	__padding48__;
	uint8_t	__padding49__;
	uint8_t	__padding50__;
	uint8_t	__padding51__;
	uint8_t	__padding52__;
	uint8_t	__padding53__;
	uint8_t	__padding54__;
	uint8_t	__padding55__;
	uint8_t	__padding56__;
	uint8_t	__padding57__;
	uint8_t	__padding58__;
	uint8_t	__padding59__;
	uint32_t	Unused2;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*KdVersionBlock;
	void	*Unused3;
	uint32_t	PcrAlign1[24];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint8_t	__padding8__;
	uint8_t	__padding9__;
	uint8_t	__padding10__;
	uint8_t	__padding11__;
	uint8_t	__padding12__;
	uint8_t	__padding13__;
	uint8_t	__padding14__;
	uint8_t	__padding15__;
	uint8_t	__padding16__;
	uint8_t	__padding17__;
	uint8_t	__padding18__;
	uint8_t	__padding19__;
	uint8_t	__padding20__;
	uint8_t	__padding21__;
	uint8_t	__padding22__;
	uint8_t	__padding23__;
	uint8_t	__padding24__;
	uint8_t	__padding25__;
	uint8_t	__padding26__;
	uint8_t	__padding27__;
	uint8_t	__padding28__;
	uint8_t	__padding29__;
	uint8_t	__padding30__;
	uint8_t	__padding31__;
	uint8_t	__padding32__;
	uint8_t	__padding33__;
	uint8_t	__padding34__;
	uint8_t	__padding35__;
	uint8_t	__padding36__;
	uint8_t	__padding37__;
	uint8_t	__padding38__;
	uint8_t	__padding39__;
	uint8_t	__padding40__;
	uint8_t	__padding41__;
	uint8_t	__padding42__;
	uint8_t	__padding43__;
	uint8_t	__padding44__;
	uint8_t	__padding45__;
	uint8_t	__padding46__;
	uint8_t	__padding47__;
	uint8_t	__padding48__;
	uint8_t	__padding49__;
	uint8_t	__padding50__;
	uint8_t	__padding51__;
	uint8_t	__padding52__;
	uint8_t	__padding53__;
	uint8_t	__padding54__;
	uint8_t	__padding55__;
	uint8_t	__padding56__;
	uint8_t	__padding57__;
	uint8_t	__padding58__;
	uint8_t	__padding59__;
	uint8_t	__padding60__;
	uint8_t	__padding61__;
	uint8_t	__padding62__;
	uint8_t	__padding63__;
	uint8_t	__padding64__;
	uint8_t	__padding65__;
	uint8_t	__padding66__;
	uint8_t	__padding67__;
	uint8_t	__padding68__;
	uint8_t	__padding69__;
	uint8_t	__padding70__;
	uint8_t	__padding71__;
	uint8_t	__padding72__;
	uint8_t	__padding73__;
	uint8_t	__padding74__;
	uint8_t	__padding75__;
	uint8_t	__padding76__;
	uint8_t	__padding77__;
	uint8_t	__padding78__;
	uint8_t	__padding79__;
	uint8_t	__padding80__;
	uint8_t	__padding81__;
	uint8_t	__padding82__;
	uint8_t	__padding83__;
	uint8_t	__padding84__;
	uint8_t	__padding85__;
	uint8_t	__padding86__;
	uint8_t	__padding87__;
	uint8_t	__padding88__;
	uint8_t	__padding89__;
	uint8_t	__padding90__;
	uint8_t	__padding91__;
	uint8_t	__padding92__;
	uint8_t	__padding93__;
	uint8_t	__padding94__;
	uint8_t	__padding95__;
	uint8_t	__padding96__;
	uint8_t	__padding97__;
	uint8_t	__padding98__;
	uint8_t	__padding99__;
	struct _KPRCB	Prcb;
}__attribute__((packed));