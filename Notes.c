/*
Name: Steven
Date: 08 JAN 2020
Project: 

*/
//#include<stdio.h>

/*int main(){

    printf("\n%f", 1.2);
    printf("\n%+8.4f", -1.798);
    printf("\n% 7.2f", 0.987654321);
    printf("\n%-6.1f is yours", 13.37);
    printf("\nYours is %05.2f", 1.2345);
    printf("\n%s", "Hello World!\0");
    printf("\n%9.5s", "Hello world!\0");
    printf("\n%016.11s\n", "Hello world!\0");

    return 0;
}*/

/*int main(){
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    scanf("%d%*c%d%*c%d", &hours, &minutes, &seconds);

    printf("%d %d %d", hours, minutes, seconds);

    return 0;
}*/
//C_5_2 Arithmetic Quiz
//09 JAN 2020
/*int main(){
    int x = 7;
    int y = 4;
    float z = 0;

    printf("%d\n", x*y); //28
    printf("%f\n", (float)x/y); //1.750000
    printf("%d\n", x%y); //3
    printf("%d\n", x+y); //11
    printf("%d\n", y-x); //-3
    printf("%d\n", -y); //-4
    printf("%d %d\n", x++, ++x); //8
    printf("%d\n", y++); //4 then 5
    printf("%d\n", x--); //8 then 7
    printf("%d\n", --y); //4
    printf("%d\n", 1+2*(3+y)+5); // 20

    return 0;
}*/

//C_5_3 Relational Operator Quiz
/*int main(){
    int x = 2;
    int y = 6;

    printf("%d\n", y < x); //0
    printf("%d\n", y <= x); //0
    printf("%d\n", y > x); //1
    printf("%d\n", y >= x); //1
    printf("%d\n", y == x); //0
    printf("%d\n", y != x); //1
    printf("%d\n", 2 == y); //0
    printf("%d\n", 6 != x); //1
    printf("%d\n", 6 >= 2); //1
    printf("%d\n", 2 < 6); //1
    printf("%d\n", x != y != 3 >= x); //0?

    return 0;
}*/

//C_5_4 Logical Operator Quiz
/*int main(){
    int x = 99;
    int y = 0;

    printf("%d\n", x && y); //0
    printf("%d\n", y || x); //1
    printf("%d\n", !y); //1
    printf("%d\n", y && 0); //0
    printf("%d\n", x || 42); //1
    printf("%d\n", !x); //0
    printf("%d\n", x && x); //1
    printf("%d\n", y || y); //0
    printf("%d\n", !1); //0
    printf("%d\n", 1 && 1); //1
    printf("%d\n", (0 && 1) || (2 && 3)); //1
    printf("%d\n",  0 || 1 && !0 && !3);

    return 0;
}*/

//C_5_5 Assignment Operator Quiz
/*int main(){
    int x = 9;
    int y = 3;

    printf("%d\n", x *= y); //27
    printf("%d\n", x /= y); //9
    printf("%d\n", x %= y); //0
    printf("%d\n", x += y); //3
    printf("%d\n", x -= y); //0
    printf("%d\n", x *= ++y); //0 and y 4
    printf("%d\n", x /= y--); //0 and y 3
    printf("%d\n", x %= --x); //0
    printf("%d\n", x += --y); //2 and y 2
    printf("%d\n", x -= y++); //0 and y 3
    printf("%d\n", (y %= y) || (x /= x--)); //0

    return 0;
}*/

//C_5 Performance lab 9
/*#include<stdio.h>
#include<math.h>

int main(){
    int a = 0;
    int b = 0;
    double c = 0;

    scanf("%d %d", &a, &b);
    if (a > 0 && b > 0)
    {
        c = sqrt(a*a + b*b);
        printf("%lf\n", c);
    }

    return 0;
}*/

//C_6_3 Lab 10
//10 JAN 2020
// #include<stdlib.h>
// #include<stdio.h>
// #include<stdint.h>

// int main(){
//     uint32_t userInput = 0;
//     uint32_t bitChecker = 0x01;

//     fscanf(stdin, "%d", &userInput);
//     bitChecker = bitChecker << 31;
//     fprintf(stdout, "Decimal: %d\nHexa: %X\n", userInput, userInput);
//     fprintf(stdout, "Binary: ");
//     for (int i = 1; i < 33; i++){
//         if (userInput & bitChecker){
//             fprintf(stdout, "%d", 1);
//         } else {
//             fprintf(stdout, "%d", 0);
//         }
//         if (i % 4 == 0){
//             fprintf(stdout, " ");
//         }
//         bitChecker = bitChecker >> 1;
//     }
//     fprintf(stdout, "\n");
//     return 0;
// }



// #include<stdlib.h>
// #include<stdio.h>
// #include<stdint.h>

// int main(){
//     uint32_t userInput = 0;
//     uint32_t bitChecker = 0x01;

//     fscanf(stdin, "%d", &userInput);
//     //prints decimal and hexa of userInput
//     fprintf(stdout, "Decimal: %d\nHexa: %X\n", userInput, userInput);
//     fprintf(stdout, "Binary: ");
//     //places bitchecker far left, as long as not null, increments by shifting once right
//     for (bitChecker = 1 << 31; bitChecker; bitChecker = bitChecker >> 1){
//         //compares bitchecker and userinput, if both 1, then print 1 else print 0
//         (bitChecker & userInput) ? fprintf(stdout, "1"):fprintf(stdout, "0");
//     }
//     fprintf(stdout, "\n");
//     return 0;
// }



/*
Name: Steven
Date: 10 JAN 2020
Project: C_6 Student Performance labs
Write program to shift number left by three
Write program to shift number right by five
*/
// #include<stdlib.h>
// #include<stdio.h>
// //#include<stdint.h>

// int main(){
//     //__ so don't have to import library, but not fully understand
//     __uint32_t userInput, bitChecker;
//     int shiftNum = 0;

//     printf("Enter number: ");
//     fscanf(stdin, "%d", &userInput);
//     //User can specify number to shift, if negative, shift right, else left
//     printf("Shift by: ");
//     fscanf(stdin, "%d", &shiftNum);
//     //negative number doesn't shift it the other way, 
//     //if/else to check which way to shift and abs() to make positive
//     //shift three bits left or right
//     if (shiftNum < 0){
//         userInput = userInput >> abs(shiftNum);
//     } else{
//         userInput = userInput << shiftNum;
//     }
//     //prints decimal and hexa of userInput
//     fprintf(stdout, "Decimal: %d\nHexa: %X\n", userInput, userInput);
//     fprintf(stdout, "Binary: ");
//     //places bitchecker far left, as long as not null, increments by shifting once right
//     for (bitChecker = 1 << 31; bitChecker; bitChecker >>= 1){
//         //compares bitchecker and userinput, if both 1, then print 1 else print 0
//         (bitChecker & userInput) ? fprintf(stdout, "1"):fprintf(stdout, "0");
//     }
//     fprintf(stdout, "\n");
//     return 0;
// }

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

// #include<stdlib.h>
// #include<stdio.h>
// #include<stdint.h>

// int main(){
//     uint32_t userInput, bitChecker;

//     fscanf(stdin, "%d", &userInput);
//     //prints decimal and hexa of userInput
//     fprintf(stdout, "Decimal: %d\nHexa: %X\n", userInput, userInput);
//     fprintf(stdout, "Binary: ");
//     //places bitchecker far left, as long as not null, increments by shifting once right
//     for (bitChecker = 1 << 31; bitChecker; bitChecker = bitChecker >> 1){
//         //compares bitchecker and userinput, if both 1, then print 1 else print 0
//         fprintf(stdout, "%d", (bitChecker & userInput) ? 1 : 0);
//     }
//     fprintf(stdout, "\n");
//     return 0;
// }



/*
Date: 13 JAN 2020
Project: C_7 Perf Lab 11
*/
// #include <stdio.h>

// int main(){
//     char myChar[20] = {0};

//     scanf(stdin, "%19s", &myChar);
//     if (myChar[0] >= 32 && myChar[0] <= 126){
//         fprintf(stdout, "%.19s is valid\n", myChar);
//     }else{
//         fprintf(stdout, "%.19s is not valid\n", myChar);
//     }
//     // fgets(myChar, sizeof(myChar), stdin);
//     // if(myChar[0] >= 32 && myChar[0] <= 126){
//     //     fputs(myChar, stdout);
//     // }
//     // int i;
//     // if (fgets(myChar, sizeof(myChar), stdin)) {
//     //     if (1 == sscanf(myChar, "%d", &i)) {
//     //         /* i can be safely used */
//     //         fprintf(stdout, "%s\n%d\n", myChar, i);
//     //     }
//     // }

//     return 0;
// }


// //C_7 Performance Lab 12
// //flip only one bit!
// #include <stdio.h>

// int main(){
//     int myInt = 0;

//     fprintf(stdout, "Enter a number\n");
//     fscanf(stdin, "%d", &myInt);

//     // if (myInt < 0){
//     //     fprintf(stdout, "%d is negative\n", myInt);
//     // }else{
//     //     fprintf(stdout, "%d is positive\n", myInt);
//     // }

//     // myInt = 1 + (myInt >> 31) - (-myInt >>31);
//     // if (myInt == 2){
//     //     fprintf(stdout, "positive\n");
//     // }else if (myInt == 1){
//     //     fprintf(stdout, "0\n");
//     // } else{
//     //     fprintf(stdout, "negative\n");
//     // }

//     myInt = !(myInt >> 31 | !myInt);
//     printf("%d", myInt);

//     return 0;
// }



//C_7 Performance Lab 13
// #include <stdio.h>
// #include <stdint.h>

// int main(){
//     uint32_t num1 = 0;
//     uint32_t num2 = 0;
//     uint32_t num3 = 0;

//     fscanf(stdin, "%u %u%*[^\n]\n", &num1, &num2);
//     if (num1 == num2) {
//         fprintf(stdout, "ERROR\n");
//     }else if (num1 > num2){
//         num1 = num1 ^ num3;
//         num3 = num1 ^ num3;
//         num1 = num1 ^ num3;
//     }else{
//         num2 = num2 ^ num3;
//         num3 = num2 ^ num3;
//         num2 = num2 ^ num3;
//     }
//     if (num1 + num2 + num3 > 2){
//         fprintf(stdout, "%u %u %u\n", num1, num2, num3);
//     }else{
//         printf("Sum of numbers less than 3\n");
//     }
//     return 0;
// }


//C_7 Performance Lab 14
// #include <stdio.h>

// int main(){
//     int num1 = 0;
//     int num2 = 0;
//     double sum = 0;
//     char myOper;

//     printf("Enter two numbers seperated by an arithmetic operator:\n");
//     scanf("%d %c %d", &num1, &myOper, &num2);

//     switch (myOper)
//     {
//     case '+':
//         sum = num1 + num2;
//         break;
//     case '-':
//         sum = num1 - num2;
//         break;
//     case '*':
//         sum = num1 * num2;
//         break;
//     case '/':
//         if (num1 == 0 || num2 == 0){
//             printf("ERROR\n");
//             break;
//         }
//         sum = (double)num1 / num2;
//         break;
//     case '%':
//         sum = num1 % num2;
//         break;
//     default:
//         printf("ERROR\n");
//         break;
//     }

//     fprintf(stdout, "%d %c %d = %.2lf\n", num1, myOper, num2, sum);

//     return 0;
// }



//C_7 Performance Lab 16
// #include <stdio.h>

// int main(){
//     char myChar[] = "test test test\n"
//                     "words words words\n"
//                     "Hello World!\n\0";
//     char aChar[2];
//     int count = 0;

//     while(myChar[count] != '\0'){
//         if (myChar[count] == '\n'){
//             break;
//         }
//         aChar[0] = myChar[count];
//         puts(aChar);
//         count++;
//     }
//     return 0;
// }


//C_7 Performance Lab 17
// #include <stdio.h>
// #include <ctype.h>

// int main(){
//     int myInt[26] = {0};
//     char myChar = 0;
//     int count = 0;

//     do{
//         myChar = getchar();
        
//         if(myChar >= 65 && myChar <= 90){
//             myInt[count] = myChar;
//         }else if(myChar >= 97 && myChar <= 122){
//             myInt[count] = toupper(myChar);
//         }else if (myChar == '\n'){
//             break;
//         }else{
//             continue;
//         }
//         count++;
//         getchar();
//     } while(count < (sizeof(myInt)/sizeof(int)));

//     for (int i = 0; i < (sizeof(myInt)/sizeof(int)); i++){
//         putchar(myInt[i]);
//     }
//     putchar('\n');

//     return 0;
// }



//C_7 Performance Lab 18
// #include <stdio.h>
// #include <stdint.h>

// int main(){
//     uint32_t myInt = 1;
//     int i = 1;
//     int count = 0;
    
//     do{
//         printf("Enter a positive number\n");
//         scanf("%u%*c", &myInt);
//         if (myInt > 999 || myInt <= 0){
//             printf("Invalid number\n");
//             continue;
//         }
//         while(i <= myInt && count < 20){
//             if (myInt % i == 0){
//                 printf("%d ", i);
//                 count++;
//             }
//             i++;
//         }
//         break;
//     }while(0);
//     printf("\n");

//     return 0;
// }



//C_7 Performance Lab 19
// #include <stdio.h>
// #include <ctype.h>

// int main(){
//     int myChar = 2;
//     char cont = 'n';
//     do{
//         while (myChar){
//             printf("Enter 0 for even and 1 for odd:\n");
//             scanf(" %d%*c", &myChar);
//             if (myChar == 0 || myChar == 1){
//                 break;
//             }
//         }

//         for(int i = 0; i <= 100; i++){
//             if (myChar == 0 && i % 2 == 0){
//                 printf("%d ", i);
//             } else if(myChar == 1 && i % 2 == 1){
//                 printf("%d ", i);
//             }
//         }
//         printf("\nContinue?\n");
//         cont = getchar();
//         getchar();
//     }while(toupper(cont) == 'Y');
//     printf("\n");

//     return 0;
// }


//Testing GDB
// #include <stdio.h>
// int main()
// {
// int	i,sum;
// sum=0;
// for (i=0; i<10; i++)
//   if (i < 5)
//     sum=sum+i;
//   else
//     sum=sum+((i-3)/2+(i/3));
// printf("sum=%d\n",sum);
// }


/* This program crashes.  The crash point can be found
	** using a debugger. */
// #include <stdio.h>
// int main()
// {
// int x,y;
// y=54389;
// for (x=10; x>=0; x--)
//   y=y/x;
// printf("%d\n",y);
// }


/* This program crashes.  The crash point and reason for crashing
	** can be quickly identified using a debugger. */
// #include <stdio.h>
// int main()
// {
// int x,y,z[3];
// y=54389;
// for (x=10; x>=1; x--)
//   z[y]=y/x;
// printf("%d\n",z[0]);
// }



/* This program goes into an infinite loop.  It can be paused
	** mid-execution in a debugger to see what is happening. */
// #include <stdio.h>
// int main()
// {
// int x,y;
// y=0;
// for (x=0; x<10; x++)
//   {
//   y=y+x;
//   if (y > 10)
//     x--;
//   }
// }



/* This program works partially, but then displays the wrong
	** values after some data is input.  A debugger can be used
	** to break at the problem area and step through the code line
	** by line to find the problem.  */
// #include <stdio.h>
// int main()
// {
// int choice;
// float ppg,rpg;
// ppg=rpg=0.0;
// choice=0;
// do
//   {
//   printf("(1) Enter points per game\n");
//   printf("(2) Enter rebounds per game\n");
//   printf("(3) Quit\n");
//   scanf("%d",&choice);
//   if (choice == 1 || choice == 2)
//     {
//     printf("Amount: ");
//     if (choice = 1)
//       scanf("%f",&ppg);
//     else if (choice == 2)
//       scanf("%f",&rpg);
//     printf("Points=%f Rebounds=%f\n",ppg,rpg);
//     }
//   }
// while (choice != 3);
// }



//gdb
/*
gcc -g - o crash1 Notes.c - 
gdb a.out - runs in gdb
gcc -g file (debugging symbols)
quit or q - exit
step or s -next line, if func steps into func
next or n - next line
display var - displays value of var
break line# - sets breakpoint at line
clear line# - removes breakpoint
layout next - view w/ source code
run - executes the code
*/




//C_8 Performance Lab 20
// #include <stdio.h>
// #include <string.h>

// int replace_character(char * string, const char findThisChar, const char replaceItWithThis);

// int main(){
//     //char myPhrase[] = "Hello World!\0";
//     char userInput[20] = {0};
//     char findChar, repChar;
//     //int c;

//     scanf("%19[^\n]s", &userInput);
//     //while((c = getchar()) != '\n' && c != EOF)
//     scanf(" %c", &findChar);
//     scanf(" %c", &repChar);
//     printf("%c %c\n", findChar, repChar);
//     printf("Characters replaced: %d\n", replace_character(userInput, findChar, repChar));

//     //printf("Characters replaced: %d\n", replace_character(myPhrase, 'l', 's'));
//     return 0;
// }

// int replace_character(char * string, const char findThisChar, const char replaceItWithThis){
//     int count = 0;
    
//     printf("Old string: %s\n", string);
//     for (int i = 0; i < strlen(string); i++){
//         if (string[i] == findThisChar){
//             string[i] = replaceItWithThis;
//             count++;
//         }else{
//             continue;
//         }
//     }
//     printf("New string: %s\n", string);

//     return count;
// }



//C_8 Performance Lab 20.1
// #include <stdio.h>
// #include <math.h>

// void roundToInteger(){
//     return 0;
// }

// int main(){
//     float myFloat = 1.234567;

//     printf("%f %f %f\n", 
//         myFloat, 
//         floor(myFloat*10+.5)/10, 
//         floor(myFloat*100+.5)/100);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main(){
//     double pi = 0;

//     for(double i = 0, j = 1; i < 7000000000; i++, j += 2){
//         if (fmod(i, 2) == 0){
//             pi += 4/j;
//         }else{
//             pi -= 4/j;
//         }

//     }
//     printf("%.20lf\n", pi);
//     return 0;
// }



//C_8_6 Demo Lab 3
// #include <stdio.h>

// int fibonacci_number(int sequenceNumber){
//     if (sequenceNumber < 0){
//         return -1;
//     }else if (sequenceNumber == 0){
//         return 0;
//     } else if (sequenceNumber == 1){
//         return 1;
//     }else{
//         return fibonacci_number(sequenceNumber - 1) + fibonacci_number(sequenceNumber - 2);
//     }
// }

// int fib_calc(int myNum){
//     if (myNum < 0){
//         return -1;
//     }
//     for (int i = 0; i < myNum; i++){
//         fibonacci_number(i);
//         printf("%d\n", fibonacci_number(i));
//     }
    
//     return myNum;
// }

// int main(){
//     int myInt = 0;

//     printf("Enter how many numbers to calculate\n");
//     scanf("%d", &myInt);
//     fib_calc(myInt);

//     return 0;
// }



//C_8 PERFORMANCE LAB 21 (MODIFIED RECURSION)
/*
 * FUNCTION:   unsigned long shadow_sequence_number(int placeNumber)
 *
 * ARGUMENTS:  placeNumber represents the individual "Shadow Sequence" position number to calculate
 *
 * RETURNS:	   The value of of the "Shadow Sequence" number at position "placeNumber" [see: S(placeNumber)].
 *			   The "Shadow Sequence" is calculated utlizing the following algorithm:
 *                 S(n) = S(n-1) + (n * n) where "n" represents a given position and S(n) represents the value at
 *                     position "n".  S(1) is always equal to 9.  S(2) is always equal to 0.  The algorithm begins
 *                     calculating at S(3).  (see NOTES: for details)  
 *             ERROR_VALUE (105) if placeNumber is unrealistic or dangerous
 *
 * NOTES:      This function should only be returning a single sequence number from the "Shadow Sequence".
 *             This function should *not* be calculating multiple sequence numbers during a single function call.
 *             Nor should this function be printing any sequence numbers.
 *             However, this function will need to call itself recursively to calculate all of the previous sequence
 *                 numbers in order to calculate the sequence number at position "placeNumber".
 *             Any requirements to calcualte or print multiple numbers in the "Shadow Sequence" should be
 *                 accomplished by the calling function [e.g., main()]
 *             The data type of long was chosen as the return value to increase the available output.
 *             The keyword unsigned was chosen to further maximize the available output since this algorithm
 *                 should not be producing any negative numbers.
 *			   The "Shadow Sequence" is calculated utlizing the following algorithm:
 *                 S(n) = S(n-1) + (n * n) where "n" represents a given position and S(n) represents the value at
 *                     position "n".  S(1) is always equal to 9.  S(2) is always equal to 0.  The algorithm begins
 *                     calculating at S(3).  For example, here are some sample calculations of S(n)
 *                     S(1) = 9.
 *                     S(2) = 0.
 *                     S(3) = S(2) + (3 * 3) ---> S(3) = (0)  + (9) ---> S(3) = 9.
 *                     S(4) = S(3) + (4 * 4) ---> S(4) = (9)  + (16) --> S(4) = 25.
 *                     S(5) = S(4) + (5 * 5) ---> S(5) = (25) + (25) --> S(5) = 50.
 *
 *             The first few "Shadow Sequence" numbers are as follows:
 *                 S(1)		S(2)	S(3)	S(4)	S(5)	S(6)	S(7)	S(8)	S(9)	S(10)
 *                 9		0		9		25		50		86		135		199		280		380
 */
// #include <stdio.h>

// unsigned long shadow_sequence_number(int placeNumber)
// {
//     //Error Value 105?
// 	if(placeNumber < 1){
//         return 105;
//     }else if (placeNumber == 1){
//         return 9;
//     }else if(placeNumber == 2){
//         return 0;
//     }else{
//         return shadow_sequence_number(placeNumber - 1) + (placeNumber * placeNumber);
//     }
// }

// int main(){
//     int myInt = 1;

//     scanf("%d", &myInt);
//     printf("%lu\n", shadow_sequence_number(myInt));

//     return 0;
// }




//C_8 Performance Lab 21.1 (Thinking)
// #include <stdio.h>

// unsigned int mystery(unsigned int a, unsigned int b); // function prototype

// int main(void){
//     //prompts user, no need for format specifier
//     printf("%s", "Enter two positive integers: ");
//     unsigned int x; //first integer init
//     unsigned int y; //second integer init
//     scanf("%u %u", &x, &y); //grabs two unsigned numbers

//     //Outputs final product
//     //mystery is multiplication, x is added to x, y number of times
//     //(5,5) = 5 + (5 + (5 + (5 + (5))))
//     printf("The result is $u\n", mystery(x,y));

//     return 0;
// }

// //Parameter b must be a positive integer
// //to prevent infinite recursion
// unsigned int mystery(unsigned int a, unsigned int b){
//     //Return 105 error code? if less than 1
//     if (1 > b){
//         return 105;
//     }
//     //base case
//     else if(1 == b){
//         return a;
//     }else{//recursive step
//         return a + mystery(a, b - 1);
//     }
// }





// 5.39--> (recursive greatest common divisor) 
// 	The greatest common divisor of integers (x) and (y) is the largest integer 
//     that evenly divides both (x) and (y). Write a function (gcd) that returns 
//     the greatest common divisor of (x) and (y). 
// 	The (gcd) of (x) and (y) is defined recursively as follows: if (y) is 
//     equal to 0, then (gcd(x, y)) is (x); otherwise (gcd (x) and (y)) is 
//     (gcd (y, x % y)), where % is the remainder operator.

// #include <stdio.h>
// //Recursion divides into eachother until there is no remainder(y==0)
// //x=10, y = 22; -> 22, 10> 10 2> 2 0>returns x=2
// int gcd(int x, int y){
//     if (y == 0){
//         return x;
//     }else{
//         return gcd(y, x % y);
//     }
// }

// int main(){
//     int num1 = 0;
//     int num2 = 0;

//     //Prompts user for 2 numbers
//     printf("Enter 2 numbers\n");
//     scanf("%d %d", &num1, &num2);
//     printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

//     return 0;
// }

// 5.40--> (recursive main) 
// 	Can main be called recursively? Write a program containing a function   
//     (main). Include (static) local variable count initialized to 1. 
//     Post-increment and print the value of count each time main is called. 
//     What happens when your program runs?

// #include <stdio.h>

// int main(){
//     //initialized but when modified, keeps the modified value
//     static int count = 1;
    
//     printf("%d\n", count++);
//     //calls main until count hits 10
//     if (count == 10){
//         return 0;
//     }else{
//         main();
//     }

//     //return 0;
// }



//Palindrome Recursive
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// //Takes a string and compares the first and last elements
// //calls itself, increments closer to the middle by using static variable
// char *is_palindrome(char *string){
//     static int pos = 0;
//     if (pos == strlen(string)/2){
//         return "a palindrome.\n";
//     }else if (toupper(string[pos]) != toupper(string[strlen(string) - pos - 1])){
//         return "not a palindrome.\n";
//     }else{
//         pos++;
//         //printf("%d", pos);
//         return is_palindrome(string);
//     }
// }

// int main(){
//     char myChar[20] = {0};

//     printf("Enter a word/phrase to check if palindrome\n");
//     scanf("%19[^\n]s", &myChar);
//     printf("%s is %s", myChar, is_palindrome(myChar));

//     return 0;
// }



//C_10 Demo Lab 1
// #include <stdio.h>
// #define STRINGIZE(x) printf(#x "\n")
// #define STRING_VARS(w) STRINGIZE(w)
// #define CONCAT(y,z) y##z

// int main(){
//     char test1[] = "Hello ";
//     char test2[] = "World!\n";
    
//     STRING_VARS(CONCAT(test1, test2));
//     printf("%d\n", EOF);
// #undef EOF
// #define EOF -3
//     printf("%d\n", EOF);
// }



//C_10 Performance Lab 24
// #include <stdio.h>
// #include <string.h>

// #define CONCAT(y,z) y##z
// #define CONCAT_VARS(a,b) CONCAT(a,b)
// #define STRINGIZE(x) ("\"" #x "\"\n")
// #define STRING_VAR(w) STRINGIZE(w)
// #define BUFSIZE 64

// int main(){
// #define TEST1 Hello
// #define TEST2 World!
//     //const char test1[] = "Hello ";
//     //const char test2[] = "World!";
//     char myArray[BUFSIZE];
    
//     strcpy(myArray, STRING_VAR(CONCAT_VARS(TEST1, TEST2)));

//     printf("%s %ld\n", myArray, sizeof(myArray));
    
//     return 0;
// }




//C_10 Performance Lab 25
// #include <stdio.h>
// #include <stdlib.h>

// #ifdef EOF
// #undef EOF
// #define EOF 66
// #endif

// #define stringize(x) #x
// #define print_macro(x) stringize(x)


// int main(){
//     printf("%s %s\n", stringize(EOF), print_macro(EOF));
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int this = 9;		// Integer variable “this” defined as 9
//     int that = 0;		// Integer variable “that” defined as 0
//     int * int_ptr;		// Pointer variable for an integer declared 
//     int_ptr = &this;	// Defined with address of “this”
//     printf("%p", int_ptr);
//     that = *int_ptr;	// “that” assigned value at int_ptr address
//     /* “that”, now 9, should now equal “this” */
//     *int_ptr = 1;		// Value at int_ptr address assigned 1
//     /* “this” is now equal to 1 */ 
//     return 0;
// }




//C_11 Performance Lab Memory Operators
// #include <stdio.h>
// #include <stdlib.h>
// //#include <string.h>

// int main(){
//     char userInput[10] = {0};
//     char *tempValue = malloc(sizeof(char) * 10);
//     char *input_ptr = tempValue;
//     int count = 0;
//     printf("Enter stuff\n");
//     scanf("%s", userInput);

//     while((*input_ptr++ = userInput[count]) != '\0'){
//         count++;
//     }
//     *(tempValue+10) = '\0';

//     printf("userInput is %s\ntempValue is %s", userInput, tempValue);

//     return 0;
// }




//C_11 Performance Lab String Splitter
// #include <stdlib.h>
// #include <stdio.h>

// #define ERROR_NULL_POINTER ((char*)"-1")
// #define ERROR_ABUNDANT_POINTER ((char*)"-2")
// #define ERROR_NULL_DELIMITER ((char*)"-3")

// char* split_the_string(char * string_ptr, char delimiter);

// int main(){
//     char *myString = malloc(sizeof(char) * 20);
//     char myChar;

//     printf("Enter stuff\n");
//     scanf("%19[^\n]s", myString);
//     printf("Enter delimiter\n");
//     getchar();
//     myChar = getchar();
//     printf("Entered %s %c\n", myString, myChar);
    
//     printf("Second %s\n", split_the_string(myString, myChar));

//     printf("First %s\n", myString);

//     return 0;
// }

// char* split_the_string(char * string_ptr, char delimiter){
//     char * new_string;
//     // int count = 0;
//     // delimiter = '\0';
//     if (!delimiter){return ERROR_NULL_DELIMITER;}
//     //As long as its not null, continue to increment pointer until delmiter is found
//     while (*string_ptr++ != delimiter && *string_ptr != '\0'){}

//     //putting a null to replace the delmiter and seperate first and second string
//     *(string_ptr-1) = '\0';
//     //assigning the start of second string to return var
//     new_string = string_ptr;
//     //checking for extra delimiters
//     while (*string_ptr++ != '\0'){
//         if (*(string_ptr) == delimiter){
//             return ERROR_NULL_POINTER;
//         }
//     }
//     return new_string;
// }




//C_11 Demo Lab fp_calculator
// #define _CRT_SECURE_NO_WARNINGS 1
// #include <stdio.h>
// #define ERROR_CODE ((double)98245.1653)
// //prototyping
// double add(double firstNumber, double secondNumber);
// double subtract(double firstNumber, double secondNumber);
// double multiply(double firstNumber, double secondNumber);
// double divide(double firstNumber, double secondNumber);

// int main(void)
// {
//     //declaring function pointer that will pass double vars x and y
// 	double(*mathFun_ptr)(double x, double y);
// 	//declaring/init val=riables
//     double num1 = 0;
// 	char mathOperator = 0; 
// 	double num2 = 0;
// 	double returnValue = 0;
//     //prompts user and gets input
// 	printf("Enter two ints and/or doubles separated by a math operator\n");
// 	printf("e.g., 1.2 + 3.4, 5.6 - 7.8, 9.10 * 2.3, 4.5 / 6.7\n");
//     //Errors out
//     //Description: The flushall() function flushes all buffers associated with open 
//     //input/output streams. A subsequent read operation on an input stream reads new 
//     //data from the associated stream.
//     //Calling the flushall() function is equivalent to calling fflush() for all open streams.
// 	//_flushall();
// 	scanf("%lf %c %lf", &num1, &mathOperator, &num2);
// 	//checks mathOperator and sets the mathFun_ptr to tha appropriate function address
//     //else error
// 	if (mathOperator == '+')
// 	{
// 		mathFun_ptr = &add;
// 	}
// 	else if (mathOperator == '-')
// 	{
// 		mathFun_ptr = &subtract;
// 	}
// 	else if (mathOperator == '*')
// 	{
// 		mathFun_ptr = &multiply;
// 	}
// 	else if (mathOperator == '/')
// 	{
// 		mathFun_ptr = &divide;
// 	}
// 	else
// 	{
// 		puts("Something went wrong!");
// 		return -1;
// 	}
//     //checks if there is mathFun_ptr
//     //I don't think this if/else necessary? the above else would catch and exit
//     //unless to check vars num1 and num2 for correct value/data type
//     //and running the statements in the if block
// 	if (mathFun_ptr)
// 	{
//         //mathFun_ptr now points to a function and is the function
//         //passing arguments to function that it's pointing to
// 		returnValue = mathFun_ptr(num1, num2);
// 		printf("The result is:\t%lf\n", returnValue);
// 	}
// 	else
// 	{
// 		puts("Something went wrong!");
// 		return -1;
// 	}
//     //why two getchar()s?
// 	getchar(); getchar();
// 	return 0;
// }
// //below functions gets called by what the user puts as mathOperator
// //and what the mathFunct_ptr points to
// double add(double firstNumber, double secondNumber)
// {
// 	return firstNumber + secondNumber;
// }

// double subtract(double firstNumber, double secondNumber)
// {
// 	return firstNumber - secondNumber;
// }

// double multiply(double firstNumber, double secondNumber)
// {
// 	return firstNumber * secondNumber;
// }

// double divide(double firstNumber, double secondNumber)
// {
// 	if (secondNumber)
// 	{
// 		return firstNumber / secondNumber;
// 	}
// 	else
// 	{
// 		return ERROR_CODE;
// 	}
// }



/*Create a program to use pointer to pointer
Code a C program to exhibit the use of pointer to a pointer.
​
	Demonstrate use of pointer to a pointer
 */

// #include <stdio.h>

// int main()
// {
//     // Integer variable
//     int myInt = 0;
//     // Pointer to integer
//     int * int_ptr = &myInt; 
//     // Pointer to integer pointer
//     int **intPtr_ptr = &int_ptr;
//     /* Change the value of num directly */
//     myInt = 10;
//     printf("Value of num = %d\n", myInt);
//     printf("Value of ptr = %d\n", *int_ptr);
//     printf("Value of dPtr = %d\n", **intPtr_ptr);
//     /* Assigns 100 using pointer to integer */
//     *int_ptr = 100;
//     printf("Value of num = %d\n", myInt);
//     printf("Value of ptr = %d\n", *int_ptr);
//     printf("Value of dPtr = %d\n", **intPtr_ptr);
//     /* Assigns 1000 using pointer to integer pointer */
//     **intPtr_ptr = 1000;
//     printf("Value of num = %d\n", myInt);
//     printf("Value of ptr = %d\n", *int_ptr);
//     printf("Value of dPtr = %d\n", **intPtr_ptr);

//     return 0;
// }
/*
 Example Output -
​
Value of num   = 10
Value pointed by ptr  = 10
Value pointed by dPtr = 10
​
Value of num   = 100
Value pointed by ptr  = 100
Value pointed by dPtr = 100
​
Value of num   = 1000
Value pointed by ptr  = 1000
Value pointed by dPtr = 1000
*/



// code sourced from "https://en.wikipedia.org/wiki/ANSI_escape_code#Colors"
// #include <stdio.h>
// void main(void)
// {
//   int i, j, n;
//   for (i = 0; i < 11; i++) {
//     for (j = 1; j < 11; j++) {
//       n = 10*i + j - 1;
//       if (n > 108) break;
//       printf("\033[%dm %3d\033[m", n, n);
//     }
//     printf("\n");
//   }
// }



// Creating a sequential file
// #include <stdio.h>
// int main( void )
// { 
//    unsigned int account; // account number
//    char name[ 30 ]; // account name
//    double balance; // account balance
//    FILE *cfPtr; // cfPtr = clients.dat file pointer   
//    // fopen opens file. Exit program if unable to create file 
//    if ( ( cfPtr = fopen( "clients.dat", "w" ) ) == NULL ) {
//       puts( "File could not be opened" );
//    } // end if
//    else { 
//       puts( "Enter the account, name, and balance." );
//       puts( "Enter EOF to end input." );
//       printf( "%s", "? " );
//       scanf( "%d%29s%lf", &account, name, &balance );
//       // write account, name and balance into file with fprintf
//       while ( !feof( stdin ) ) { 
//          fprintf( cfPtr, "%d %s %.2f\n", account, name, balance );
//          printf( "%s", "? " );
//          scanf( "%d%29s%lf", &account, name, &balance );
//       } // end while
      
//       fclose( cfPtr ); // fclose closes file   
//    } // end else
// } // end main



// Reading and printing a sequential file
// #include <stdio.h>
// int main( void )
// { 
//    unsigned int account; // account number
//    char name[ 30 ]; // account name
//    double balance; // account balance
//    FILE *cfPtr; // cfPtr = clients.dat file pointer
//    // fopen opens file; exits program if file cannot be opened 
//    if ( ( cfPtr = fopen( "clients.dat", "r" ) ) == NULL ) {
//       puts( "File could not be opened" );
//    } // end if
//    else { // read account, name and balance from file
//       printf( "%-10s%-13s%s\n", "Account", "Name", "Balance" );
//       fscanf( cfPtr, "%d%29s%lf", &account, name, &balance );
//       // while not end of file
//       while ( !feof( cfPtr ) ) { 
//          printf( "%-10d%-13s%7.2f\n", account, name, balance );
//          fscanf( cfPtr, "%d%29s%lf", &account, name, &balance );
//       } // end while
//       fclose( cfPtr ); // fclose closes the file   
//    } // end else
// } // end main


// #include <stdio.h>

// void main(){
//     FILE *myFile_ptr = fopen("write0file.txt", "r");
//     char tempBuff[256] = {0};
//     char * tempReturnValue = tempBuff;

//     if (myFile_ptr != NULL){
//         while (tempReturnValue){
//             tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
//             if (tempReturnValue){
//                 puts(tempBuff);
//             }
//         }
//         fclose(myFile_ptr);
//     }else{
//         puts("Error");
//     }
// }


//C_12 Performance Lab Might_Morphin
// #include <stdio.h>

// void main(){
//     FILE *myFile_ptr = fopen("mm_theme_song.txt", "r");
//     char readFromFile = 0;

//     if (myFile_ptr == NULL){
//         puts("Error!");
//     }else{
//         while (readFromFile != EOF)
//         {
//             readFromFile = getc(myFile_ptr);
//             putc(readFromFile, stdout);
//         }
//         fclose(myFile_ptr);
//     }
// }

//C_12 Performance Lab Your Song
// #include <stdio.h>

// void main(){
//     FILE *myFile_ptr = fopen("my_song.txt", "r");
//     char tempBuff [256] = {0};
//     char *tempValue = tempBuff;

//     if(myFile_ptr == NULL){
//         puts("Error");
//     }else{
//         while (tempValue){
//             tempValue = fgets(tempBuff, sizeof(tempBuff), myFile_ptr);
//             if(tempValue){
//                 puts(tempBuff);
//             }
//         }
//         fclose(myFile_ptr);
//     }
// }



//C_12 Performance Lab Content Copy
// #include <stdio.h>

// void main(){
//     FILE *read_ptr = fopen("mm_theme_song.txt", "r");
//     FILE *write_ptr = fopen("copy1.txt", "w");
//     char readFromFile = 0;
    
//     if(read_ptr == NULL || write_ptr == NULL){
//         puts("Error");
//     }else{
//         while(readFromFile != EOF){
//             readFromFile = getc(read_ptr);
//             putc(readFromFile, write_ptr);
//         }
//         fclose(read_ptr);
//         fclose(write_ptr);
//     }
// }


//C_12 Performance Lab Content Copy by line
// #include <stdio.h>

// void main(){
//     FILE *read_ptr = fopen("my_song.txt", "r");
//     FILE *write_ptr = fopen("copy1.txt", "w");
//     char buffer[256] = {0};
//     char *temp = buffer;
    
//     if(read_ptr == NULL || write_ptr == NULL){
//         puts("Error");
//     }else{
//         while(temp){
//             temp = fgets(buffer, sizeof(buffer), read_ptr);
//             if (temp){
//                 fputs(buffer, write_ptr);
//             }
//         }
//         fclose(read_ptr);
//         fclose(write_ptr);
//     }
// }




// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define MAX 41
// int main(void)
// {
//     FILE *fp;
//     char words[MAX];
//     if ((fp = fopen("wordy", "a+")) == NULL)
//     {
//         fprintf(stdout,"Can't open \"wordy\" file.\n");
//         exit(EXIT_FAILURE);
//     }
//     puts("Enter words to add to the file; press the #");
//     puts("key at the beginning of a line to terminate.");
//     while ((fscanf(stdin,"%40s", words) == 1)  && (words[0] != '#'))
//         fprintf(fp, "%s\n", words);
//     puts("File contents:");
//     rewind(fp);           /* go back to beginning of file */
//     while (fscanf(fp,"%s",words) == 1)
//         puts(words);
//     puts("Done!");
//     if (fclose(fp) != 0)
//         fprintf(stderr,"Error closing file\n");
//     return 0;
// }



//C_12 Usernames Perf Lab
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// //clear stdin
// void clear_input(){
//     int c;
//     while ((c = getchar()) != '\n' && c != EOF) { }
// }

// void main(){
//     FILE *write_ptr;
//     char readChar = 0;
//     char fullName[40] = {0};
//     char *token;
//     int count = 0;
//     int num = 0;
//     //prompt for number of students
//     printf("Enter number of students\n");
//     scanf("%d", &num);
//     clear_input();
//     //check for open file
//     if ((write_ptr = fopen("usernames.txt", "w")) == NULL){
//         printf("Error");
//     }else{
//         //iterate for each student
//         for (int i = 0; i < num; i++){
//             //prompt for full name
//             printf("Enter full name for student %d\n", i + 1);
//             scanf("%39[^\n]s", fullName);
//             clear_input();
//             //check for input
//             if (!fullName){
//                 i--;
//                 continue;
//             }
//             char *last = strrchr(fullName, ' ');
//             //break the string by delimiter
//             token = strtok(fullName, " ");
//             while(token != NULL){
//                 fprintf(write_ptr, "%c", *token);
//                 token = strtok(NULL, " ");
//             }
//             //grab the last name
//             if (last != NULL) {
//                 // while (*last++){
//                 //     fprintf(write_ptr, "%c", *last);
//                 // }
//                 for(int i = 1; (last)[i]; i++){
//                     if ((last+1)[i]){
//                         fprintf(write_ptr, "%c", (last+1)[i]);
//                     }
//                 }
//             }
//             fprintf(write_ptr, "\n");
                      
//         }
//         fclose(write_ptr);
//     }
// }




/*

File I/O – fprintf()

“Usernames”

Prompt the user for the number of students.

Read the first, middle, and last name for each student.

Remove any newline characters from all strings.

Append each name to a “class roster” file in the following format:

For George Herbert Dubya Bush, write the following to the the file...George H. Dubya Bush has a username of ghdbush.
BUILD THOSE SAFETY CHECKS!!!!!a

*/

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main(void)
// {
//     // Get the number of students
//     printf("How many students?\n");
//     int num = 0;
//     scanf("%d", &num);
//     getchar();
//     fseek(stdin, 0, SEEK_END);
//     // Open the file in append mode
//     FILE * roster = fopen("roster.txt", "a");
//     // Declare/initialize input string
//     char name[256] = {0};
//     // While loop to get the right number of names
//     while (num > 0)
//     {
//         // Declare/initialize output string
//         char username[256] = {0};
//         // Get user input
//         printf("Enter the student's full name\n");
//         scanf("%[^\n]255s", &name);
//         getchar();
//         fseek(stdin, 0, SEEK_END);
//         // Convert to lower case
//         for (int i = 0; name[i] != 0; i++)
//         {
//             name[i] = tolower(name[i]);
//         }
//         // For loop, split the string on spaces, continue grabbing the next chunk until no more are left
//         char * tok = strtok(name, " ");
//         for (int i = 0; tok != NULL; tok = strtok(NULL, " "), i++)
//         {
//             // If this wasn't the first iteration remove the extra characters added by the concatenation below
//             // This is needed because we need the entire last string chunk but don't know when the last chunk is
//             // Therefore we always add the entire remaining string and then remove when we find there was another chunk
//             while (strlen(username) > i)
//             {
//                 username[strlen(username) - 1] = 0;
//             }
//             strcat(username, tok);
//         }
//         // Put the output string and a newline to the txt file
//         fputs(username, roster);
//         fputs("\n", roster);
//         // Decrement the loop
//         num--;
//     }
//     // Close the file and end the program
//     fclose(roster);
//     return 0;
// }


// #include <stdio.h>

// typedef int MYINT;
// // typedef makes car a data type
// typedef struct {
//     char *name;
//     int people;
//     int speed;
//     int seats;
// } car;

// void print_car(car myCar){
//     printf("Name: %s\nSpeed: %d\nPeople: %d\nSeats: %d\n",
//             myCar.name, myCar.people, myCar.speed, myCar.seats);
// }

// int main(){
//     car car1 = {"Focus", 5, 10, 5}; 
    
//     print_car(car1);
    
// }



//06 FEB 2020
//https://github.com/CyberTrainingUSAF/08-C-Programming/blob/master/16_Data_Structures/Structure/Structure_labs.md
// #include <stdio.h>

// int main()
// {
//     struct player
//     {
//         char name[32];
//         int highscore;
//         //added member
//         float hoursPlayed;
//     };
//     struct player xbox;

//     printf("Enter the player's name: ");
//     scanf("%s",xbox.name);
//     printf("Enter their high score: ");
//     scanf("%d",&xbox.highscore);
//     //new print for new var
//     printf("Enter their hour(s) played: ");
//     scanf("%f",&xbox.hoursPlayed);

//     //added new member to print
//     printf("Player %s has a high score of %d and played %f hour(s)\n",
//             xbox.name,xbox.highscore, xbox.hoursPlayed);
//     return(0);
// }


// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
//     struct date
//     {
//         int month;
//         int day;
//         int year;
//     };
//     //new struct to hold first and last
//     struct id
//     {
//         char *first;
//         char *last;
//     };
//     struct human
//     {
//         //changed string to struct
//         struct id name;
//         struct date birthday;
//     };
//     struct human president;

//     //new first and last
//     president.name.first = calloc(sizeof("George"), sizeof(char));
//     president.name.last = calloc(sizeof("Washington"), sizeof(char));
//     strcpy(president.name.first,"George");
//     strcpy(president.name.last,"Washington");
//     president.birthday.month = 2;
//     president.birthday.day = 22;
//     president.birthday.year = 1732;

//     //modified for new struct
//     printf("%s %s was born on %d/%d/%d\n",
//             president.name.first,
//             president.name.last,
//             president.birthday.month,
//             president.birthday.day,
//             president.birthday.year);

//     return(0);
// }


// #include <stdio.h>
// #include <stdlib.h>

// typedef struct{
//     int yards;
//     int feet;
//     int inches;
// } Length;

// Length add_length(Length length1, Length length2){
//     Length newLength;
//     newLength.yards = length1.yards + length2.yards;
//     newLength.feet = length1.feet + length2.feet;
//     newLength.inches = length1.inches + length2.inches;

//     return newLength;
// }

// void show(Length myLength){
//     printf("%d yards, %d feet, %d inches\n", myLength.yards,myLength.feet,myLength.inches);
// }

// int main(){
//     Length l1 = {1, 2 , 3};
//     Length l2 = {3, 2 , 1};
//     Length newL = add_length(l1, l2);
//     show(l1);
//     printf("\t+\n");
//     show(l2);
//     printf("__________________________\n");
//     show(newL);

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// typedef struct
// {
//     char first[20];
//     char last[20];
//     char phoneNumber[11];
// } name;

// void show(name * people){
//     for (int i = 0; i < 4; i++){
//         printf("Name: %s %s\nNumber: %s\n", 
//         (people+i)->first, (people+i)->last, (people+i)->phoneNumber);
//     }
// }

// int main(){
//     int count = 0;
//     name myPeople[4];
//     name input = {"Bob", "Bob", "1234567890"};

//     while (count < 4)
//     {
//         printf("Enter the player's first name: ");
//         scanf("%s",input.first);
//         printf("Enter the player's last name: ");
//         scanf("%s",input.last);
//         printf("Enter their phone number: ");
//         scanf("%10s",input.phoneNumber);
//         myPeople[count] = input;

//         count++;
//     }
    
//     show(myPeople);

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// #define MAX 2

// typedef struct
// {
//     char id[7];
//     char name[21];
//     int hoursWorked;
//     float rateOfPay;
// } worker;

// void show(worker * people){
//     // int i = 0;
//     // while (1){
//     //     printf("ID: %s\nName: %s\nHours Worked: %d\nRate of Pay: %f\n", 
//     //     (people+i)->id, (people+i)->name, (people+i)->hoursWorked, (people+i)->rateOfPay);
//     //     i++;
//     //     break;
//     // }
//     for (int i = 0; i < MAX; i++){
//         printf("ID: %s\nName: %s\nHours Worked: %d\nRate of Pay: %f\n", 
//         (people+i)->id, (people+i)->name, (people+i)->hoursWorked, (people+i)->rateOfPay);
//     }
// }

// int main(){
//     int count = 0;
//     worker *myPeople = malloc(sizeof(worker)*MAX);
//     worker input;

//     // while (count < sizeof(myPeople)/sizeof(myPeople[0]))
//     while (count < MAX)
//     {
//         printf("Enter the worker's id: ");
//         scanf("%6s",input.id);
//         printf("Enter the worker's name: ");
//         scanf(" %20[^\n]s",input.name);
//         printf("Enter their hours worked: ");
//         scanf("%d",&input.hoursWorked);
//         printf("Enter their rate of pay: ");
//         scanf("%f",&input.rateOfPay);
//         myPeople[count] = input;

//         count++;
//     }
//     // input.id[0] = '\0';
//     // input.name[0] = '\0';
//     // input.hoursWorked = 0;
//     // input.rateOfPay = 0;
//     // myPeople[MAX+1] = input;
//     show(myPeople);

//     return 0;
// }


//https://github.com/CyberTrainingUSAF/08-C-Programming/blob/master/16_Data_Structures/Structure/Performance_Labs.md
// // Performance Lab 1
// #include <stdio.h>
// #include <stdlib.h>
// //Bug where i need to specify the exact amount of entries in file
// #define MAX 12

// typedef struct
// {
//     char name[10];
//     int year;
//     int category;
// } storm;

// void show(storm * storms, int count){
//     int min_year = 1960;
//     int max_year = 1969;

//     printf("Strongest Hurricanes between %d and %d\n", min_year, max_year);
//     printf("Name\tYear\tCategory\n");
//     for (int i = 0; i < count; i++){
//         if ((storms+i)->year >= min_year && (storms+i)->year <= max_year){
//             printf("%s\t%d\t%d\n", 
//             (storms+i)->name, (storms+i)->year, (storms+i)->category);
//         }
//     }
// }

// int main(){
//     int count = 0;
//     char* input[11];
//     storm myStorm;
//     storm myStorms[MAX];

//     FILE* file_ptr = fopen("storms2.txt", "r");

//     if (!file_ptr){
//         printf("Error");
//         return 0;
//     }
//     while ((fscanf(file_ptr, "%s %d %d", myStorm.name, &myStorm.year, &myStorm.category)==3)){
//         myStorms[count] = myStorm;
//         count++;
//     }
//     fclose(file_ptr);

//     show(myStorms, count);

//     return 0;
// }


// Performance Lab 2
// #include <stdio.h>
// #include <stdlib.h>
// //Bug where i need to specify the exact amount of entries in file
// #define MAX 10

// typedef struct
// {
//     int month, day, year, fatalities;
//     float height;
//     char country[20];
// } tsunami;

// void show(tsunami * tsunamis, int count){
//     float max_height = 0;
//     float avg_height = 0;
//     float total = 0;

//     for (int i = 0; i < count; i++){
//         total += tsunamis->height;
//         if (max_height < tsunamis->height){
//             max_height = tsunamis->height;
//         }
//         tsunamis++;
//     }
//     avg_height = total/count;
//     printf("Summary Information for Tsunamis\n"
//             "Maximum Wave height (in feet): %.2f\n"
//             "Average Wave height (in feet): %.2f\n"
//             "Tsunamis with greater than the average heights:\n",
//             max_height, avg_height);
//     for (int i = 0; i < count; i++){
//         tsunamis--;
//         if (avg_height < tsunamis->height){
//             printf("%s\n", tsunamis->country);
//         }
//     }
// }

// int main(){
//     int count = 0;
//     char* input[11];
//     tsunami myTsunami;
//     tsunami myTsunamis[MAX];

//     FILE* file_ptr = fopen("waves2.txt", "r");

//     if (!file_ptr){
//         printf("Error");
//         return 0;
//     }
//     while ((fscanf(file_ptr, "%d %d %d %d %f %s", 
//             &myTsunami.month, &myTsunami.day, 
//             &myTsunami.year, &myTsunami.fatalities, 
//             &myTsunami.height, myTsunami.country)==6)){
//         myTsunamis[count] = myTsunami;
//         count++;
//     }
//     fclose(file_ptr);

//     show(myTsunamis, count);

//     return 0;
// }


/*  
Write a program to read the information in waves2.txt. 
Use the preceding structure and print a report with the total number 
of fatalities per year in the file. Use an output format similar 
to the following:

Information for Large Tsunamis from the 1990s
Year  Number of Fatalities
xxxx  xx



This program prints a report with the total number of fatalities          */
/*  per year using the data in the data file waves2.txt.                      */

// #include <stdio.h>
// #define FILENAME "waves2.txt"

// /*  Define structure to represent a tsunami.  */
// struct tsunami
// {
//    int mo, da, yr, fatalities;
//    double max_height;
//    char location[20];
// };

// int main(void)
// {
//    /*  Define and initialize variables.  */
//    struct tsunami t1;
//    FILE* waves;
//    int sum = 0, prevYear = 0;

//    /*  Read and process data from file.  */
//    waves = fopen (FILENAME, "r");
//    if (waves == NULL)
//       printf("Error opening file\n");
//    else
//    {
//       printf("Information for Large Tsunamis from the 1990s\n");
//       printf("Year\tNumber of Fatalities\n");

//       sum = 0;
//       while (fscanf(waves,"%d %d %d %d %s %lf",&t1.mo,&t1.da,&t1.yr, 
// 	       &t1.fatalities,t1.location, &t1.max_height) == 6 )
//       {
//          if ( t1.yr == prevYear || prevYear == 0 )
//             sum += t1.fatalities;
//          else
//          {
//             printf("%d\t%d\n", prevYear, sum );
//             sum = t1.fatalities;
//          }
// 	  prevYear = t1.yr;
// 	}
//       printf("%d\t%d\n", prevYear, sum );
//       fclose(waves);
//    }

//    /*  Exit program.  */
//    return 0;
// }




//07 JAN 2020
//Memory management
//use size ./a.out to check bytes per storage
// #include <stdio.h>
// #include <stdlib.h>

// int global = 10; //stored on the bss, = 10 moves bss to data

// int main(void)
// {
//     // static int i;//stored on bss
//     static int i = 100;//stored on data
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
//     char* myInput = malloc(sizeof *myInput * 10);


//     printf("Enter something: \n");
//     scanf("%[^\n]s", myInput);
//     if (myInput){
//         printf("%s\n", myInput);
//     }

//     free(myInput);
    

//     return 0;
// }



/*
PERFORMANCE LAB 2
Follow instructions below!
The basis of this lab is simple... allocate a section of memory that will
hold a string (your first name). Print the name out, then cleanup the memory and exit.
*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(void)
// {
//     char* myInput = "Steven";
//     int myLength = strlen(myInput);
//     char *str;

//     str = malloc(sizeof *str * 40);

//     strcpy(str, myInput);

//     printf("%s\n", str);

//     str = realloc(str, myLength);

//     printf("%s\n", str);
    

//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// int main(void)
// {
//     char* myType = malloc(sizeof *myType * 10);
//     float* myInput = malloc(sizeof *myInput);

//     printf("Celsius of Farenheit?\n");
//     scanf("%s", myType);

//     printf("Current temperature?\n");
//     scanf("%f", myInput);

//     *myType = toupper(*myType);
//     // printf("%c\n", *myType);


//     if (*myType == 'C'){
//         *myInput = *myInput + 273.15;
//     }else if (*myType == 'F')
//     {
//         *myInput = (*myInput + 459.67) * (5.0/9.0);
//     }
    
//     printf("%.3f K\n", *myInput);

//     free(myType);
//     free(myInput);

//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int* myInts = malloc(sizeof *myInts * 3);

//     printf("Enter three numbers:\n");
//     scanf("%d %d %d", myInts, myInts+1, myInts+2);
    
//     for(int i = 0; i < 3; i++){
//         printf("%d\n", *(myInts+i));
//     }

//     free(myInts);

//     return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char *input;
//     //second array
//     char *input2 = malloc(sizeof *input2 * 1024);
//     char myChar;

//     input = (char *)malloc(sizeof(char)*1024);
//     if(input==NULL)
//     {
//         puts("Unable to allocate buffer! Oh no!");
//         exit(1);
//     }
//     puts("Type something long and boring:");
//     fgets(input,1023,stdin);
//     puts("You wrote:");
//     printf("\"%s\"\n",input);

//     //new string
//     for (int i = 0; i < strlen(input); i++){
//         myChar = *(input+i);
//         if (myChar == '\n'){
//             break;
//         }else if (tolower(myChar) == 'a' || tolower(myChar) == 'e' 
//             || tolower(myChar) == 'i' || tolower(myChar) == 'o' 
//             || tolower(myChar) == 'u'){
//             *(input2+i) = '@';
//         }else{
//             *(input2+i) = myChar;
//         }
//     }
//     printf("\"%s\"\n",input2);

//     free(input);
//     free(input2);

//     return(0);
// }



/*
Name: Brian George
Date: 6 Feb 20
Project: Structs Performance 1
​
Objective: 
    Write a program to read the information in storms2.txt. Use the preceding 
    structure and print the information for the hurricanes that occurred between 
    1960 and 1969. Use an output format similar to the following:
    Strongest Hurricanes between 1960 and 1969
    Name  Year  Category
*/

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct
// {
//     char name[30];
//     int year;
//     int category;
// } hurricane;

// // Silly int for line count since we do not know how to get the total items otherwise...
// int line_count = 0;

// // Gets the storm data for each hurricane and returns the array
// hurricane *get_storms()
// {
//     // Creates a file object to get data out of
//     FILE *file_ptr;

//     // Creates an empty storm pointer
//     hurricane *storms;

//     // Attempts to open the file and prints an error is one occurs
//     if ((file_ptr = fopen("storms2.txt", "r")) == NULL)
//     {
//         puts("File could not be opened");
//     }
//     else
//     {
//         // Newline counter (Number of unique storms)
//         line_count = 0;
        
//         // Extract characters from file and store in character c 
//         for (char c = getc(file_ptr); c != EOF; c = getc(file_ptr))
//         {
//             if (c == '\n')
//             {
//                 // Increment count if this character is newline 
//                 line_count++;
//             }
//         }

//         // Resets the file pointer to the beginning of the file
//         rewind(file_ptr);

//         // Creates an array the size needed to hold the storm data
//         storms = calloc(sizeof(storms), sizeof(hurricane) * line_count);

//         // Gets the data of each storm until the end of the file
//         int i = 0;
//         while (!feof(file_ptr))
//         {
//             fscanf(file_ptr, "%s\t%d\t%d", &storms[i].name, &storms[i].year, &storms[i].category);
//             i++;
//         }

//         // Closes the file
//         fclose(file_ptr);
//     }

//     // Returns the array filled with data
//     return storms;
// }

// // Sorts the hurricanes by strongest to weakest
// void strength_sort(hurricane *storms)
// {
//     // For each storm
//     for (int i = 0; i < line_count; i++)
//     {
//         // Place the storm in the appropriate position, looping through each position for a complete sort
//         for (int a = 0; a < line_count; a++)
//         {
//             // If the comparison storm is weaker, move it out of the way
//             if(storms[a].category < storms[a + 1].category)
//             {
//                 // Swaps the positions of the two storms
//                 hurricane temp = storms[a];
//                 storms[a] = storms[a + 1];
//                 storms[a + 1] = temp;
//             }
//         }
//     }
// }

// // Sorts the hurricanes by strongest to weakest
// void custom_sort(hurricane *storms, int sort_cat)
// {
//     int length, ch;
//     char c;

//     // For each storm
//     for (int i = 0; i < line_count; i++)
//     {
//         // Place the storm in the appropriate position, looping through each position for a complete sort
//         for (int a = 0; a < line_count; a++)
//         {
//             // Prevents the end of array char from being treated as an entry
//             if (storms[a + 1].name[0] != '\0')
//             {
//                 // If the sort is for anything other than name (Char array)
//                 if ((sort_cat == 0 && storms[a].category < storms[a + 1].category) || 
//                     (sort_cat == 1 && storms[a].category > storms[a + 1].category) || 
//                     (sort_cat == 4 && storms[a].year < storms[a + 1].year) || 
//                     (sort_cat == 5 && storms[a].year > storms[a + 1].year))
//                 {
//                     // Swaps the positions of the two storms
//                     hurricane temp = storms[a];
//                     storms[a] = storms[a + 1];
//                     storms[a + 1] = temp;
//                 }
//                 else // Sorting is done on the name field char array
//                 {
//                     // Determines the length of the name
//                     length = 0;
//                     ch = storms[a].name[length];
//                     while ((ch > 64 && ch < 91) || (ch > 96 && ch < 123))
//                     {
//                         ch = storms[a].name[length];
//                         length++;
//                     }
//                     // Checks each character position to see if the words are alphabetically ordered
//                     for (int pos = 0; pos < length; pos++)
//                     {
//                         // Rules for sorting forwards or backwards alphabetically
//                         if ((sort_cat == 2 && storms[a].name[0] < storms[a + 1].name[0]) || 
//                             (sort_cat == 3 && storms[a].name[0] > storms[a + 1].name[0]))
//                         {
//                             // Swaps the positions of the two storms
//                             hurricane temp = storms[a];
//                             storms[a] = storms[a + 1];
//                             storms[a + 1] = temp;

//                             // Ends the swap for this item
//                             break;
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }

// void print_data(hurricane *storms)
// {
//     // Prints the headers
//     puts("Name\t\tYear\tCategory");

//     // Char array length placeholder
//     int length, ch;
//     char c = 'a';

//     // Prints all of the data
//     for (int i = 0; i < line_count; i++)
//     {
//         // Determines the length of the name
//         length = 0;
//         ch = 0;
//         c = storms[i].name[ch];
//         while ((c > 64 && c < 91) || (c > 96 && c < 123))
//         {
//             c = storms[i].name[ch];
//             ch++;
//         }
//         // If the char count requires it, an additional tab may be required
//         if (ch <= 8)
//         {
//             printf("%s\t\t%d\t%d\n", storms[i].name, storms[i].year, storms[i].category);
//         }
//         else
//         {
//             printf("%s\t%d\t%d\n", storms[i].name, storms[i].year, storms[i].category);
//         }
//     }
// }

// int main()
// {
//     // Gets the storm data from the data file
//     hurricane *storms = get_storms();

//     // Custom sorts based on user input
//     int sort = 9;
//     while (sort < 0 || sort > 5)
//     {
//         puts("Enter a sort rule:");
//         puts("'0' for category forward");
//         puts("'1' for category backward");
//         puts("'2' for name forward");
//         puts("'3' for name backward");
//         puts("'4' for year forward");
//         puts("'5' for year backward");
//         scanf("%d", &sort);
//     }
//     custom_sort(storms, sort);

//     // Prints the storm data
//     //puts("Strongest Hurricanes between 1960 and 1969");
//     //strength_sort(storms);
//     print_data(storms);

//     // Free the used memory
//     free(storms);

//     // Ends main function & terminates program
//     return 0;
// }



// 10 JAN 2020
// https://github.com/CyberTrainingUSAF/08-C-Programming/blob/master/16_Data_Structures/Searching/SearchingExercises.md

// #include <stdlib.h>
// #include <stdio.h>

// int search(int* intArr, int arrSize, int item){
//     if (intArr == NULL || arrSize < 0){
//         return -1;
//     }
//     for (int i = 0; i < arrSize; i++){
//         if (intArr[i] == item){
//             return i+1;
//         }
//     }
//     return -1;
// }

// int* sort

// int main(){
//     int myInts[] = {4, 6, 1, 2, 5, 3};

//     printf("%d\n", search(myInts, sizeof(myInts)/sizeof(*myInts), 6));

//     return 0;
// }

// #include <stdlib.h>
// #include <stdio.h>

// #define eleSize(x) sizeof(x)/sizeof(*x)

// int compare(int* intArr, int arrSize, int* intArr2, 
//             int arr2Size)
// {
//     int flag = 1;
//     //compares each number from arr1 to see if in arr2
//     for (int i = 0; i < arrSize; i++){
//         for (int j = 0; j < arr2Size; j++){
//             //if number from arr1 found in arr2, breaks out,
//             //sets flag for printing to no
//             if (intArr[i] == intArr2[j]){
//                 flag = 0;
//                 break;
//             }
//         }
//         if (flag == 1){
//             printf("%d\n", intArr[i]);
//         }else{
//             flag = 1;
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr1[] = {1,2,3,4};
//     int arr2[] = {2,4,5,6};

//     compare(arr1, eleSize(arr1), arr2, eleSize(arr2));

//     return 0;
// }


// #include <stdlib.h>
// #include <stdio.h>

// #define eleSize(x) sizeof(x)/sizeof(*x)

// int unique(int* intArr, int arrSize)
// {
//     int* arr = malloc(1*sizeof(int));
//     int aSize = 1;
//     int flag = 1;
//     for (int i = 0; i < arrSize; i++){
//         if (aSize == 1){
//             arr[i] = intArr[i];
//             // printf("%d\n", arr[i]);
//         }else{
//             for(int j = 0; j < aSize; j++){
//                 if (*(arr+j) == intArr[i]){
//                     flag = 0;
//                     break;
//                 }
//             }
//             if (flag == 0){

//             }else{
//                 arr = calloc(aSize++, sizeof(int));
//                 arr[i] = intArr[i];
//                 flag = 1;
//             }
            
//         }
//     }
//     for(int i = 0; i < aSize; i++){
//         printf("%d\n", *(arr+i));
//     }
//     return 0;
// }

// int main(){
//     int arr1[] = {1,2,3,2,1};

//     unique(arr1, eleSize(arr1));

//     return 0;
// }


//Performance Labs
// #include <stdlib.h>
// #include <stdio.h>

// #define eleSize(x) sizeof(x)/sizeof(*x)

// int binarySearch(int* intArr, int arrSize, int key)
// {
//     int left = 0;
//     int right = arrSize - 1;

//     while (left <= right)
//     {
//         int m = left + (right - left)/2;
//         if (intArr[m] == key)
//         {
//             return m;
//         }else if (intArr[m] < key)
//         {
//             left = m + 1;
//         }else if (key < intArr[m]){
//             right = m - 1;
//         }
//     }
//     return -1;
// }

// int main(){
//     FILE* file_ptr = fopen("numbers.txt", "r");
//     int input = 0;
//     int* myInputs = malloc(30*sizeof(int));
//     int arrSize = 30;
//     int i = 0;

//     if (!file_ptr){
//         printf("Error");
//         return 0;
//     }
//     while (fscanf(file_ptr, "%d", &input) == 1)
//     {
//         // myInputs = calloc(++arrSize, sizeof(int));
//         *(myInputs+i) = input;
//         i++;
//     }
//     // for(int i = 0; i < arrSize; i++){
//     //     printf("%d\n", *(myInputs+i));
//     // }
//     int pos = binarySearch(myInputs, arrSize, 4920);
//     int x = pos / 6;
//     int y = pos % 6;
//     printf("%d %d\n", x, y);
//     fclose("numbers.txt");
//     return 0;
// }



// #include <stdlib.h>
// #include <stdio.h>

// int main(){
//     //open file
//     FILE* file_ptr = fopen("power1.txt", "r");
//     //init size for 1 element
//     int* myInputs = malloc(1*sizeof(int));
//     //init input buffer
//     int input = 0;
//     //check if open/read is good
//     if (!file_ptr){
//         printf("Error");
//         return 0;
//     }
//     //find array size and calloc memory
//     int arrSize = 0;
//     while (fscanf(file_ptr, "%d", &input) == 1)
//     {
//         arrSize++;
//     }
//     myInputs = calloc(arrSize, sizeof(int));
    
//     //reset file ptr, stores values, calc total to find avg
//     rewind(file_ptr);
//     int i = 0;
//     int total = 0;
//     while (fscanf(file_ptr, "%d", &input) == 1)
//     {
//         *(myInputs+i) = input;
//         total += input;
//         i++;
//     }
//     fclose(file_ptr);
//     int avg = total / arrSize;
//     printf("Avg Rainfall: %d\n", total/arrSize);
    
//     //counts how many above avg days and finds the minimum
//     int ndays = 0;
//     int min = myInputs[0];
//     for(int i = 0; i < arrSize; i++){
//         if (myInputs[i] > avg){
//             ndays++;
//         }
//         if (myInputs[i] <=  min){
//             min = myInputs[i];
//         }
//     }

//     //Output
//     printf("Number of days w/ greater than avg rainfall: %d\n", ndays);
//     printf("The minimum rainfall, %d, is on \n", min);
//     //Finds positions of minimum
//     int pos = 0;
//     for(int i = 0; i < arrSize; i++){
//         if (myInputs[i] == min){
//             int nrows = (pos/7)+1;
//             int ncols = (pos%7)+1;
//             printf("week %d, day %d\n", nrows, ncols);
//         }
//         pos++;
//     }
//     return 0;
// }


// int binary2D(int * intArr, int aRow, int aCol, int key){
//     int middle;
//     int total = aRow * aCol;


//     return 0;
// }



// #include <stdlib.h>
// #include <stdio.h>

// int main(){
//     int i = 5;
//     int j = 10;

//     printf("%d %d\n", i, j);

//     i = i^j;
//     j = i^j;
//     i = i^j;

//     printf("%d %d\n", i, j);

//     return 0;
// }





// 11 FEB 2020
// https://github.com/CyberTrainingUSAF/08-C-Programming/blob/master/16_Data_Structures/Sorting/Performance_labs.md

// #include <stdlib.h>
// #include <stdio.h>

// #define eleSize(x) sizeof(x)/sizeof(*x)

// void swap(int* i, int* j){
//     *i = *i^*j;
//     *j = *i^*j;
//     *i = *i^*j;
// }

// void bubbleSort(int* intArr, int n){
//     for(int o = 0; o < n-1; o++){
//         for (int p = 0; p < n-o-1; p++){
//             if (intArr[p] > intArr[p+1]){
//                 swap(&intArr[p], &intArr[p+1]);
//             }
//         }
//     }
// }

// int main(){
//     int myInts[10] = {8,9,6,7,5,4,2,3,1,10};

//     for (int i = 0; i < eleSize(myInts); i++)
//     {
//         printf("%d ", myInts[i]);
//     }
//     printf("\n");
//     bubbleSort(myInts, eleSize(myInts));
    
//     for (int i = 0; i < eleSize(myInts); i++)
//     {
//         printf("%d ", myInts[i]);
//     }

//     return 0;
// }



/*	Test driver for sorting solutions. 
	   Written by: 90cos
	   Date: 2018

*/
// #include <stdio.h>
// #include <stdbool.h>

// //	Constants
// // const int cMax_Ary_Size = 15;
// #define cMax_Ary_Size 15

// /*	Prototype Declarations */
// int bubbleSort (int* list, int last);
	
// int main ( void ) 
// {
// /*	Local Declarations */
// 	int countExch;
// 	int	ary[cMax_Ary_Size] = {89, 72, 3,  15, 21, 
// 	                           57, 61, 44, 19, 98, 
// 	                            5,  77, 39, 59, 61};

// /*	Statements */
// 	printf( "Unsorted array: ");
// 	for (int i = 0; i < cMax_Ary_Size; i++ )
// 		printf( "%3d", ary[ i ] );
		
// 	countExch = bubbleSort (ary, cMax_Ary_Size - 1);

// 	printf( "\nSorted array:   " );
// 	for (int i = 0; i < cMax_Ary_Size; i++)
// 		printf( "%3d", ary[ i ] );
// 	printf( "\n" );
	
// 	printf("Total exchanges: %d\n", countExch);
// 	return 0;
// }	/* main */

// /*	=================== bubbleSort ====================
// 	Sort list using bubble sort. Adjacent elements are
// 	compared and exchanged until list is sorted.
// 	   Pre    list must contain at least one item 
// 	          last contains index to last element 
// 	   Post   list rearranged in sequence low to high 
// 	   Return number of exchanges 
// */

// int bubbleSort (int* list, int last)
// {
//    //Goes through to find the largest element and places
//    //it at the end, we know the last is in its place
//    //so we decrement the size we need to swap, continueing
//    //until it's sorted from last/greatest to first/lowest
//    //insert code here//
//     int count = 0;
//     for (int i = 0; i < last; i++){
//         for(int j=0; j < last-i; j++){
//             if (list[j] > list[j+1]){
//                 list[j] = list[j]^list[j+1];
//                 list[j+1] = list[j]^list[j+1];
//                 list[j] = list[j]^list[j+1];
//                 count++;
//             }
//         }
//     }
// 	return count*3;
// }	// bubbleSort 


// /*
// Results:
// Unsorted array:  89 72  3 15 21 57 61 44 19 98  5 77 39 59 61
// Sorted array:     3  5 15 19 21 39 44 57 59 61 61 72 77 89 98
// Total exchanges: 144
// */


// #include <stdio.h>

// #define eleSize(x) sizeof(x)/sizeof(*x)

// void insertionSort(int *arr, int aSize){
//     int key, j;
//     for (int i = 1; i < aSize; i++){
//         key = arr[i];
//         j = i - 1;
//         while (j >=0 && arr[j] > key)
//         {
//             for(int k = 0; k < 5; k++){
//                 printf("%d ", arr[k]);
//             }
//             printf("\n");
//             arr[j+1] = arr[j];
//             j--;
//         }
//         for(int k = 0; k < 5; k++){
//             printf("%d ", arr[k]);
//         }
//         printf("\n");
//         arr[j+1] = key; 
//     }
// }

// void main(){
//     int myInts[5]  = {500,1,50,23,76};

//     insertionSort(myInts, eleSize(myInts));

//     for(int i = 0; i < 5; i++){
//         printf("%d\n", myInts[i]);
//     }
// }



/*	Test driver for sorting solutions. 
	   Written by: 90cos
	   Date: 2018
	
*/
// #include <stdio.h>

// //	Constants
// // const int cMax_Ary_Size = 15;
// #define cMax_Ary_Size 15

// /*	Prototype Declarations */
// int insertionSort (int* list, int last);
	
// int main ( void ) 
// {
// /*	Local Declarations */
// 	int countExch;
// 	int	ary[cMax_Ary_Size] = {89, 72, 3,  15, 21, \
// 	                           57, 61, 44, 19, 98, \
// 	                            5,  77, 39, 59, 61};

// /*	Statements */
// 	printf( "Unsorted array: ");
// 	for (int i = 0; i < cMax_Ary_Size; i++ )
// 		printf( "%3d", ary[ i ] );
// 	printf( "\n" );
// 	countExch = insertionSort ( ary, cMax_Ary_Size - 1);

// 	printf( "Sorted array:   " );
// 	for (int i = 0; i < cMax_Ary_Size; i++)
// 		printf( "%3d", ary[ i ] );
// 	printf( "\n" );
	
// 	printf("Total exchanges: %d\n", countExch);
// 	return 0;
// }	/* main */

// /*	================== insertionSort ==================== 
// 	Sort list using Insertion Sort. The list is divided 
// 	into sorted and unsorted lists. With each pass,  
// 	first element in unsorted list is inserted into 
// 	sorted list.
// 	   Pre    list must contain at least one element
// 	          last is index to last element in the list
// 	   Post   list rearranged, exchange counted
// 	   Return count of exchanges
// */
// int insertionSort (int* list, int last) 
// {
//     //stores the element, compares/swaps each previous element
//     //until key finds its place, inserts key, key moves to nect pos
// /// insert code here 
//     int count = 0;
//     int key, j;
//     for (int i = 1; i < last+1; i++){
//         key = list[i];
//         count++;
//         j = i - 1;
//         while (j >=0 && list[j] > key)
//         {
//             // for(int k = 0; k < last+1; k++){
//             //     printf("%d ", list[k]);
//             // }
//             // printf("\n");
//             list[j+1] = list[j];
//             count++;
//             j--;
//         }
//         // for(int k = 0; k < last+1; k++){
//         //     printf("%d ", list[k]);
//         // }
//         // printf("\n");
//         list[j+1] = key; 
//         count++;
//     }
//     return count;
// }	// insertionSort

/*
Results:
Unsorted array:  89 72  3 15 21 57 61 44 19 98  5 77 39 59 61
Sorted array:     3  5 15 19 21 39 44 57 59 61 61 72 77 89 98
Total exchanges: 76
*/



/*	Test driver for sorting solutions. 
	   Written by:  90cos
	   Date: 2018

*/
// #include <stdio.h>

// //	Constants
// // const int cMax_Ary_Size = 15;
// #define cMax_Ary_Size 15

// /*	Prototype Declarations */
// int selectionSort (int* list, int last);
	
// int main ( void ) 
// {
// /*	Local Declarations */
// 	int countExch;
// 	int	ary[cMax_Ary_Size] = {89, 72, 3,  15, 21, \
// 	                           57, 61, 44, 19, 98, \
// 	                            5,  77, 39, 59, 61};

// /*	Statements */
// 	printf( "Unsorted array: ");
// 	for (int i = 0; i < cMax_Ary_Size; i++ )
// 		printf( "%3d", ary[ i ] );
// 	printf( "\n" );
// 	countExch = selectionSort ( ary, cMax_Ary_Size - 1);

// 	printf( "Sorted array:   " );
// 	for (int i = 0; i < cMax_Ary_Size; i++)
// 		printf( "%3d", ary[ i ] );
// 	printf( "\n" );
	
// 	printf("Total exchanges: %d\n", countExch);
// 	return 0;
// }	/* main */

// /*	============ selectionSort ===============
// 	Sorts list[0...last] by selecting smallest element 
// 	in unsorted portion of array and exchanging it with 
// 	element at the beginning of the unsorted list.
// 	   Pre    list must contain at least one item
// 	          last contains index to last element 
// 	   Post   list rearranged smallest to largest
// 	   Return count of exchanges
// */
// int selectionSort (int* list, int last)
// {
//   // insert code here ///
//     int count = 0;
//     int min;

//     for (int i = 0; i < last; i++){
//         min = i;
//         for (int j = i+1; j < last+1; j++){
//             if (list[j] < list[min]){
//                 min = j;
//             }
//         }
//         if (list[min] != list[i]){
//             list[min] ^= list[i];
//             list[i] ^= list[min];
//             list[min] ^= list[i];
//             count++;
//         }
//     }

//     return count*3;
// }	// selectionSort

/*
Results:
Unsorted array:  89 72  3 15 21 57 61 44 19 98  5 77 39 59 61
Sorted array:     3  5 15 19 21 39 44 57 59 61 61 72 77 89 98
Total exchanges: 42
*/


// #include <stdio.h>

// #define eleSize(x) sizeof(x)/sizeof(*x)

// void swap(int* x, int* y){
//     if (*x != *y){
//         *x ^= *y;
//         *y ^= *x;
//         *x ^= *y;   
//     }
// }
// /* This function takes last element as pivot, places 
//    the pivot element at its correct position in sorted 
//     array, and places all smaller (smaller than pivot) 
//    to left of pivot and all greater elements to right 
//    of pivot */
// int partition(int* arr, int low, int high){
//     int pivot = arr[high]; //pivot
//     int i = low - 1; //Index of smaller element

//     for (int j = low; j <= high - 1; j++){
//         //if curr element is smaller, move smaller
//         if (arr[j] < pivot){
//             i++;
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i+1], &arr[high]);
//     return (i+1);
// }
// /* The main function that implements QuickSort 
//  arr[] --> Array to be sorted, 
//   low  --> Starting index, 
//   high  --> Ending index */
// void quickSort(int* arr, int low, int high){
//     if (low < high){
//         for (int i = 0; i < 6; i++){
//             printf("%d ", arr[i]);
//         }
//         printf("\n");
//         /* pi is partitioning index, arr[p] is now 
//            at right place */
//         int pi = partition(arr, low, high);
//         // Separately sort elements before 
//         // partition and after partition 
//         //sorts elements before pivot
//         quickSort(arr, low, pi-1);
//         //sorts elements after partition
//         quickSort(arr, pi+1, high);
//     }
// }

// void main(){
//     int myInts[] = {80,26,37,98,50,7};

//     quickSort(myInts, 0, eleSize(myInts)-1);

//     for (int i = 0; i < eleSize(myInts); i++){
//         printf("%d ", myInts[i]);
//     }
//     printf("\n");
// }



/*	Test driver for sorting solutions. 
	   Written by: 90cos
	   Date: 2018

*/
// #include <stdio.h>
// #include <stdbool.h>

// //	Constants
// // const int cMax_Ary_Size = 15;
// #define cMax_Ary_Size 15

// /*	Prototype Declarations */
// void quickSort      (int *data, int left, int right, int* count);
// void quickInsertion (int* sortData, int  first, 
//                      int  last,     int* count);
// void medianLeft     (int* sortData, int  left,
//                      int  right,    int* count);
	
// int main ( void ) 
// {
// /*	Local Declarations */
// 	int countExch;
// 	int	ary[cMax_Ary_Size] = {89, 72, 3,  15, 21, \
// 	                           57, 61, 44, 19, 98, \
// 	                            5,  77, 39, 59, 61};

// /*	Statements */
// 	printf( "Unsorted array: ");
// 	for (int i = 0; i < cMax_Ary_Size; i++ )
// 		printf( "%3d", ary[ i ] );
// 	printf( "\n" );
// 	countExch = 0;
// 	quickSort (ary, 0, cMax_Ary_Size, &countExch);
	
// 	printf( "Sorted array:   " );
// 	for (int i = 0; i < cMax_Ary_Size; i++)
// 		printf( "%3d", ary[ i ] );
// 	printf( "\n" );
	
// 	printf("Total exchanges: %d\n", countExch);
// 	return 0;
// }	/* main */

// /*	================== quickSort =====================
// 	Array  data[left..right] sorted using recursion.
// 	   Pre    data is array to be sorted
// 	          left identifies first element in data
// 	          right identifies last element in data
// 	          count is exchange accumulator 
// 	   Post   array sorted
// */
// void quickSort (int *data, int left, int right, int* count)
// {
// //// inser code here //////**********************************************************
// 	if ((right - left) > 4){
//         medianLeft(data, left, right, count);
//         int pivot = data[left];
//         (*count)++;
//         int sortleft = left +1;
//         int sortright = right;
//         while (sortleft <= sortright)
//         {
//             while (data[sortleft] < pivot){
//                 sortleft++;
//             }
//             while(data[sortright] >= pivot){
//                 sortright--;
//             }
//             if (sortleft <= sortright){
//                 int hold = data[sortleft];
//                 data[sortleft]  = data[sortright];
//                 data[sortright] = hold;
//                 (*count) += 3;
//                 sortleft++;
//                 sortright--;
//             }
            
//         }
//             // Prepare for next phase 
// 	    data [left]         = data [sortleft - 1];
// 	    (*count)++;
// 	    data [sortleft - 1] = pivot;
// 	    (*count)++;
// 	    if  (left < sortright)
// 	       quickSort (data, left, sortright - 1, count);
// 	    if (sortleft < right)
// 	       quickSort (data, sortleft, right, count);
// 	} // if > minimum elements
// 	else
// 	   quickInsertion (data, left, right, count);
    
// }	// end quickSort

// /*	================== quickInsertion ================== 
// 	Sort list[first...last] using insertion sort. The 
// 	list is divided into sorted and unsorted lists. With 
// 	each pass, first element in the unsorted list is 
// 	inserted into the sorted list using a variation 
// 	of insertion sort modified for use in quick sort.
// 	   Pre      list must contain at least one element
// 	            first is index to first element 
// 	            last is index to last element
// 	            count holds the number of exchanges
// 	   Post     list rearranged.
// */
// void quickInsertion (int* sortData, int  first, 
//                      int  last,     int* count)
    
// {
// ///// insert code here /////*******************************************************************
// 	int pivot; //pivot
//     int i; //Index of smaller element

//     for (int j = first+1; j <= last; j++){
//         pivot = sortData[j];
//         i = j - 1;
        
//         while(i >= first && pivot < sortData[i]){
//             sortData[i+1] = sortData[i];
//             (*count)++;
//             i--;
//         }
//         sortData[i+1] = pivot;
//         (*count)++;
//     }
//     // return (i+1);
// }	// end quickInsertion

// /*	=================== medianLeft ==================== 
// 	Find median value in array, sortData[left..right], 
// 	and place it in the location sortData[left].
// 	   Pre    sortData is array of at least 3 elements
// 	          left and right are boundaries of the array
// 	   Post   median value  placed at sortData[left 
// 	          count holds the number of exchanges
// */
// void medianLeft (int* sortData, int  left,
//                  int  right,    int* count)
// {
// ///// insert code here //////***************************************************************
// 	int m = left + (right - left)/2;

//     if(sortData[left] > sortData[m]){
//         sortData[m] ^= sortData[left];
//         sortData[left] ^= sortData[m];
//         sortData[m] ^= sortData[left];
//         *count += 3;
//     }
//     if(sortData[left] > sortData[right]){
//         sortData[right] ^= sortData[left];
//         sortData[left] ^= sortData[right];
//         sortData[right] ^= sortData[left];
//         *count += 3;
//     }
//     if(sortData[right] < sortData[m]){
//         sortData[m] ^= sortData[right];
//         sortData[right] ^= sortData[m];
//         sortData[m] ^= sortData[right];
//         *count += 3;
//     }
//     sortData[m] ^= sortData[left];
//     sortData[left] ^= sortData[m];
//     sortData[m] ^= sortData[left];
//     *count += 3;
// }	// medianLeft

/*
Results:
Unsorted array:  89 72  3 15 21 57 61 44 19 98  5 77 39 59 61
Sorted array:     2  3  5 15 19 21 39 44 57 59 61 61 72 77 89
Total exchanges: 52
*/






// 12 FEB 2020
// https://github.com/CyberTrainingUSAF/08-C-Programming/blob/master/16_Data_Structures/Stack/Performance_labs.md

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define max 20
// int top = -1;
// char stack[max];

// int isempty(){
//     if(top <= -1){
//         return 1;
//     }else{
//         return 0;
//     }
// }

// int isfull(){
//     if (top >= max){
//         return 1;
//     }else{
//         return 0;
//     }
// }

// char peek(){
//     return stack[top];
// }

// char pop() {
//    int data;
	
//    if(!isempty()) {
//       data = stack[top];
//       top = top - 1;   
//       return data;
//    } else {
//       printf("Could not retrieve data, Stack is empty.\n");
//    }
// }

// char push(char data) {

//    if(!isfull()) {
//       top = top + 1;   
//       stack[top] = data;
//    } else {
//       printf("Could not insert data, Stack is full.\n");
//    }
// }

// // void reverse(char* text){

// // }

// int main(){
//     char *input = malloc(max*sizeof(*input));

//     printf("Enter some text:\n");
//     scanf("%19[^\n]s", input);

//     for (int i = 0; i < strlen(input); i++){
//         push(input[i]);
//     }

//     printf("Reverse: ");
//     for (int i = 0; i < strlen(input); i++){
        
//         printf("%c", pop());
//     }
//     printf("\n");
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // void reverse(char* text){

// // }

// int main(){
//     char *input = malloc(20*sizeof(*input));
//     int top;

//     printf("Enter some text:\n");
//     scanf("%19[^\n]s", input);

//     top = strlen(input) - 1;

//     printf("Reverse: ");
//     for (int i = top; i > -1; i--){
//         printf("%c", *(input + i));
//     }
//     printf("\n");
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// #define max 40
// int top = -1;
// char stack[max];

// int isempty(){
//     if(top <= -1){
//         return 1;
//     }else{
//         return 0;
//     }
// }

// int isfull(){
//     if (top >= max){
//         return 1;
//     }else{
//         return 0;
//     }
// }

// char peek(){
//     return stack[top];
// }

// char pop() {
//    int data;
	
//    if(!isempty()) {
//       data = stack[top];
//       top = top - 1;   
//       return data;
//    } else {
//       printf("Could not retrieve data, Stack is empty.\n");
//    }
// }

// char push(char data) {

//    if(!isfull()) {
//       top = top + 1;   
//       stack[top] = data;
//    } else {
//       printf("Could not insert data, Stack is full.\n");
//    }
// }

// // void reverse(char* text){

// // }

// int main(){
//     char *input = malloc(max*sizeof(*input));
//     char *test;
//     int icheck = 0;
//     int tcheck = 0;
//     int flag = 1;

//     printf("Enter some text:\n");
//     scanf("%39[^\n]s", input);

//     test = calloc(strlen(input), sizeof(*test));
//     for (int i = 0; i < strlen(input); i++){
//         push(input[i]);
//     }

//     printf("Reverse: ");
//     //store reversed string into test
//     for (int i = 0; i < strlen(input); i++){
//         *(test + i) = pop();
//     }
//     //increment if not alphabet
//     for (int i = 0, j = 0; i<strlen(input), j<strlen(test); i++, j++){
//         while (!isalpha(input[i])){
//             i++;
//         }
//         while (!isalpha(test[j])){
//             j++;
//         }
//         if (tolower(input[i]) != tolower(test[j])){
//             flag = 0;
//             printf("%s\n", test);
//             printf("Noooo...\n");
//             break;
//         }
//     }
//     if (flag == 1){
//         printf("%s\n", test);
//         printf("PALINDROME\n");
//     }

// }



// #include <stdio.h>


// #define SIZE 5
// int items[SIZE], front = -1, rear = -1;

// void enQueue(int value){
//     if(rear == SIZE-1)
//         printf("\nQueue is Full!!");
//     else {
//         if(front == -1)
//             front = 0;
//         rear++;
//         items[rear] = value;
//         printf("\nInserted -> %d", value);
//     }
// }
// void deQueue(){
//     if(front == -1)
//         printf("\nQueue is Empty!!");
//     else{
//         printf("\nDeleted : %d", items[front]);
//         front++;
//         if(front > rear)
//             front = rear = -1;
//     }
// }
// void display(){
//     if(rear == -1)
//         printf("\nQueue is Empty!!!");
//     else{
//         int i;
//         printf("\nQueue elements are:\n");
//         for(i=front; i<=rear; i++)
//             printf("%d\t",items[i]);
//     }
// }

// int main()
// {
//     //deQueue is not possible on empty queue
//     deQueue();
    
//     //enQueue 5 elements
//     enQueue(1);
//     enQueue(2);
//     enQueue(3);
//     enQueue(4);
//     enQueue(5);
    
//     //6th element can't be added to queue because queue is full
//     enQueue(6);
    
//     display();
    
//     //deQueue removes element entered first i.e. 1
//     deQueue();
    
//     //Now we have just 4 elements
//     display();
    
//     return 0;
    
// }




// #include <stdio.h>

// #define SIZE 5
// int items[SIZE], front = -1, rear = -1;

// void display(){
//     if(rear == -1)
//         printf(" ");
//     else{
//         int i;
//         for(i=rear; i>=front; i--)
//             printf("%d\t",items[i]);
//     }
//     printf("\n");
// }
// void enQueue(int value){
//     if(rear == SIZE-1)
//         printf("Queue is Full!!\n");
//     else {
//         if(front == -1)
//             front = 0;
//         rear++;
//         items[rear] = value;
//         display();
//         if(rear == SIZE-1)
//             printf("Queue is Full!!\n");
//     }
// }
// void deQueue(){
//     if(front == -1)
//         printf("Queue is Empty!!\n");
//     else{
//         front++;
//         if(front > rear)
//             front = rear = -1;
//         display();
//         if(front == -1)
//             printf("Queue is Empty!!\n");
//     }
// }

// int main()
// {
//     int myInt = 0;
    
//     //enQueue 5 elements
//     printf("Enter %d numbers\n", SIZE);
//     for (int i = 0; i < SIZE; i++){
//         printf("Enter a number to enqueue:\n");
//         scanf("%d", &myInt);
//         enQueue(myInt);
//     }
//     printf("\n");
//     //deQueue 5 elements
//     for (int i = 0; i < SIZE; i++){
//         printf("dequeue element %d:\n", i+1);
//         deQueue(myInt);
//     }
    
//     return 0;
    
// }



//https://github.com/CyberTrainingUSAF/08-C-Programming/blob/master/16_Data_Structures/Linked_list/01_Lesson.md
// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//    int data;
//    struct node *next;
// };

// struct node *head = NULL;
// struct node *current = NULL;

// //display the list
// void printList() {

//    struct node *ptr = head;

//    printf("\n[head] =>");
//    //start from the beginning
//    while(ptr != NULL) {        
//       printf(" %d =>",ptr->data);
//       ptr = ptr->next;
//    }

//    printf(" [null]\n");
// }

// //insert link at the first location
// void insert(int data) {
//    //create a link
//    struct node *link = (struct node*) malloc(sizeof(struct node));

//    //link->key = key;
//    link->data = data;

//    //point it to old first node
//    link->next = head;

//    //point first to new first node
//    head = link;
// }

// int main() {
//    insert(10);
//    insert(20);
//    insert(30);
//    insert(1);
//    insert(40);
//    insert(56); 

//    printList();
//    return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//   int data;
//   struct node *next;
// };
// void display(struct node* head)
// {
//       struct node *temp = head;
//       printf("\n\nList elements are - \n");
//       while(temp != NULL)
//       {
//    printf("%d --->",temp->data);
//    temp = temp->next;
//       }
// }
// void insertAtMiddle(struct node *head, int position, int value) {
//     struct node *temp = head;
//     struct node *newNode;
//     newNode = malloc(sizeof(struct node));
//     newNode->data = value;
    
//     int i;
//     for(i=2; i < position; i++) {
//         temp = temp->next;
//     }
//     newNode->next = temp->next;
//     temp->next = newNode;
// }
// void insertAtFront(struct node** headRef, int value) {
//     struct node* head = *headRef;
    
//     struct node *newNode;
//     newNode = malloc(sizeof(struct node));
//     newNode->data = value;
//     newNode->next = head;
//     head = newNode;
    
//     *headRef = head;
// }
// void insertAtEnd(struct node* head, int value){
//     struct node *newNode;
//     newNode = malloc(sizeof(struct node));
//     newNode->data = value;
//     newNode->next = NULL;
    
//     struct node *temp = head;
//     while(temp->next != NULL){
//       temp = temp->next;
//     }
//     temp->next = newNode;
// }
// void deleteFromFront(struct node** headRef){
//     struct node* head =  *headRef;
//     head = head->next;
//     *headRef = head;
// }
// void deleteFromEnd(struct node* head){
//     struct node* temp = head;
//     while(temp->next->next!=NULL){
//       temp = temp->next;
//     }
//     temp->next = NULL;
// }
// void deleteFromMiddle(struct node* head, int position){
//     struct node* temp = head;
//     int i;
//     for(i=2; i < position; i++) {
//         temp = temp->next;
//     }
//     temp->next = temp->next->next;
// }
// int main() {
//   /* Initialize nodes */
//   struct node *head;
//   struct node *one = NULL;
//   struct node *two = NULL;
//   struct node *three = NULL;
//   /* Allocate memory */
//   one = malloc(sizeof(struct node));
//   two = malloc(sizeof(struct node));
//   three = malloc(sizeof(struct node));
//   /* Assign data values */
//   one->data = 1;
//   two->data = 2;
//   three->data = 3;
//   /* Connect nodes */
//   one->next = two;
//   two->next = three;
//   three->next = NULL;
//   /* Save address of first node in head */
//   head = one;
//   display(head); // 1 --->2 --->3 --->     
//   insertAtFront(&head, 4);
//   display(head); // 4 --->1 --->2 --->3 --->     
//   deleteFromFront(&head);
//   display(head); // 1 --->2 --->3 ---> 
//   insertAtEnd(head, 5);
//   display(head); // 1 --->2 --->3 --->5 --->   
//   deleteFromEnd(head);
//   display(head); // 1 --->2 --->3 --->       
//   int position = 3;
//   insertAtMiddle(head, position, 10);
//   display(head); // 1 --->2 --->10 --->3 --->      
//   deleteFromMiddle(head, position);
//   display(head); // 1 --->2 --->3 --->     
// }



//https://github.com/CyberTrainingUSAF/08-C-Programming/blob/master/16_Data_Structures/Linked_list/Performance_Labs.md

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// #include<ctype.h>

// struct node
// {
//     char data;
//     struct node *next;
// };
// void display(struct node* head)
// {
//     struct node *temp = head;
//     printf("\n\nList elements are - \n");
//     while(temp)
//     {
//         printf("%c ->",temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }
// void insertAtFront(struct node** headRef, char value) {
//     // struct node* head = *headRef;
    
//     struct node *newNode = malloc(sizeof(struct node));
//     newNode->data = value;
//     newNode->next = *headRef;
//     *headRef = newNode;
    
//     // *headRef = head;
// }
// void insertAtEnd(struct node* head, char value){
//     struct node *newNode;
//     newNode = malloc(sizeof(struct node));
//     newNode->data = value;
//     newNode->next = NULL;

//     struct node *temp = head;
//     while(temp->next){
//       temp = temp->next;
//     }
//     temp->next = newNode;
// }
// void reverse(struct node* head, struct node** rhead){
//     struct node *temp = head;
//     //find total chars
//     // int count = 0;
//     while(temp->data)
//     {
//         insertAtFront(rhead, temp->data);
//         temp = temp->next;
//         // count++;
//     }

//     //finds the end and moves towards the start 
//     //and also stores into new list
//     // for (int i = count; i > 0; i--){
//     //     temp = head;
//     //     int j = 0;
//     //     while(j < i-1)
//     //     {
//     //         temp = temp->next;
//     //         j++;
//     //     }
//     //     insertAtFront(rhead, temp->data);
//     // }
//     printf("\n");
// }

// int llcmp(struct node* llist1, struct node* llist2){
//     struct node* temp1 = llist1;
//     struct node* temp2 = llist2;
//     int count = 0;

//     // temp2 = temp2->next;
//     while(temp1 != NULL && temp2 != NULL){
//         printf("%c %c", temp1->data, temp2->data);
//         printf("\n");
//         if (temp1->data != temp2->data){
//             count++;
//         }
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }
//     return count;
// }

// int main() {
//     struct node *head;
//     struct node *rhead;
//     char* myChars = "racecar";
//     // insertAtFront(&head, *myChars);
//     for (int i = 0; i < strlen(myChars); i++){
//         // insertAtEnd(head, *(myChars+i));
//         insertAtFront(&head, *(myChars+i));
//     }
//     // display(head);
//     reverse(head, &rhead);
//     // display(rhead);

//     printf("%d", llcmp(head, rhead));

//     if (llcmp(head, rhead) == 0){
//         printf("PALINDROME\n");
//     }else{
//         printf("Nooooo.....\n");
//     }
// }




//13 FEB 2020
// https://github.com/CyberTrainingUSAF/08-C-Programming/blob/master/16_Data_Structures/Linked_list/LinkListLab.md

// #include<stdio.h> 
// #include<stdlib.h> 
  
// /* Node Structure */
// struct Node 
// { 
//   int data; 
//   struct Node *next; 
//   struct Node *prev;
// }; 
// struct Node* head = NULL;
// struct Node* tail = NULL;
// struct Node* probe = NULL;
  
// struct Node* newNode(int x)
// {
//     struct Node* new = malloc(sizeof(struct Node));

//     new->data = x;
//     new->next = NULL;
//     new->prev = NULL;

//     return new;   
// }


//   //First Function
// /* displays a linked list in reverse manner */
// void Part1() 
// { 
//     probe = head;
//     //find tail
//     while (probe->next)
//     {
//         probe = probe->next;
//     }
//     //setting the tail
//     tail = probe;
//     //displays reverse
//     while (probe)
//     {
//         printf("%d->", probe->data);
//         probe = probe->prev;
//     }
// } 
//   //Second Function
// /* displays alternate nodes of a Linked List, first  
//   from head to end, and then from end to head. */
// void Part2(char direction) 
// { 
//     if (direction == 'f'){
//         probe = head;
//         while (probe){
//             printf("%d->", probe->data);
//             probe = probe->next;
//             if (probe->next != NULL) {
//                 probe = probe->next;
//             }
//             if(probe == tail){
//                 printf("%d->", probe->data);
//                 return Part2('b');
//             }
//         }
//     }else if(direction == 'b'){
//         while (probe){
//             printf("%d->", probe->data);
//             probe = probe->prev;
//             if (probe->prev != NULL) {
//                 probe = probe->prev;
//             }
//             if(probe == head){
//                 printf("%d", probe->data);
//                 return;
//             }
//         }
//     }
// } 
  
// // Functions to run Part1() and Part2() 
// /* Given a reference (pointer to pointer) to the head 
//   of a list and an int, push a new node on the front 
//   of the list. */
// void push(int new_data) 
// { 
//     // allocate node 
//     // put in the data  
//     struct Node* new_node = newNode(new_data); 
//     // new_node->data  = new_data; 
//     if(!head){
//         head = new_node;
//         return;
//     }

//     // link the old list off the new node 
//     new_node->next = head; 

//     // link the old list off the new node 
//     head->prev = new_node; 

//     // move the head to point to the new node 
//     head    = new_node; 
// } 
   
// // Driver program to test above functions 
// int main() 
// { 
//     // Begin with the empty list 
//     // struct Node* head = newNode(); 
//     // head = NULL;

//     /* Using push() to construct below list 
//     1->2->3->4->5  */
//     for (int i = 5; i != 0; i--){
//         push(i);
//     }

//     printf("Show work of Part1() for list 1->2->3->4->5 \n"); 
//     Part1(); 

//     printf("\nShow work of Part2() for list 1->2->3->4->5 \n");  
//     Part2('f'); 
            
//     return 0; 
// } 




#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>
  
/* Node Structure */
struct Node 
{ 
  char* data; 
  struct Node *next; 
  struct Node *prev;
}; 
struct Node* head = NULL;
struct Node* tail = NULL;
struct Node* probe = NULL;
int last = 0;
  
struct Node* newNode(char* x)
{
    struct Node* new = malloc(sizeof(struct Node));

    new->data = x;
    new->next = NULL;
    new->prev = NULL;

    return new;   
}

void prepend(char* new_data) 
{ 
    struct Node* new_node = newNode(new_data); 
    last++;
    if(!head){
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->next = head; 
    head->prev = new_node; 
    head    = new_node; 
} 

void display(char dir) 
{ 
    if (dir == 'b'){
        probe = tail;
        while (probe)
        {
            printf("%s\n", probe->data);
            probe = probe->prev;
        }
        
    }else{
        probe = head;
        while (probe)
        {
            printf("%s\n", probe->data);
            probe = probe->next;
        }
    }
    probe = head;
    printf("\n");
} 
//this will switch the data
void sort(){
    while (last >= 0){
        probe = head;
        while (probe->next)
        {
            if (strcmp(probe->data, probe->next->data) > 0){
                char *temp = malloc(sizeof(char) * strlen(probe->data));
                strcpy(temp, probe->data);
                probe->data = calloc(strlen(probe->next->data), sizeof(char));
                strcpy(probe->data, probe->next->data);
                probe->next->data = calloc(strlen(temp), sizeof(char));
                strcpy(probe->next->data, temp);
                free(temp);
            }
            // display('f');
            probe = probe->next;
        }
        last--;
    }
}
//this will switch the nodes
void sort2(){
    while (last >= 0){
        probe = head;
        while (probe->next->next)
        {
            if (strcmp(probe->data, probe->next->data) > 0){
                if(!probe->prev){
                    probe->next->prev = NULL;
                    probe->next = probe->next->next;
                    probe->prev = probe->next->prev;
                    probe->prev->next = probe;
                    probe->next->prev = probe;
                    head = probe->prev;
                }
                else if(!probe->next)
                {

                }
                else{
                    probe->next->prev = probe->prev;
                    probe->next->next->prev = probe;
                    probe->prev = probe->next;
                    probe->prev->prev->next = probe->prev;
                    probe->next = probe->next->next;
                    probe->prev->next = probe;
                    printf("%s", probe->data);
                }
            }
            probe = probe->next;
        }
        last--;
    }
}
   
// Driver program to test above functions 
int main() 
{ 
    prepend("Steven");
    prepend("Bob Billy");
    prepend("Samantha Sally");
    prepend("Samuel");
    prepend("Test test");

    display('f');
    // sort();
    // printf("%s", tail->data);
    sort2();
    display('f');

    //printing to file
    FILE *file_ptr = fopen("namesll.txt", "w");
    if(!file_ptr){
        printf("Error!");
        return 0;
    }
    probe = head;
    while (probe)
    {
        fprintf(file_ptr, "%s\n", probe->data);
        probe = probe->next;
    }
            
    return 0; 
} 
