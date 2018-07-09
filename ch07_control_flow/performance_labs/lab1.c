#include <stdio.h>

int main()
{
    char someString[256] = {0};

    printf("Enter something user! \n");
    scanf("%255s", &someString);

    if (someString[0] >= 32 && someString[0] < 126)
    {
        printf("Your string is: %s", someString);
    }

    return 0;
}
