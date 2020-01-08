/*
Name: Steven
Date: 07 JAN 2020
Project: C 3 3 Perf lab3
*/
#include<stdio.h>
//macro for finding dimensions of any data type
#define dataSize(x) (sizeof(x)/sizeof(*x))
//func to get, store, and output ages of classpeople
void getAges(){
    int myIntArray[14] = {0};
    
    myIntArray[0] = 32;

    for(int i = 1; i < dataSize(myIntArray); i++){
        printf("Enter age of student %d\n", i);
        scanf("%d", &myIntArray[i]);
    }

    printf("Ages:\n");
    for(int i = 0; i < dataSize(myIntArray); i++){
        printf("%d\n", myIntArray[i]);
    }
}
//func to add newline where there are spaces
void favQuote(){
    char myQuote[] = "\"It's gonna work this time.\"\0";

    for(int i = 0; i < sizeof(myQuote); i++){
        if (myQuote[i] == ' '){
            myQuote[i] = '\n';
        }
    }

    printf("Quote: \n%s\n", myQuote);
}

int main(int argc, char **argv){
    //call funcs
    getAges();
    //favQuote();

    return 0;
}