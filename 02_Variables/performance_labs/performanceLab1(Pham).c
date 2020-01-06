/*
This program runs performance lab 1
name: Steven
date: 6 JAN 2020
project: Performance Lab 1
*/
#include <stdio.h>

int main(void)
{
    int integer = 123456;
    float singlePrecision = 3.1415926;
    double doublePrecision = 3.14159265359;
    char singleChar = '$';

    printf("your integer is %d \n", integer);
    printf("size of integer is %ld \n", sizeof(integer));

    printf("your float is %f \n", singlePrecision);
    printf("size of float is %ld \n", sizeof(singlePrecision));

    printf("your double is %.11lf \n", doublePrecision);
    printf("size of double is %ld \n", sizeof(doublePrecision));

    printf("your first char is %c \n", singleChar);
    printf("size of first char is %ld \n", sizeof(singleChar));

    return 0;
}