/*
Name: Steven
Date: 10 JAN 2020
Project: C_6_3 Lab 10

Input a uint32_t userInput from stdin utilizing fscanf()
Initialize another uint32_t bitChecker to 0x01
Use a Bitwise Shift Left on bitChecker to ensure only the left most bit is turned on
Print the binary representation of userInput to stdout using only the following:
fprintf()
Bitwise Shift Right >>
Bitwise AND &
Relational Operator (e.g., >)
*/

#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>

int main(){
    uint32_t userInput, bitChecker;

    fscanf(stdin, "%d", &userInput);
    //prints decimal and hexa of userInput
    fprintf(stdout, "Decimal: %d\nHexa: %X\n", userInput, userInput);
    fprintf(stdout, "Binary: ");
    //places bitchecker far left, as long as not null, increments by shifting once right
    for (bitChecker = 1 << 31; bitChecker; bitChecker = bitChecker >> 1){
        //compares bitchecker and userinput, if both 1, then print 1 else print 0
        fprintf(stdout, "%d", (bitChecker & userInput) ? 1 : 0);
    }
    fprintf(stdout, "\n");
    return 0;
}
