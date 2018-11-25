
struct _KTSS {
	uint16_t	Backlink;
	uint16_t	Reserved0;
	uint32_t	Esp0;
	uint16_t	Ss0;
	uint16_t	Reserved1;
	uint32_t	NotUsed1[4];
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint32_t	CR3;
	uint32_t	Eip;
	uint32_t	EFlags;
	uint32_t	Eax;
	uint32_t	Ecx;
	uint32_t	Edx;
	uint32_t	Ebx;
	uint32_t	Esp;
	uint32_t	Ebp;
	uint32_t	Esi;
	uint32_t	Edi;
	uint16_t	Es;
	uint16_t	Reserved2;
	uint16_t	Cs;
	uint16_t	Reserved3;
	uint16_t	Ss;
	uint16_t	Reserved4;
	uint16_t	Ds;
	uint16_t	Reserved5;
	uint16_t	Fs;
	uint16_t	Reserved6;
	uint16_t	Gs;
	uint16_t	Reserved7;
	uint16_t	LDT;
	uint16_t	Reserved8;
	uint16_t	Flags;
	uint16_t	IoMapBase;
	struct _KiIoAccessMap	IoMaps[1];
	uint8_t	IntDirectionMap[32];
}__attribute__((packed));
