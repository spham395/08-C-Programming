/*
This program runs a performance lab 2
name: Steven
date: 6 JAN 2020
project: performance lab 2 02 Variables
*/
#include <stdio.h>

int main(void)
{
    int integer = 100;
    float singlePrecision = 3.14159265359;
    double doublePrecision = 3.14159265359;
    char singleChar = '$';

    printf("integer to float is %f \n", (float)integer);
    printf("integer to char is %c \n", (char)integer);
    printf("float to double is %.11lf \n", (double)singlePrecision);
    printf("double to float is %.11f \n", (float)doublePrecision);
    printf("char to int is %d \n", (int)singleChar);
    printf("int to char is %c \n", (char)33);

    return 0;
}