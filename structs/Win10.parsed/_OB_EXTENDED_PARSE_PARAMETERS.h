struct _OB_EXTENDED_PARSE_PARAMETERS {
	uint16_t	Length;
	uint32_t	RestrictedAccessMask;
	struct _EJOB	*Silo;
}__attribute__((packed));