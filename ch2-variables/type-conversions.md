# type conversions

type conversion is possible in C. type conversion simply yields a value in a new data type. The original value is preserved if the new type is capable of representing it. for example, floating point numbers may be rounded on conversion from double to float. there are two methods to convert type:

    implicit - i.e., performed by the compiler automatically
    explicit - through the use of the cast operator

best practice is to use the cast operator when type conversion is necessary. always try to prevent the compiler from guessing. a confused compiler is a bad compiler.

#### syntax:

```c
// pseudo example
(data_type) expression // not everything can be type cast

// stub example
(double) 15 / 3 //result is int yet 'coerced as double

// full example
# include <stdio.h>

int main(void)
{
    int grade1 = 90, grade 2 = 100;    // student grades
    double gradeAvg = 0;               // student average
    gradeAvg = (double) ((grade1 + grade2) / 2);
    return 0;
}
```

>***what does cast do?***
cast will ignore any unneeded or additional information, but will never add information to a variable. for instance, a float may obtain extra ending zeros if converted to a double and a double may get some of it's information cutoff \(ignored\) if converted to a float. converting based on the chart below will ensure additional information is never cut off.

![](/assets/usual_arithmetic_conversion.png)

demonstration lab 3

    declare and initialize variables of data types: 

    - int
    - float
    - double
    - char

    type cast and print the following:

    - int -&gt; float
    - int -&gt; char
    - float -&gt; double
    - double -&gt; float
    - char -&gt; int
    - 63 -&gt; char

    **NOTE: initialize int to a value between 32 and 126**



