# declarations

programming requires two things: data (variables) and instructions (code). variables are the building blocks and code is the blueprint with "how-to" instructions.

>***declaring variables***: 
a declaration determines the interpretation and properties of one or more identifiers. a declaration that allocates storage space for an object or a function is a **definition**. multiple variables of the same data type can be declared in a single statement. declaration alone does not 'implicitly' zeroize a variable. that comes later with initialization.

*NOTE: all variables must be declared before use*! 

### declaration example

```c
int main(void)
{
    /********** VARIABLE DECLARATION **********/
    /* Syntax: <DATA TYPE> <VARIABLE NAME>; */

    int lowerLimit;    // lowest y value for graph
    int upperLimit;    // highest y value for graph
    float x, y;        // graphing function variables

    // used to hold a person's individual initials
    char firstInitial, middleInitial, lastInitial;
    double pi;        // stores the constant "pi"
    return 0;
}
```

#### *Initialization*

it is very important that you initialize a variable after declaring it. this simply means setting it some sort of value. Otherwise your IDE could do it for you. or worse, you'll end up with garbage. think of it this way. be declaring a variable, you have allocated a chunk of memory for those variables. who knows what used to be there. your values could be valid or garbage that has no meaning to you.

```c
int main(void)
{
    /******** VARIABLE INITIALIZATION ********/

    /* initialization syntax...
    <DATA TYPE> <VARIABLE NAME> = <INITAL VALUE>; */

    int lowerLimit = -10;    // lowest y value for grahp
    int upperLimit = 10;     // highest y value for graph
    float x = 1.0, y = 2.1;  // graphing variables 

    // used to hold a person's individual initials
    char firstInit = 'J', middleInit = 'E', lastInit = 'H';

    double pi = 3.14159265359;    // stores the constant "pi"
    finalResult = 0;    // placeholder 0. to be changed later.

    return 0;
}
```
