
struct _PPM_IDLE_STATES {
	uint8_t	InterfaceVersion;
	uint8_t	ForceIdle;
	uint8_t	EstimateIdleDuration;
	uint8_t	ExitLatencyTraceEnabled;
	uint8_t	NonInterruptibleTransition;
	uint8_t	UnaccountedTransition;
	uint8_t	IdleDurationLimited;
	uint8_t	IdleCheckLimited;
	uint32_t	ExitLatencyCountdown;
	uint32_t	TargetState;
	uint32_t	ActualState;
	uint32_t	OldState;
	uint32_t	OverrideIndex;
	uint32_t	ProcessorIdleCount;
	uint32_t	Type;
	uint16_t	ReasonFlags;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint64_t	InitiateWakeStamp;
	int32_t	PreviousStatus;
	uint32_t	PreviousCancelReason;
	struct _KAFFINITY_EX	PrimaryProcessorMask;
	struct _KAFFINITY_EX	SecondaryProcessorMask;
	void	*IdlePrepare;
	struct long	*IdlePreExecute;
	struct long	*IdleExecute;
	struct longstruct unsigned	*IdlePreselect;
	struct longstruct unsigned	*IdleTest;
	struct longstruct unsigned	*IdleAvailabilityCheck;
	void	*IdleComplete;
	void	*IdleCancel;
	struct charstruct unsigned	*IdleIsHalted;
	struct charstruct unsigned	*IdleInitiateWake;
	struct _PROCESSOR_IDLE_PREPARE_INFO	PrepareInfo;
	struct _KAFFINITY_EX	DeepIdleSnapshot;
	struct _PERFINFO_PPM_STATE_SELECTION	*Tracing;
	struct _PERFINFO_PPM_STATE_SELECTION	*CoordinatedTracing;
	struct _PPM_SELECTION_MENU	ProcessorMenu;
	struct _PPM_SELECTION_MENU	CoordinatedMenu;
	struct _PPM_COORDINATED_SELECTION	CoordinatedSelection;
	struct _PPM_IDLE_STATE	State[1];
}__attribute__((packed));
