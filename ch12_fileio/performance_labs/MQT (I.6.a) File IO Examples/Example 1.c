#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	FILE * readFile = fopen("no-read.txt", "r");
	FILE * writeFile = fopen("no-write.txt", "w");
	FILE * appendFile;

//	readFile = fopen("no-read.txt", "r");
//	writeFile = fopen("no-write.txt", "w");
	appendFile = fopen("no-append.txt", "a");

	if (!readFile)
	{
		puts("Failed to read a file.");
	}
	else
	{
		fputs("Read it!", readFile);
		fclose(readFile);
	}

	if (!writeFile)
	{
		puts("Failed to write a file.");
	}
	else
	{
		fputs("Wrote it!", writeFile);
		fclose(writeFile);
	}
	
	if (!appendFile)
	{
		puts("Failed to append a file.");
	}
	else
	{
		fputs("Appended it!1!", appendFile);
		fclose(appendFile);
	}

	return 0;
}
