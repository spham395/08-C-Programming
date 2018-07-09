# data types

a variable's type determines quite a bit in C.

    how much memory it occupies
    how the bit pattern stored is interpreted
    specifies how a function's return value is to be interpreted

C "types" can be either predefined or derived.

>predefined types:

    basic types
      - integer types
      - floating types
    void

>data types:

| **keyword** | **description** | **example values** |
| :--- | :--- | :--- |
| **char** | one character in the local character set, represents characters as a decimal value stored as a small integer. | 'A', '$', 42, ( * ) |
| **int** | an integer | -31337, 0, 8338 |
| **float** | single-precision floating point (6 decimal places) | 3.14, 2.71828, 42.0 |
| **double** | double-precision floating point (15 decimal places) | 3.14159265359, 2.7182818284, 42.0 |
| **void** | no value is available |  |

### demonstration lab 1

```c
#include <stdio.h>

int main(void)
{
    int integer = 1;
    float singlePrecision = 2.2;
    double doublePrecision = 3.3;
    char singleChar = '$';
    char singleChar2 = 33;

    printf("your integer is %d \n", integer);
    printf("your float is %f \n", singlePrecision);
    printf("your double is %lf \n", doublePrecision);
    printf("your first char is %c \n", singleChar);
    printf("your second char is %c \n", singleChar2);  

    return 0;
}
```

review of the above code

  - Types used?
  - What is the number 33 translated to ASCII?

concepts to come later:
    
  - preprocessor directives
  - variable declaration
  - variable initialization
  - output
  - printf format specifiers



