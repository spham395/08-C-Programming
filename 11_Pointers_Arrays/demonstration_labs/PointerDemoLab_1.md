
# Program Illustrating Pointers

```c

#include <stdio.h>

int main (void)
{
     int   count = 10, x;
     int   *int_pointer;

     int_pointer = &count;
     x = *int_pointer;

     printf ("count = %i, x = %i\n", count, x);

     return 0;
}
```
Program  Output
```

count = 10, x = 10
```


The Address (&) Operator The &, or address operator, is a unary operator that returns the address of its operand.
For example, assuming the definitions
```c
int y = 5; int *yPtr;
```
the statement
```c
yPtr = &y;
```
![image](https://user-images.githubusercontent.com/47218880/67690237-8e413b00-f96a-11e9-9c9a-8ff034fe180d.png)


Pointer Representation in Memory Figure below shows the representation of the preceding
pointer in memory, assuming that integer variable y is stored at location 600000, and pointer variable yPtr is stored at loca-tion 500000. 
The operand of the address operator must be a variable; the address operator cannot be applied to constants or expressions.

![image](https://user-images.githubusercontent.com/47218880/67690380-c779ab00-f96a-11e9-88e1-2bd1db467d55.png)

