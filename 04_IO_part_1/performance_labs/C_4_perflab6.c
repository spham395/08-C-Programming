/*
Name: Steven
Date: 08 JAN 2020
Project: C 4 perf lab 6
*/
#include<stdio.h>
//macro for finding dimensions of any data type
#define eleSize(x) (sizeof(x)/sizeof(*x))

int main(int argc, char **argv){
    
    int userInput = 0;                // Will store input
    printf("Enter a character: ");    // Prompts user
    userInput = getc(stdin);          // Stores stream input
    printf("Your character was : ");  // Prefaces output
    putc(userInput, stdout);          // Writes to stdout
    putc('\n', stdout);
    printf("Your previous character: ");
    putc(userInput - 1, stdout);
    putc('\n', stdout);
    int endLoop = 1;
    /*while (endLoop != 48)
    {
        printf("Enter 0 to end: ");
        endLoop = getc(stdin);
    }*/
    

    return 0;
}