#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	FILE * myFile_ptr = fopen("no-append.txt", "r");
	char readFromFile = 0;
	if (myFile_ptr)
	{
		while (readFromFile != EOF)
		{
			readFromFile = getc(myFile_ptr);
			putc(readFromFile, stdout);
		}
		fclose(myFile_ptr);
	}

	return 0;
}
