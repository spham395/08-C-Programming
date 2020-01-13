#include<stdlib.h>
#include<stdio.h>
//#include<stdint.h>

int main(){
    //__ so don't have to import library, but not fully understand
    __uint32_t userInput, bitChecker;
    int shiftNum = 0;

    printf("Enter number: ");
    fscanf(stdin, "%d", &userInput);
    //User can specify number to shift, if negative, shift right, else left
    printf("Shift by: ");
    fscanf(stdin, "%d", &shiftNum);
    //negative number doesn't shift it the other way, 
    //if/else to check which way to shift and abs() to make positive
    //shift three bits left or right
    if (shiftNum < 0){
        userInput = userInput >> abs(shiftNum);
    } else{
        userInput = userInput << shiftNum;
    }
    //prints decimal and hexa of userInput
    fprintf(stdout, "Decimal: %d\nHexa: %X\n", userInput, userInput);
    fprintf(stdout, "Binary: ");
    //places bitchecker far left, as long as not null, increments by shifting once right
    for (bitChecker = 1 << 31; bitChecker; bitChecker >>= 1){
        //compares bitchecker and userinput, if both 1, then print 1 else print 0
        (bitChecker & userInput) ? fprintf(stdout, "1"):fprintf(stdout, "0");
    }
    fprintf(stdout, "\n");
    return 0;
}
