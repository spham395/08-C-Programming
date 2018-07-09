#include <stdio.h>

int main(void)
{
	char letter = 1;
	int i = 0;
	char paragraph[] = "\tOne fish.\n\tTwo fish.\n\tRed fish.\n\tBlue fish.\0";
	puts(paragraph); // DEBUGGING
	printf("\n\n\n"); // Print some blank lines

	while (letter != 0 && letter != 10)
	{
		letter = paragraph[i];
		printf("%c", letter);
		i++;
	}

	return 0;
}
