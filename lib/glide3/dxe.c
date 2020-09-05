#include <sys/dxe.h>

extern_asm(___dj_assert);
extern_asm(___dj_stdout);
extern_asm(___djgpp_base_address);
extern_asm(___djgpp_nearptr_disable);
extern_asm(___djgpp_nearptr_enable);
extern_asm(___dpmi_free_physical_address_mapping);
extern_asm(___dpmi_physical_address_mapping);
extern_asm(__crt0_startup_flags);
extern_asm(_atof);
extern_asm(_atoi);
extern_asm(_atol);
extern_asm(_exit);
extern_asm(_fclose);
extern_asm(_fflush);
extern_asm(_fgets);
extern_asm(_fopen);
extern_asm(_fread);
extern_asm(_free);
extern_asm(_fwrite);
extern_asm(_getc);
extern_asm(_getenv);
extern_asm(_int86);
extern_asm(_malloc);
extern_asm(_memcpy);
extern_asm(_memset);
extern_asm(_pow);
extern_asm(_printf);
extern_asm(_sprintf);
extern_asm(_sscanf);
extern_asm(_strcat);
extern_asm(_strncat);
extern_asm(_strcmp);
extern_asm(_strncmp);
extern_asm(_strcpy);
extern_asm(_strncpy);
extern_asm(_strtoul);
extern_asm(_usleep);
extern_asm(_vfprintf);
extern_asm(_vsprintf);
extern_asm(_clock);
extern_asm(_putenv);

DXE_EXPORT_TABLE_AUTO (___dxe_eta___glide3x)
	DXE_EXPORT_ASM (___dj_assert)
	DXE_EXPORT_ASM (___dj_stdout)
	DXE_EXPORT_ASM (___djgpp_base_address)
	DXE_EXPORT_ASM (___djgpp_nearptr_disable)
	DXE_EXPORT_ASM (___djgpp_nearptr_enable)
	DXE_EXPORT_ASM (___dpmi_free_physical_address_mapping)
	DXE_EXPORT_ASM (___dpmi_physical_address_mapping)
	DXE_EXPORT_ASM (__crt0_startup_flags)
	DXE_EXPORT_ASM (_atof)
	DXE_EXPORT_ASM (_atoi)
	DXE_EXPORT_ASM (_atol)
	DXE_EXPORT_ASM (_exit)
	DXE_EXPORT_ASM (_fclose)
	DXE_EXPORT_ASM (_fflush)
	DXE_EXPORT_ASM (_fgets)
	DXE_EXPORT_ASM (_fopen)
	DXE_EXPORT_ASM (_fread)
	DXE_EXPORT_ASM (_free)
	DXE_EXPORT_ASM (_fwrite)
	DXE_EXPORT_ASM (_getc)
	DXE_EXPORT_ASM (_getenv)
	DXE_EXPORT_ASM (_int86)
	DXE_EXPORT_ASM (_malloc)
	DXE_EXPORT_ASM (_memcpy)
	DXE_EXPORT_ASM (_memset)
	DXE_EXPORT_ASM (_pow)
	DXE_EXPORT_ASM (_printf)
	DXE_EXPORT_ASM (_sprintf)
	DXE_EXPORT_ASM (_sscanf)
	DXE_EXPORT_ASM (_strcat)
	DXE_EXPORT_ASM (_strncat)
	DXE_EXPORT_ASM (_strcmp)
	DXE_EXPORT_ASM (_strncmp)
	DXE_EXPORT_ASM (_strcpy)
	DXE_EXPORT_ASM (_strncpy)
	DXE_EXPORT_ASM (_strtoul)
	DXE_EXPORT_ASM (_usleep)
	DXE_EXPORT_ASM (_vfprintf)
	DXE_EXPORT_ASM (_vsprintf)
	DXE_EXPORT_ASM (_clock)
	DXE_EXPORT_ASM (_putenv)
DXE_EXPORT_END
