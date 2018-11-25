
struct _RTL_USER_PROCESS_PARAMETERS {
	uint32_t	MaximumLength;
	uint32_t	Length;
	uint32_t	Flags;
	uint32_t	DebugFlags;
	void	*ConsoleHandle;
	uint32_t	ConsoleFlags;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	void	*StandardInput;
	void	*StandardOutput;
	void	*StandardError;
	struct _CURDIR	CurrentDirectory;
	struct _UNICODE_STRING	DllPath;
	struct _UNICODE_STRING	ImagePathName;
	struct _UNICODE_STRING	CommandLine;
	void	*Environment;
	uint32_t	StartingX;
	uint32_t	StartingY;
	uint32_t	CountX;
	uint32_t	CountY;
	uint32_t	CountCharsX;
	uint32_t	CountCharsY;
	uint32_t	FillAttribute;
	uint32_t	WindowFlags;
	uint32_t	ShowWindowFlags;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct _UNICODE_STRING	WindowTitle;
	struct _UNICODE_STRING	DesktopInfo;
	struct _UNICODE_STRING	ShellInfo;
	struct _UNICODE_STRING	RuntimeData;
	struct _RTL_DRIVE_LETTER_CURDIR	CurrentDirectores[32];
	uint64_t	EnvironmentSize;
	uint64_t	EnvironmentVersion;
	void	*PackageDependencyData;
	uint32_t	ProcessGroupId;
	uint32_t	LoaderThreads;
}__attribute__((packed));
