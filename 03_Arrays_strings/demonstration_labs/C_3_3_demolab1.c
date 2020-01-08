/*
Name: Steven
Date: 07 JAN 2020
Project: C 3 3 Demo Lab1
*/
#include<stdio.h>

#define dataSize(x) (sizeof(x)/sizeof(*x))

int main(int argc, char **argv){
    int myIntArray[10] = {100,100,100,100,100,100,100,100,100,100};
    float myFloatArray[5] = {1,2,3,4,5};
    char myCharArray[256] = {0};

    printf("%d\n", myIntArray[2]);
    printf("%f\n", myFloatArray[2]);
    printf("%c\n", myCharArray[2]);

    for(int i = 0; i < dataSize(myIntArray); i++){
        myIntArray[i] = (i+1) * 10;
        printf("%d\n", myIntArray[i]);
    }
    for(int i = 0; i < dataSize(myFloatArray); i++){
        myFloatArray[i] = myFloatArray[i] * 1.1;
        printf("%f\n", myFloatArray[i]);
    }
    char last_name[] = "Pham";
    for(int i = 0; i < dataSize(last_name); i++){
        myCharArray[i] = last_name[i];
        printf("%c\n", myCharArray[i]);
    }

    return 0;
}