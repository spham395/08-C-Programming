#include <stdio.h>

int main()
{
    char someArray[256] = {0};

    printf("Do yo thing user: ");           // Ask user for input
    scanf("%255[^\n]s", someArray);         // Prompt input, limit to 255, kill on newline

    // Check for empty string
    if (someArray[0] != 0)
    {
        printf("%s", someArray);
    }
    // else
    // {
    //     printf("The string is empty!");
    // }

    return 0;

}
