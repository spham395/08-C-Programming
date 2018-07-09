#include <stdio.h>

int main()
{
    unsigned int x = 0;
    unsigned int counter = 0;

    scanf("%4u", &x);

    for (int i = 0; i < 20; i++)
    {
        // Check for divide by 0
        if (counter == 0)
        {
            counter++;
            continue;
        }
        // Check for maxed out divide
        if (counter >= x)
        {
            break;
        }

        while (x % counter != 0)
        {
            counter++;
        }
        printf("%d is div by %d with no remainder!\n", x, counter);
        counter++;
    }

    return 0;
}
