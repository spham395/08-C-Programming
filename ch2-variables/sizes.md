# sizes - why does size matter?

size sets limits on the information that can be stored. Computers have a finite amount of free memory. thus, data type sizes vary depending on hardware and software environments. so it's important to keep the above in mind when allocating blocks of memory. it's **NEVER **safe to presume the size of any data type.

>***C - size champion:***
C is often used because of size restrictions. C gives the programmer a ton of control of the memory. this is both a good thing and often a bad thing. it's easy to create memory leaks and such if not careful. but on the other side of the coin, this gives the programmer the power to program on devices where minimal memory usage may be necessary. for example, embedded programming and gaming \(Especially with C++\).

YOU take control. YOU allocate, deallocate memory. YOU manage buffers. YOU know the performance impact of YOUR actions. etc

>***operator - sizeof():***
used to determine the amount of memory taken up. never guess... let the system tell us.

demonstration lab 1-2

```c
#include <stdio.h>

int main(void)
{
    int integer = 1;
    float singlePrecision = 2.2;
    double doublePrecision = 3.3;
    char singleChar = '$';
    char singleChar2 = 33;

    printf("size of int is %d \n", sizeof(integer));
    printf("size of float is %d \n", sizeof(singlePrecision));
    printf("size of double is %d \n", sizeof(doublePrecision));
    printf("size of char 1 is %d \n", sizeof(singleChar));
    printf("size of char 2 is %d \n", sizeof(singleChar2));

    return 0;
}
```

* is there a size difference between singleChar and singleChar2?
* why did we change all format specifiers to %d?



