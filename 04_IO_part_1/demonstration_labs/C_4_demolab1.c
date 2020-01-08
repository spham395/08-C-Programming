/*
Name: Steven
Date: 07 JAN 2020
Project: C 3 Perf lab4
*/
#include<stdio.h>
//macro for finding dimensions of any data type
#define eleSize(x) (sizeof(x)/sizeof(*x))

int main(int argc, char **argv){
    
    int userInput = 0;                // Will store user input
    printf("Enter a character: ");    // Prompts user
    userInput = getchar();            // Stores user input
    printf("Your character was: ");   // Prefaces output
    putchar(userInput);               // Prints output
    
    return 0;
}