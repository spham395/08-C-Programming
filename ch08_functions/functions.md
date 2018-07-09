# functions

NOTE: shell code will no longer be used as the focus now will be on external functions written in STUB code. Shell code will be written by the student.
```c
///SHELL code///
void my_function(void);                 //function prototype

int main(void)
{
/* main() presumably calls my_function() */
    [...]                              //students write main()
}

///STUB code///
void my_function(void)                  //function definition
{
    printf("yipee-kai-yay! \n");        //does something
    return;                             //ends
}
```

>functions:
    
        blocks of code that perform something productive
        sometimes functions take input
        sometimes functions return output
        many functions are defined in built-in libraries
        functions may be written by programmers
        examples:
            1. int main(void)
            2. int getchar(void)
            3. int putchar(void)
            4. int putc(int char, FILE *stream)
            5. float calc_my_average(int total, int num)
            6. int printf(const char *format, ...)

>why write a function?

    reusability- once a function is defined, it can be used over and over again

    brevity- redundant algoritms broken out into functions will shorten code

    efficiency- changes to functions alleviate the need to make multiple modifications

    abstraction- you dont have to know how a function works inside to use it

    testing- easier to test small parts of our program in isolation from the rest

    clean memory- function variables only live as long as the function
    (not always the case, depending on the decalaration)

>how to write a function?
1.  purpose- define the single specific task the function will accomplish
2.  input- define the necessary information the function needs (parameters)
3.  local variables- define the internal data variables needed to solve the problem
4.  algorithm- decide on the steps the function will use to accomplish its purpose (code block)
5.  output- determine the information provided for both success and failure (return value)

>when to write a function?
1.  code that gets used more than once
2.  hiding complexity
3.  breaking large problems into small solutions
4.  an algorithm is more complicated to implement than to describe
5.  code that makes someone else's life easier

>what makes a GOOD function?
1.  performs a single, specific task
2.  can be specified unambiguously
3.  are preceded by precise comment blocks
4.  are "no more that about 60 lines of code"
5.  check the validity of parameters in the functions

**4 and 5 are taken from the practices of NASA's JPL*