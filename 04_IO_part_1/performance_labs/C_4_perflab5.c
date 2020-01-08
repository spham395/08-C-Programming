/*
Name: Steven
Date: 07 JAN 2020
Project: C 4 Perf lab5
*/
#include<stdio.h>
//macro for finding dimensions of any data type
#define eleSize(x) (sizeof(x)/sizeof(*x))

int main(int argc, char **argv){
    
    int userInput = 0;
    char endLoop = 1;

    while (endLoop){
        printf("Enter a character: ");
        userInput = getchar();
        printf("Your character was: ");
        putchar(userInput);
        printf("\n");
        printf("Your next character: ");
        putchar(userInput + 1);  
        printf("\n");
        getchar();
        /*printf("Enter a 0 to quit: ");
        endLoop = getchar();
        //getchar();
        if (endLoop == '0'){
            break;
        }*/
    }
    
    return 0;
}