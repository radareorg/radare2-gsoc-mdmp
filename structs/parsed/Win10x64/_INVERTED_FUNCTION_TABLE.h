
struct _INVERTED_FUNCTION_TABLE {
	uint32_t	CurrentSize;
	uint32_t	MaximumSize;
	uint32_t	Epoch;
	uint8_t	Overflow;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct _INVERTED_FUNCTION_TABLE_ENTRY	TableEntry[512];
}__attribute__((packed));
