// Write formatted strings to a file
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define BUFF_SIZE ((int)30)
#define LONG_BUFF_SIZE (BUFF_SIZE * 4)

int strip_newline_chars(char * string, int buffLen);

int main(void)
{
	FILE * classRoster_ptr = fopen("MQT-class-roster.txt", "a");
	int numOfStudents = 0;
	int i = 0;
	char firstName[BUFF_SIZE] = { 0 };
	char middleName[BUFF_SIZE] = { 0 };
	char lastName[BUFF_SIZE] = { 0 };
	char tempBuff[LONG_BUFF_SIZE] = { 0 };
	char * oneString_ptr = tempBuff;

	if (!classRoster_ptr)
	{
		puts("Error opening file!");
		return -1;
	}
	else
	{
		printf("How many students in the class?\n");
		_flushall();
		scanf("%d", &numOfStudents);

		if (0 == numOfStudents)
		{
			return 0;
		}
		else if (numOfStudents < 0)
		{
			puts("Not possible!");
			return -1;
		}
		else
		{
			for (i = 0; i < numOfStudents; i++)
			{
				printf("Enter the first name:\t");
				_flushall();
				fgets(firstName, BUFF_SIZE, stdin);
				strip_newline_chars(firstName, BUFF_SIZE);

				printf("Enter the middle name:\t");
				_flushall();
				fgets(middleName, BUFF_SIZE, stdin);
				strip_newline_chars(middleName, BUFF_SIZE);

				printf("Enter the last name:\t");
				_flushall();
				fgets(lastName, BUFF_SIZE, stdin);
				strip_newline_chars(lastName, BUFF_SIZE);

				fprintf(classRoster_ptr, "%s %c %s has a username of %c%c%s\n", firstName, *(middleName), lastName, *(firstName), *(middleName), lastName);
			}
		}

		if (!(freopen("MQT-class-roster.txt", "r", classRoster_ptr)))
		{
			puts("Error reopening file!");
			return -1;
		}

		while (oneString_ptr)
		{

			oneString_ptr = fgets(tempBuff, LONG_BUFF_SIZE, classRoster_ptr);

			if (tempBuff)
			{
				printf("%s", tempBuff);
			}
		}
	}

	return 0;
}

int strip_newline_chars(char * string, int buffLen)
{
	int i = 0;
	int returnValue = 0;

	if (!string)
	{
		returnValue = -1;
	}
	else if (buffLen < 0)
	{
		returnValue = -2;
	}
	else
	{
		for (i = 0; i < buffLen; i++)
		{
			if (*(string + i) == 0xA)
			{
				*(string + i) = 0x0;
				returnValue++;
				break;
			}
			else if (*(string + i) == 0x0)
			{
				break;
			}
		}
	}

	return returnValue;
}
