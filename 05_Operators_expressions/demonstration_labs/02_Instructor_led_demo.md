# Group Discussion and Instructor Led Demos

1. You suspect that there are some errors in the next program. Can you find them?

```c
int main(void)
{
  int i = 1,
  float n;
  printf("Watch out! Here come a bunch of fractions!\n");
  while (i < 30)
    n = 1/i;
    printf(" %f", n);
  printf("That's all, folks!\n");
  return;
}
```
2. Here’s an alternative design for Program A. It appears to simplify the code by replacing the two scanf() statements in Program A with a single scanf() statement. What makes this design inferior to the original?

```c
//Program B
#include <stdio.h>
#define S_TO_M 60
int main(void)
{
  int sec, min, left;

  printf("This program converts seconds to minutes and ");
  printf("seconds.\n");
  printf("Just enter the number of seconds.\n");
  printf("Enter 0 to end the program.\n");
  while (sec > 0) {
    scanf("%d", &sec);
    min = sec/S_TO_M;
    left = sec % S_TO_M;
    printf("%d sec is %d min, %d sec. \n", sec, min, left);
    printf("Next input?\n");
    }
  printf("Bye!\n");
  return 0;
}
```
```c
//Program A
// min_sec.c -- converts seconds to minutes and seconds
#include <stdio.h>
#define SEC_PER_MIN 60            // seconds in a minute
int main(void)
{
    int sec, min, left;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");
    scanf("%d", &sec);            // read number of seconds
    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;  // truncated number of minutes
        left = sec % SEC_PER_MIN; // number of seconds left over
        printf("%d seconds is %d minutes, %d seconds.\n", sec,
                min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");

    return 0;
}
```
3. What will this program print?

```c
#include <stdio.h>
#define FORMAT "%s! C is cool!\n"
int main(void)
{
     int num = 10;

     printf(FORMAT,FORMAT);
     printf("%d\n", ++num);
     printf("%d\n", num++);
     printf("%d\n", num--);
     printf("%d\n", num);
     return 0;
}
```
4. What will the following program print?

```c
#include <stdio.h>
int main(void)
{
     char c1, c2;
     int diff;
     float num;

     c1 = 'S';
     c2 = 'O';
     diff = c1 - c2;
     num = diff;
     printf("%c%c%c:%d %3.2f\n", c1, c2, c1, diff, num);
     return 0;
}
```
5. What will this program print?
```c
#include <stdio.h>
#define TEN 10
int main(void)
{
     int n = 0;

     while (n++ < TEN)
          printf("%5d", n);
     printf("\n");
     return 0;
}
```
6.Modify the last program so that it prints the letters a through g instead.

7. If the following fragments were part of a complete program, what would they print?

a.
```
int x = 0;
while (++x < 3)
    printf("%4d", x);
```
b.
```
int x = 100;

while (x++ < 103)
    printf("%4d\n",x);
    printf("%4d\n",x);
```
c.
```
char ch = 's';

while (ch < 'w')
{
    printf("%c", ch);
    ch++;
}
printf("%c\n",ch);
```
8. What will the following program print?
```c
#define MESG "COMPUTER BYTES DOG"
#include <stdio.h>
int main(void)
{
   int n = 0;

   while ( n < 5 )
      printf("%s\n", MESG);
      n++;
   printf("That's all.\n");
   return 0;
}
```
9. Construct statements that do the following (or, in other terms, have the following side effects):
```
a. Increase the variable x by 10.

b. Increase the variable x by 1.

c. Assign twice the sum of a and b to c.

d. Assign a plus twice b to c.

13. Construct statements that do the following:

a. Decrease the variable x by 1.

b. Assigns to m the remainder of n divided by k.

c. Divide q by b minus a and assign the result to p.

d. Assign to x the result of dividing the sum of a and b by the product of c and d.

```








