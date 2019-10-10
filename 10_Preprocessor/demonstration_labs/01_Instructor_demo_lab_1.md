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

