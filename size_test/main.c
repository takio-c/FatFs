#include <stdio.h>
#include "../src/ff.h"

FATFS fs;
FIL fil;

int main(int argc, char const* argv[])
{
	UINT bw;

	f_mount(&fs, "", 0);		/* Give a work area to the default drive */
	if (f_open(&fil, "newfile.txt", FA_WRITE | FA_CREATE_ALWAYS) == FR_OK) {	/* Create a file */
		f_write(&fil, "It works!\r\n", 11, &bw);	/* Write data to the file */
		f_read(&fil, 0, 0, &bw);	/* Write data to the file */
		f_close(&fil);								/* Close the file */
	}

	return 0;
}
