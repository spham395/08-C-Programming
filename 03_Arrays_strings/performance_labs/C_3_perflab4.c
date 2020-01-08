/*
Name: Steven
Date: 07 JAN 2020
Project: C 3 Perf lab4
*/
#include<stdio.h>
//macro for finding dimensions of any data type
#define eleSize(x) (sizeof(x)/sizeof(*x))

int main(int argc, char **argv){
    //call funcs
    char myChar[256] = {0};
    char myPhrase[] = "\"It's gonna work this time.\"";
    int count = 0;

    for(int i = 0; i < eleSize(myPhrase); i++){
        myChar[i] = myPhrase[i];
    }
    myChar[eleSize(myPhrase)] = 0;
    printf("%s\n", myChar);
    printf("%ld\n", eleSize(myChar));
    printf("%ld\n", eleSize(myPhrase));
    for(int i = 0; i < eleSize(myChar); i++){
        if (!myChar[i]){
            break;
        } else{
            count += 1;
        }
    }
    printf("%d", count);

    return 0;
}