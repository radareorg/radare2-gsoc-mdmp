
struct _IMAGE_NT_HEADERS {
	uint32_t	Signature;
	struct _IMAGE_FILE_HEADER	FileHeader;
	struct _IMAGE_OPTIONAL_HEADER	OptionalHeader;
}__attribute__((packed));
