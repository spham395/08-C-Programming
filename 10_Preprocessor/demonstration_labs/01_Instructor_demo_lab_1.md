# Program examples

## Introducing the #define Statement

```c
#include <stdio.h>

#define   YES     1
#define   NO      0

// Function to determine if an integer is even

int  isEven (int  number)
{
    int  answer;

    if ( number % 2 == 0 )
        answer = YES;
    else
        answer = NO;

    return answer;
}

int main (void)
{
    int  isEven (int  number);

    if ( isEven (17) == YES )
        printf ("yes ");
    else
        printf ("no ");

    if ( isEven (20) == YES )
        printf ("yes\n");
    else
        printf ("no\n");

    return 0;
}
```
 Output
```
no yes
```
## More on Working with Defines
```c
/* Function to calculate the area and circumference of a
   circle, and the volume of a sphere of a given radius  */

#include <stdio.h>

#define  PI        3.141592654

double  area (double  r)
{
    return PI * r * r;
}

double  circumference (double  r)
{
    return 2.0 * PI * r;
}

double  volume (double r)
{
    return 4.0 / 3.0  *  PI * r * r * r;
}

int main (void)
{
    double  area (double  r), circumference (double  r),
            volume (double r);

    printf ("radius = 1: %.4f   %.4f   %.4f\n",
          area(1.0), circumference(1.0), volume(1.0));

    printf ("radius = 4.98: %.4f   %.4f   %.4f\n",
          area(4.98), circumference(4.98), volume(4.98));

    return 0;
}
```
Output
```
radius = 1: 3.1416   6.2832   4.1888
radius = 4.98: 77.9128   31.2903   517.3403
```
## Using the #include Statement
```c
/* Program to illustrate the use of the #include statement
   Note: This program assumes that definitions are
   set up in a file called metric.h             */

#include <stdio.h>
#include "metric.h"

int main (void)
{
    float  liters, gallons;

    printf ("*** Liters to Gallons ***\n\n");
    printf ("Enter the number of liters: ");
    scanf ("%f", &liters);

    gallons = liters * QUARTS_PER_LITER / 4.0;
    printf ("%g liters = %g gallons\n", liters, gallons);

    return 0;
}
```
Output
```
*** Liters to Gallons ***

Enter the number of liters: 55.75
55.75 liters = 14.73 gallons.
```
## Locate the system header files <stdio.h>, <limits.h>, and <float.h> on your system (on Unix systems, look inside the /usr/include directory). Examine the files to see what’s in them.

 ## Define a macro MIN that gives the minimum of two values. Then write a program to test the macro definition.

## Define a macro MAX3 that gives the maximum of three values. Write a program to test the definition.

## Write a macro SHIFT to perform the identical purpose as the shift function of this program.

### Implementing a Shift Function
```c
// Function to shift an unsigned int left if
// the count is positive, and right if negative

#include <stdio.h>

unsigned int  shift (unsigned int  value, int  n)
{
    if ( n > 0 )     // left shift
        value <<= n;
    else             // right shift
        value >>= -n;

    return value;
}

int main (void)
{
    unsigned int  w1 = 0177777u, w2 = 0444u;
    unsigned int  shift (unsigned int  value, int  n);

    printf ("%o\t%o\n", shift (w1, 5), w1 << 5);
    printf ("%o\t%o\n", shift (w1, -6), w1 >> 6);
    printf ("%o\t%o\n", shift (w2, 0), w2 >> 0);
    printf ("%o\n", shift (shift (w1, -3), 3));

    return 0;
}
```
Output
```
7777740 7777740
1777   1777
444    444
177770
```
    
## Write a macro IS_UPPER_CASE that gives a nonzero value if a character is an uppercase letter.

## Write a macro IS_ALPHABETIC that gives a nonzero value if a character is an alphabetic character. Have the macro use the IS_LOWER_CASE macro defined in the chapter text and the IS_UPPER_CASE macro defined in the previous exercise.

## Write a macro IS_DIGIT that gives a nonzero value if a character is a digit '0' through '9'. Use this macro in the definition of another macro IS_SPECIAL, which gives a nonzero result if a character is a special character; that is, not alphabetic and not a digit. Be certain to use the IS_ALPHABETIC macro developed in the previous exercise.

## Write a macro ABSOLUTE_VALUE that computes the absolute value of its argument. Make certain that an expression such as
```
ABSOLUTE_VALUE (x + delta)
```
is properly evaluated by the macro.

##  Test the system library functions that are equivalent to the macros you developed in the preceding exercises. The library functions are called isupper, isalpha, and isdigit. You need to include the system header file <ctype.h> in your program in order to use them.



