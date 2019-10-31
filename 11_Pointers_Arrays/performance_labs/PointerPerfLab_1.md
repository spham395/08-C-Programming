#Programming Projects

## Write a program in C to add two numbers using pointers. 
```
Test Data :
Input the first number : 5
Input the second number : 6
```
Expected Output :
```
The sum of the entered numbers is : 11 
```
##  Write a program in C to add numbers using call by reference. 
``` 
Test Data :
Input the first number : 5
Input the second number : 6
```
Expected Output :
```
 The sum of 5 and 6  is 11 
```
##  Write a program in C to find the maximum number between two numbers using a pointer. 
``` 
Test Data :
Input the first number : 5
Input the second number : 6
```
Expected Output :
```
6 is the maximum number.  
```


## Modify the rain program below so that it does the calculations using pointers instead of subscripts. (You still have to declare and initialize the array.)

```c
/* rain.c  -- finds yearly totals, yearly average, and monthly
                 average for several years of rainfall data */
#include <stdio.h>
#define MONTHS 12    // number of months in a year
#define YEARS   5    // number of years of data
int main(void)
{
 // initializing rainfall data for 2010 - 2014
    const float rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    int year, month;
    float subtot, total;

    printf(" YEAR    RAINFALL  (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++)
    {             // for each year, sum rainfall for each month
        for (month = 0, subtot = 0; month < MONTHS; month++)
            subtot += rain[year][month];
        printf("%5d %15.1f\n", 2010 + year, subtot);
        total += subtot; // total for all years
     }
    printf("\nThe yearly average is %.1f inches.\n\n",
            total/YEARS);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf(" Nov  Dec\n");

    for (month = 0; month < MONTHS; month++)
    {             // for each month, sum rainfall over years
        for (year = 0, subtot =0; year < YEARS; year++)
            subtot += rain[year][month];
        printf("%4.1f ", subtot/YEARS);
    }
    printf("\n");

    return 0;
}
```
## Write a function that returns the largest value stored in an array-of-int. Test the function in a simple program.

##  Write a program in C to compute the sum of all elements in an array using pointers. Go to the editor
Test Data :
```
Input the number of elements to store in the array (max 10) : 5
Input 5 number of elements in the array :
element - 1 : 2
element - 2 : 3
element - 3 : 4
element - 4 : 5
element - 5 : 6
```
Expected Output :
```
 The sum of array is : 20 

```

##  Write a program in C to print a string in reverse using a pointer.
Test Data :
```
Input a string : cybertrainingusaf
```
Expected Output :
```
 Pointer : Print a string in reverse order :                                                                  
------------------------------------------------                                                              
 Input a string : cybertrainingusaf                                                                                  
 Reverse of the string is : fasugniniartrebyc
```
