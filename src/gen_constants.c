#include <stdio.h>
#include "ff.h"
#include "diskio.h"

void define_constant(const char* name, int value) {
	printf("%s=%d,", name, value);
}

#define DEFINE_CONSTANT(name) define_constant(#name, name)
#define DEFINE_SIZEOF(type) define_constant("sizeof_" #type, sizeof(type))

int main() {
	printf("\nexport const ");
	// ffconf.h
	DEFINE_CONSTANT(FF_MAX_SS);

	// ff.h
	// struct sizes
	DEFINE_SIZEOF(FATFS);
	DEFINE_SIZEOF(FIL);
	DEFINE_SIZEOF(DIR);
	DEFINE_SIZEOF(FILINFO);

	/* File function return code (FRESULT) */
	DEFINE_CONSTANT(FR_OK);
	DEFINE_CONSTANT(FR_DISK_ERR);
	DEFINE_CONSTANT(FR_INT_ERR);
	DEFINE_CONSTANT(FR_NOT_READY);
	DEFINE_CONSTANT(FR_NO_FILE);
	DEFINE_CONSTANT(FR_NO_PATH);
	DEFINE_CONSTANT(FR_INVALID_NAME);
	DEFINE_CONSTANT(FR_DENIED);
	DEFINE_CONSTANT(FR_EXIST);
	DEFINE_CONSTANT(FR_INVALID_OBJECT);
	DEFINE_CONSTANT(FR_WRITE_PROTECTED);
	DEFINE_CONSTANT(FR_INVALID_DRIVE);
	DEFINE_CONSTANT(FR_NOT_ENABLED);
	DEFINE_CONSTANT(FR_NO_FILESYSTEM);
	DEFINE_CONSTANT(FR_MKFS_ABORTED);
	DEFINE_CONSTANT(FR_TIMEOUT);
	DEFINE_CONSTANT(FR_LOCKED);
	DEFINE_CONSTANT(FR_NOT_ENOUGH_CORE);
	DEFINE_CONSTANT(FR_TOO_MANY_OPEN_FILES);
	DEFINE_CONSTANT(FR_INVALID_PARAMETER);

	/* File access mode and open method flags (3rd argument of f_open) */
	DEFINE_CONSTANT(FA_READ);
	DEFINE_CONSTANT(FA_WRITE);
	DEFINE_CONSTANT(FA_OPEN_EXISTING);
	DEFINE_CONSTANT(FA_CREATE_NEW);
	DEFINE_CONSTANT(FA_CREATE_ALWAYS);
	DEFINE_CONSTANT(FA_OPEN_ALWAYS);
	DEFINE_CONSTANT(FA_OPEN_APPEND);

	/* Fast seek controls (2nd argument of f_lseek) */
	DEFINE_CONSTANT(CREATE_LINKMAP);

	/* Format options (2nd argument of f_mkfs) */
	DEFINE_CONSTANT(FM_FAT);
	DEFINE_CONSTANT(FM_FAT32);
	DEFINE_CONSTANT(FM_EXFAT);
	DEFINE_CONSTANT(FM_ANY);
	DEFINE_CONSTANT(FM_SFD);

	/* Filesystem type (FATFS.fs_type) */
	DEFINE_CONSTANT(FS_FAT12);
	DEFINE_CONSTANT(FS_FAT16);
	DEFINE_CONSTANT(FS_FAT32);
	DEFINE_CONSTANT(FS_EXFAT);

	/* File attribute bits for directory entry (FILINFO.fattrib) */
	DEFINE_CONSTANT(AM_RDO);
	DEFINE_CONSTANT(AM_HID);
	DEFINE_CONSTANT(AM_SYS);
	DEFINE_CONSTANT(AM_DIR);
	DEFINE_CONSTANT(AM_ARC);

	// diskio.h
	/* Results of Disk Functions (DRESULT) */
	DEFINE_CONSTANT(RES_OK);
	DEFINE_CONSTANT(RES_ERROR);
	DEFINE_CONSTANT(RES_WRPRT);
	DEFINE_CONSTANT(RES_NOTRDY);
	DEFINE_CONSTANT(RES_PARERR);

	/* Disk Status Bits (DSTATUS) */
	DEFINE_CONSTANT(STA_NOINIT);
	DEFINE_CONSTANT(STA_NODISK);
	DEFINE_CONSTANT(STA_PROTECT);

	/* Command code for disk_ioctrl fucntion */
	DEFINE_CONSTANT(CTRL_SYNC);
	DEFINE_CONSTANT(GET_SECTOR_COUNT);
	DEFINE_CONSTANT(GET_SECTOR_SIZE);
	DEFINE_CONSTANT(GET_BLOCK_SIZE);
	DEFINE_CONSTANT(CTRL_TRIM);
	DEFINE_CONSTANT(CTRL_POWER);
	DEFINE_CONSTANT(CTRL_LOCK);
	DEFINE_CONSTANT(CTRL_EJECT);
	DEFINE_CONSTANT(CTRL_FORMAT);
	DEFINE_CONSTANT(MMC_GET_TYPE);
	DEFINE_CONSTANT(MMC_GET_CSD);
	DEFINE_CONSTANT(MMC_GET_CID);
	DEFINE_CONSTANT(MMC_GET_OCR);
	DEFINE_CONSTANT(MMC_GET_SDSTAT);
	DEFINE_CONSTANT(ISDIO_READ);
	DEFINE_CONSTANT(ISDIO_WRITE);
	DEFINE_CONSTANT(ISDIO_MRITE);
	DEFINE_CONSTANT(ATA_GET_REV);
	DEFINE_CONSTANT(ATA_GET_MODEL);
	DEFINE_CONSTANT(ATA_GET_SN);

	printf("create=Module;\n");
}
