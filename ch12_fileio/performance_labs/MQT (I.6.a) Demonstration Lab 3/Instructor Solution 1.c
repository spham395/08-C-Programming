#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	FILE * myStory_ptr = fopen("my-story.txt", "w");
	char userInput = 0;
	

	if (!myStory_ptr)
	{
		puts("Could not open the file.");
		return -1;
	}
	else
	{
		printf("Write a story.\nThe escape character is Ctrl-D.\n\n");
		_flushall();
		while (userInput != 0x4)
		{
			userInput = getchar();
			putc(userInput, myStory_ptr);
		}
		fclose(myStory_ptr);
	}

	myStory_ptr = fopen("my-story.txt", "r");

	if (!myStory_ptr)
	{
		puts("Could not reopen file.");
		return -1;
	}
	else
	{
		puts("\n\nFile Contents:");
		while (1)
		{
			userInput = getc(myStory_ptr);
			if (userInput == 0x4 || userInput == EOF)
			{
				break;
			}
			putchar(userInput);
		}
		fclose(myStory_ptr);
	}

	return 0;
}
