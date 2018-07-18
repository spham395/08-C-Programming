# Compilation Process

The Compilation Process roughly follows this order:

1. preprocessing
2. compiling
3. assembling
4. linking

*Note: Different sources enumerate the compilation process in different ways. Descriptions of the process here are considered non-exhaustive as some compilers may not follow this model.*

![](/assets/compilationProcess.png)

### Preprocessing: translates the source code prior to compilation.

-cleans up backslashes

```c
printf("Hello \ World!\n");    //is converted to    printf("Hello World!\n");
```

Each comment is replaced by one space character.

```c
int /*commenting...blah blah blah*/ someIntergerVariable = 0;

//converted to

int someIntergerVariable = 0;
```

Preprocessing further modifies a source code file by converting directives, constants, and macros

A **directive** sends commands to the preprocessor that always begin with a POUND sign (#).

```c
//Directive examples

#include <stdio.h>                    //copies in the entire header file


#ifdef __cplusplus                    //if this constant is defined...
    extern "C" {                      //...include this code.
#endif                                //That is all.


#if DLEVEL > 5                        //execute the following code if DLEVEL is greater than 5.
    <code>
#endif
```

A **constant** defines an identifier and its associated value for an entire source code file.

```c
//Constant examples

#define BUFF_SIZE 512                    //512 replaces BUFF_SIZE
char string1[BUFF_SIZE] = {0};           //this statement is changed...
char string1[512] = {0};                 //...to this by the preprocessor

#define FALSE 0                          //0 replaces FALSE
(FALSE == num) ? num-- : num++;          //this statement is changed...
(0 == num) ? num-- : num++;              //...to this by the preprocessor
```

**Macro** defines an identifier and its associated code for an entire source code file.

```c
//Macro Examples

#define AREA(r) (3.1415*(r)*(r))        //defines AREA(r) as inline
AREA(7+2);                              //this statement is changed...
(3.1415*(7+2)*(7+2));                   //...to this by the preprocessor

#define ADD_FIVE(x) ((x)+5)             //defines ADD_FIVE(x) inline
ADD_FIVE(9);                            //this statement is changed...
((9)+5);                                //...to this by the preprocessor

#define SWAP(a, b) a^=b; b^=a; a^=b;    //defines SWAP(a,b) as inline
SWAP(num1,num2);                        //this statement is changed...
num1^=num2; num2^=num1; num1^=num2;     //...to this by the preprocessor
```

**Compiling** is done when the file is put into the appropriate assembly code for the given architecture (.asm or .s)

    * Lexical analysis breaks the source code into non divisible tokens such as:
        * keyword, identifier, constant, string literal, or symbol.

    * Syntax analysis concatenates (links things together) extracted tokens into chains of tokens and verifies that the order makes sense

    * Semantic analysis checks whether the syntactically correct statements actually make sense

Code generation is normally handled through assembly but can be machine code as well.

* Assembling converts the assembly into object files

Assembly language mnemonics replaced by machine opcodes (instructions) that can be read by the CPU

An object file is comprised of machine code (.obj or .o)

* Linking resolves references to external objects and functions, and generates the OS-appropriate executable file from one or more object files.

External objects or functions not defined in any of the translation units, are taken from either the standard or external libraries

External objects and functions must not be defined more than once in a program.

![](/assets/import.png)

....

....

...

....

...

...working

