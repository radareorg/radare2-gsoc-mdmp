
struct _KPCR {
	union {
		struct _NT_TIB	NtTib;
		struct _EXCEPTION_REGISTRATION_RECORD	*Used_ExceptionList;
	};
	void	*Used_StackBase;
	void	*Spare2;
	void	*TssCopy;
	uint32_t	ContextSwitches;
	uint32_t	SetMemberCopy;
	void	*Used_Self;
	struct _KPCR	*SelfPcr;
	struct _KPRCB	*Prcb;
	uint8_t	Irql;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint32_t	IRR;
	uint32_t	IrrActive;
	uint32_t	IDR;
	void	*KdVersionBlock;
	struct _KIDTENTRY	*IDT;
	struct _KGDTENTRY	*GDT;
	struct _KTSS	*TSS;
	uint16_t	MajorVersion;
	uint16_t	MinorVersion;
	uint32_t	SetMember;
	uint32_t	StallScaleFactor;
	uint8_t	SpareUnused;
	uint8_t	Number;
	uint8_t	Spare0;
	uint8_t	SecondLevelCacheAssociativity;
	uint32_t	VdmAlert;
	uint32_t	KernelReserved[14];
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
	uint32_t	InterruptMode;
	uint8_t	Spare1;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint32_t	KernelReserved2[17];
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
	struct _KPRCB	PrcbData;
}__attribute__((packed));
