
struct _PEB_LDR_DATA {
	uint32_t	Length;
	uint8_t	Initialized;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	void	*SsHandle;
	struct _LIST_ENTRY	InLoadOrderModuleList;
	struct _LIST_ENTRY	InMemoryOrderModuleList;
	struct _LIST_ENTRY	InInitializationOrderModuleList;
	void	*EntryInProgress;
	uint8_t	ShutdownInProgress;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	void	*ShutdownThreadId;
}__attribute__((packed));
