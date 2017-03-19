
struct _CONTEXT {
	uint64_t	P1Home;
	uint64_t	P2Home;
	uint64_t	P3Home;
	uint64_t	P4Home;
	uint64_t	P5Home;
	uint64_t	P6Home;
	uint32_t	ContextFlags;
	uint32_t	MxCsr;
	uint16_t	SegCs;
	uint16_t	SegDs;
	uint16_t	SegEs;
	uint16_t	SegFs;
	uint16_t	SegGs;
	uint16_t	SegSs;
	uint32_t	EFlags;
	uint64_t	Dr0;
	uint64_t	Dr1;
	uint64_t	Dr2;
	uint64_t	Dr3;
	uint64_t	Dr6;
	uint64_t	Dr7;
	uint64_t	Rax;
	uint64_t	Rcx;
	uint64_t	Rdx;
	uint64_t	Rbx;
	uint64_t	Rsp;
	uint64_t	Rbp;
	uint64_t	Rsi;
	uint64_t	Rdi;
	uint64_t	R8;
	uint64_t	R9;
	uint64_t	R10;
	uint64_t	R11;
	uint64_t	R12;
	uint64_t	R13;
	uint64_t	R14;
	uint64_t	R15;
	uint64_t	Rip;
	union {
		struct _XSAVE_FORMAT	FltSave;
		struct _M128A	Header[2];
	};
	struct _M128A	Legacy[8];
	struct _M128A	Xmm0;
	struct _M128A	Xmm1;
	struct _M128A	Xmm2;
	struct _M128A	Xmm3;
	struct _M128A	Xmm4;
	struct _M128A	Xmm5;
	struct _M128A	Xmm6;
	struct _M128A	Xmm7;
	struct _M128A	Xmm8;
	struct _M128A	Xmm9;
	struct _M128A	Xmm10;
	struct _M128A	Xmm11;
	struct _M128A	Xmm12;
	struct _M128A	Xmm13;
	struct _M128A	Xmm14;
	struct _M128A	Xmm15;
	struct _M128A	VectorRegister[26];
	uint64_t	VectorControl;
	uint64_t	DebugControl;
	uint64_t	LastBranchToRip;
	uint64_t	LastBranchFromRip;
	uint64_t	LastExceptionToRip;
	uint64_t	LastExceptionFromRip;
}__attribute__((packed));
