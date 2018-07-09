#include <stdio.h>

int bin_print(int num);

int main()
{
    signed int x = 0;   // User inputted number

    printf("Input a number: ");
    scanf("%5d", &x);

    // Check if number is negative/0 or positive using bitwise
    if (x&(1<<31) | !x)
    {
        printf("%d is negative or zero\n", x);
    }
    else
    {
        printf("%d is positive\n", x);
        printf("The number in binary is: \n");
        bin_print(x); // Print out binary for x

        printf("Turning %d negative...\n", x);
        x = ~x + 1; // Flips bits, adds 1. " two's complement"
        printf("%d is now negative\n", x);
        printf("%d in binary is: \n", x);
        bin_print(x);
    }
    return 0;
}

// Prints out the binary representation of x
int bin_print(int num)
{
    int a = 0;
    for (int bin_size = 31; bin_size >= 0; bin_size--)
    {
        a = num >> bin_size;

        if (a & 1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}
