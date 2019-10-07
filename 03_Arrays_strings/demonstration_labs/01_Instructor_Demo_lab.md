# Guided Program Explanation

## Write a program to display array elements with their addresses.
```c
  int main()
{
   int num[5]={1,2,3,2,5};
   clrscr();
   printf(“\n num[0] = %d Address : %u”,num[0],&num[0]);
   printf(“\n num[1] = %d Address : %u”,num[1],&num[1]);
   printf(“\n num[2] = %d Address : %u”,num[2],&num[2]);
   printf(“\n num[3] = %d Address : %u”,num[3],&num[3]);
   printf(“\n num[4] = %d Address : %u”,num[4],&num[4]);
   return 0;
}
```
OUTPUT:
```
num[0] = 1 Address : 65516
num[1] = 2 Address : 65518
num[2] = 3 Address : 65520
num[3] = 2 Address : 65522
num[4] = 5 Address : 65524
```
## Explanation:

In the output of the program, elements and their addresses are displayed. Recall that integer requires two bytes in memory. Hence, the memory locations displayed at the output have a difference of two. From the above program, it is clear that array elements are stored in contigious memory locations. Figure below shows the memory location and values stored.

![image](https://user-images.githubusercontent.com/47218880/66325085-40499200-e8ec-11e9-98b3-b992415d1c8e.png)

Once the array is declared, its lowest boundary cannot be changed but upper boundary can be expanded. 
The array name itself is a constant pointer and we cannot modify it. Therefore, the lowest boundary of 
an array cannot be expanded. In other words, even if the boundary exceeds than specified, nothing happens. 
The compiler throws no errors.
The reader can execute the following program for verifying the above concept.

## Write a program to exceed the upper boundary of an array and see the element after expansion of an array.
```c 
  void main()
{
   int num[5]={1,2,3,2,5};
   num[5]=6;
   clrscr();
   printf (“num[5]=%d”,num[5]);
   getche();
}
```
OUTPUT:
```
Num[5]=6
```
Explanation:

In the above program, array num[5] is declared with array size 5 and it is initialized with 5 elements. In the next statement, 6th element is also initialized and displayed. Hence, we can say that upper boundary of an array can be expanded.

## What is happening in this program? Working with an Array
```c
#include <stdio.h>

int main (void)
{
     int  values[10];
     int  index;

     values[0] = 197;
     values[2] = -100;
     values[5] = 350;
     values[3] = values[0] + values[5];
     values[9] =
     values[5] / 10;
     --values[2];

     for ( index = 0;  index < 10;  ++index )
          printf ("values[%i] = %i\n", index, values[index]);

     return 0;
}
```
Output
```
values[0] = 197
values[1] = -2
values[2] = -101
values[3] = 547
values[4] = 4200224
values[5] = 350
values[6] = 4200326
values[7] = 4200224
values[8] = 8600872
values[9] = 35
```
## Demonstrating an Array of Counters
```c
#include <stdio.h>

int main (void)
{
     int  ratingCounters[11], i, response;

     for ( i = 1;  i <= 10;  ++i )
          ratingCounters[i] = 0;

     printf ("Enter your responses\n");

     for ( i = 1;  i <= 20;  ++i ) {
          scanf ("%i", &response);

          if ( response < 1 || response > 10 )
               printf ("Bad response: %i\n", response);
          else
               ++ratingCounters[response];
     }

     printf ("\n\nRating   Number of Responses\n");
     printf ("------ -------------------\n");

     for ( i = 1;  i <= 10;  ++i )
          printf ("%4i%14i\n", i, ratingCounters[i]);

     return 0;
}
```
## output
```
Enter your responses
6
5
8
3
9
6
5
7
15
Bad response: 15
5
5
1
7
4
10
5
5
6
8
9


Rating   Number of Responses
------   -------------------
1                1
2                0
3                1
4                1
5                6
6                3
7                2
8                2
9                2
10               1

```
## Generating Fibonacci Numbers

// Program to generate the first 15 Fibonacci numbers
```c
#include <stdio.h>

int main (void)
{
     int  Fibonacci[15], i;

     Fibonacci[0] = 0;    // by definition
     Fibonacci[1] = 1;    // ditto

     for ( i = 2;  i < 15;  ++i )
          Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

     for ( i = 0;  i < 15;  ++i )
          printf ("%i\n", Fibonacci[i]);

     return 0;
}
```
Output
```
0
1
1
2
3
5
8
13
21
34
55
89
144
233
377
```



