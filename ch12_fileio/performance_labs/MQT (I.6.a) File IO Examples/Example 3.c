#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define BUFF_SIZE 256

int main(void)
{
	FILE * myFile_ptr = fopen("no-append.txt", "r");
	char tempBuff[BUFF_SIZE] = { 0 };
	char * tempReturnValue = tempBuff;

	if (!myFile_ptr)
	{
		puts("Error opening file!");
		return -1;
	}
	else
	{
		while (tempReturnValue)
		{
//			printf("EOF?\t%d\n", feof(myFile_ptr)); // DEBUGGING 
			printf("Size of tempBuff:\t%d\n", sizeof(tempBuff));
			tempReturnValue = fgets(tempBuff, sizeof(tempBuff), myFile_ptr);
		
			if (tempReturnValue)
			{
				puts(tempBuff);
			}
		}
//		printf("EOF?\t%d\n", feof(myFile_ptr)); // DEBUGGING 
	}

	return 0;
}
