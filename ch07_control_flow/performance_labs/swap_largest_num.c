#include <stdio.h>

int main()
{
	int variable1 = 0;
	int variable2 = 0;
	int variable3 = 0;

	printf("Enter two integers separated by a single space. \n");
	printf("(e.g., -17 1932 \n");
	_flushall();
	scanf("%d %d", &variable1, &variable2);

	if (variable1 == variable2)
	{
		printf("An error.... \n");
	}
	else if (variable1 > variable2)
	{
		variable3 = variable1;
	}
	else
	{
		variable3 = variable2;
	}

	if (variable1 + variable2 + variable3 > 2)
	{
        printf("The sum of all three variables is: %d\n", variable1+variable2+variable3);
		printf("Variable 1:  %d \n", variable1);
        printf("Variable 2:  %d \n", variable2);
        printf("Variable 3:  %d \n", variable3);
	}
    else
    {
        printf("The sum of all three variables is less than 2!");
    }


	return 0;


}
