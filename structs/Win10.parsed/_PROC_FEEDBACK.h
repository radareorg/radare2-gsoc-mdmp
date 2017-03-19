
struct _PROC_FEEDBACK {
	uint64_t	Lock;
	uint64_t	CyclesLast;
	uint64_t	CyclesActive;
	struct _PROC_FEEDBACK_COUNTER	*Counters[2];
	uint64_t	LastUpdateTime;
	uint64_t	UnscaledTime;
	int64_t	UnaccountedTime;
	uint64_t	ScaledTime[2];
	uint64_t	UnaccountedKernelTime;
	uint64_t	PerformanceScaledKernelTime;
	uint32_t	UserTimeLast;
	uint32_t	KernelTimeLast;
	uint64_t	IdleGenerationNumberLast;
	uint64_t	HvActiveTimeLast;
	uint64_t	StallCyclesLast;
	uint64_t	StallTime;
	uint8_t	KernelTimesIndex;
}__attribute__((packed));
