#include <stdio.h>
#include <ctype.h>

int clearInput();

int main()
{
    int things[26] = {0};
    char x = 0;

    do
    {
        printf("Enter a char. End the program by pressing enter by itself: ");
        x = getchar();
        clearInput();
        if ((int) x >= 65 && (int) x <= 122)
        {
            x = toupper(x);
            things[x - 65] += 1;
        }
    }
    while (x != '\n');

    for (int i = 0; i < sizeof(things)/sizeof(things[0]); i++)
    {
        if (things[i] != 0)
        {
            printf("%c: %d\n", i + 65, things[i]);
        }
    }

    return 0;
}

int clearInput()
{
    while ( getchar() != '\n' );
}
