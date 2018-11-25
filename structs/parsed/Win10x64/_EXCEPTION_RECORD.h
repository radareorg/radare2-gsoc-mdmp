
struct _EXCEPTION_RECORD {
	int32_t	ExceptionCode;
	uint32_t	ExceptionFlags;
	struct _EXCEPTION_RECORD	*ExceptionRecord;
	void	*ExceptionAddress;
	uint32_t	NumberParameters;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint64_t	ExceptionInformation[15];
}__attribute__((packed));
