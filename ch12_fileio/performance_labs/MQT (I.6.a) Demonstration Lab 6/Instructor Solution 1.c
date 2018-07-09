// Read the first x words (if x is defined as "NUM_OF_WORDS") from input-file.txt 
// Store the words in a two-dimensional char array holding x rows or dimension 46

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#define NUM_OF_WORDS 10

int main(void)
{
	char firstFewWords[NUM_OF_WORDS][46] = { 0 };
	char tempWord[46] = { 0 }; // The longest English word in the dictionary is 45 letters long
	FILE * inputFile = fopen("input-file.txt", "r");
	int i = 0;

	if (!inputFile)
	{
		puts("Error opening file!");
		return -1;
	}
	else
	{
		for (i = 0; i < NUM_OF_WORDS; i++)
		{
			fscanf(inputFile, "%45s ", tempWord);
			strncpy(firstFewWords[i], tempWord, 46);
		}

		fclose(inputFile);
	}

	for (i = 0; i < NUM_OF_WORDS; i++)
	{
		puts(firstFewWords[i]);
	}


	return 0;
}
