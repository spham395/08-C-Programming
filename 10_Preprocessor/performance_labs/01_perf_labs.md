#  Here are groups of one or more macros followed by a source code line that uses them. What code results in each case? Is it valid code? (Assume C variables have been declared.)
```
a.

Click here to view code image

#define FPM  5280     /* feet per mile */
dist = FPM * miles;

b.

#define FEET 4
#define POD FEET + FEET
plort = FEET * POD;

c.

#define SIX = 6;
nex = SIX;

d.

#define NEW(X) X + 5
y = NEW(y);
berg = NEW(berg) * lob;
est = NEW(berg) / NEW(y);
nilp = lob * NEW(-berg);
```
##  Fix the definition in part d of question 1 to make it more reliable.

##  Define a macro function that returns the minimum of two values.

## Define the EVEN_GT(X,Y) macro, which returns 1 if X is even and also greater than Y.

## Define a macro function that prints the representations and the values of two integer expressions. For example, it might print
```
3+4 is 7 and 4*12 is 48
```
if its arguments are 3+4 and 4*12.

## Create #define statements to accomplish the following goals:
```
a. Create a named constant of value 25.

b. Have SPACE represent the space character.

c. Have PS() represent printing the space character.

d. Have BIG(X) represent adding 3 to X.

e. Have SUMSQ(X,Y) represent the sums of the squares of X and Y.
```
## Define a macro that prints the name, value, and address of an int variable in the following format:

```

name: fop;  value: 23;  address: ff464016
```
## Suppose you have a block of code you want to skip over temporarily while testing a program. How can you do so without actually removing the code from the file?

## Show a code fragment that prints out the date of preprocessing if the macro PR_DATE is defined.

## The discussion of inline functions shows three different versions of a square() function. How do the three differ from one another in terms of behavior?

## Create a macro using a generic selection expression that evaluates to the string "boolean" if the macro argument is type _Bool, and evaluates to "not boolean" otherwise.

## What’s wrong with this program?
```c
#include <stdio.h>
int main(int argc, char argv[])
{
    printf("The square root of %f is %f\n", argv[1],
           sqrt(argv[1]) );
}
```
## Suppose scores is an array of 1000 int values that you want to sort into descending order. And suppose you are using qsort() and a comparison function called comp().

a. What is a suitable call to qsort()?

b. What is a suitable definition for comp()?

14. Suppose data1 is an array of 100 double values and data2 is an array of 300 double values.

a. Write a memcpy() function call that copies the first 100 elements of data2 to data1.

b. Write a memcpy() function call that copies the last 100 elements of data2 to data1.

# Programming Exercises
 ## Start developing a header file of preprocessor definitions that you want to use.

## (Volume of a Sphere)
Write a program that defines a macro with one argument to compute the volume of a sphere. The program should compute the volume for spheres of radius 1 to 10 and print the results in tabular format. The formula for the volume of a sphere is
```

( 4.0 / 3 ) *p π * r3
```
where π is 3.14159.

## (Adding Two Numbers) 
Write a program that defines macro SUM with two arguments, x and y, and use SUM to produce the following output:
![image](https://user-images.githubusercontent.com/47218880/66595240-29ab7100-eb60-11e9-83be-b4c45e8b498d.png)

##  (Smallest of Two Numbers) 
 Write a program that defines and uses macro MINIMUM2 to determine the smallest of two numeric values. Input the values from the keyboard.

## (Smallest of Three Numbers)
Write a program that defines and uses macro MINIMUM3 to determine the smallest of three numeric values. Macro MINIMUM3 should use macro MINIMUM2 defined in the previous exercise  to determine the smallest number. Input the values from the keyboard.

## (Printing a String) 
Write a program that defines and uses macro PRINT to print a string value.

##  (Printing an Array)
Write a program that defines and uses macro PRINTARRAY to print an array of integers. The macro should receive the array and the number of elements in the array as arguments.


