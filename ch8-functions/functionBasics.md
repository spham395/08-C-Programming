### basics of a function

every c program contains the function main() at a minimum

all other functions in a program are subroutines

a function's "prototype" is a declaration that establishes the function's"
    1. return type
    2. required parameters
    3. optional parameters
```c
<return type> <function name> (<arg type> <argument>, ...);

//from left to right respectively

int scanf (const char *fmt, ...);       //function prototype

a functions "definition" establishes the functions body of statements
```c
...
/*
* scanf(fmt, va_alist)
*/
int scanf (const char *fmt, ...)
{
    int count;
    va_list ap;

    va_start (ap, fmt);
    count = vfscanf (stdin, fmt, ap);
    va_end (ap);
    return (count);
}
...
```

return values should represent something meaningful

return values should also incorporate error conditions

even a seemingly one-way function like printf() has a return value

```c
int printf(const char *format, ...);            //function prototype

/*
* upon successful return, printf returns the number of characters printed (excluding the null byte used to end output to strings).
* if an output error is encountered, a negative value is returned
*/
```
