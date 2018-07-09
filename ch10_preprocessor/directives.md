### **\#include**

```c
#include <header file>        //standard header file

#include "header file"        //local header file
```

this preprocessing directive allows the program to use source code from another file (ie. libraries)

\#include tells the preprocessor to insert the entire filename into the program

common convention places \#includes at the beginning of the source file

header filenames can include relative or absolute paths

include files may be nested but this feature can cause problems

_**--caution--**_

avoid duplication of header inclusion with header guards \(ie. \#ifndef\)

avoid duplication of macros \(ie. \#ifndef\)

* defining a constant twice is not fatal

* defining a data structure or union twice is fatal and must be avoided

```c
#include <stdio.h>

#include "my_math.h"

#include "my_geometry.h"


int main(void)
{
    printf("%.5f\n", PI);                    //3.14159
    return 0;
}


//my_source.c (source file)
```

```c
#define PI 3.14159

//my_math.h (header file)
```

```c
#define PI 3.14159265359

//my_geometry.h (header file)
```

^^notice here, how we have a duplication of macros in headers^^

_note: the code may still compile even though the header files are poorly written. Later preprocessing directives \(\#ifndef\) will detail how to avoid this problem. In this case the preprocessor has two references to macro constants \(PI\). The compiler used in preparation for this bloc of instruction prints the macro constant from my\_geometry.h instead of my\_math.h. Other compilers may perform differently. Instead of attempting to reverse engineer why, this objective will address methods to avoid this lack of preprocessor insight \(\#ifndef\)._

assembling a header into an object file then linking to source code:

![](/assets/import2.png)

### \#define

```c
#define name [(parameter_list)] [replacement_text]
```

defines constants and macros

preprocessor replaces all occurrences of:

```c
name [(parameter_list)]        //is replaced

replacement_text               //replaces the above
```

**--caution--**

1. substitutions are not made within quoted strings
   1. ```c
      //BAD constant EXAMPLE

      #define UNIT 90COS

      int main(void)
      {
          char squadron[] = {"UNIT"};
          puts(squadron);
    
          return 0;
      }

      //BAD constant OUTPUT

      UNIT

      //GOOD constant EXAMPLE

      #define UNIT "90COS"

      int main(void)
      {
          char squadron[] = {UNIT};
          puts(squadron);
    
          return 0;
      }

      //GOOD constant OUTPUT

      **intentionally left blank**
      ```
2. partial substitutions are not made
   1. ```c

      ```
3. lack of explicit parentheses may result in unexpected behavior
4. surround macros that contain complete statements with curly braces \({ }\)
5. consider using CONST declaration instead of \#define



