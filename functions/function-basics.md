# Function Basics

## Definition

Functions are blocks of code that perform something productive. Sometimes functions take input and sometimes they return output. Functions are either defined in built-in libraries or can be written by programmers.

* What are some functions that take input?
* What are some functions that return output?
* What are some libraries that we've already drawn functions from?
* What programmer-written functions have we used up until now?

#### Examples

What is the: input, output, host library, number of parameters for each?

```
1. int main(void)
2. int getchar(void)
3. int putchar(int c)
4. int putc(int char, FILE *stream)
5. float calc_my_average(int total, int num)
6. int printf(const char *format, ...)
```

## Why, How, When, What

### Why Write a Function?

* **Reusability: **Once a function is defined, it can be used over and over again
* **Brevity: **Redundant algorithms broken out into functions will shorten code
* **Efficiency: **Changes to functions alleviate the need to make multiple modifications
* **Abstraction: **You don't have to know how a function works inside to use it
* **Testing: **Easier to test small parts of our program in isolation from the rest
* **Clean Memory: **Function variables only live as long as the function\*

> \*Not always the case depending on the declaration

### How to Write a Function

* **Purpose: **Define the single specific task the function will accomplish
* **Input: **Define the necessary information the function needs \(parameters\)
* **Local Variables: **Define the internal data variables needed to solve the problem
* **Algorithm: **Decide on the steps the function will use to accomplish the purpose \(code block\)
* **Output: **Determine the information provided for both success and failure \(return value\)

> ^^ Much of this information should be included in the comment block

### When to Write a Function

* Code that gets used more than once
* Hiding complexity
* Breaking large problems into small solutions
* An algorithm is more complicated to implement than to describe
* Code that makes someone else's life easier

### What Makes a Good Function?

* ... Perform a single, specific task
* ... Can be specified unambiguously
* ... Are preceded by precise comment blocks
* ... Are "no more than about 60 lines of code" \*
* ... Check the validity of parameters in the function \*

> \*"The power of Ten" - Rules for Developing Safety Critical Code" NASA/JPL Laboratory for Reliable Software

## Function Basics

Every C program contains the function **main\(\)** at a minimum. All other functions in a program are subroutines. It is best practice to create function "prototypes". These declare the functions return type, required parameters and optional parameters, as shown below. 

```c
<return type> <function name> (<arg type> <argument>, ...);    // Mock code

int scanf (const char *fmt, ...);    // Function Prototype
```

A function's **definition** establishes the function's body of statements, as shown below.

```c
...
/*
*  scanf(fmt, va_allist)
*/
int scanf(const char *fmt, ...)
{
    int count;
    va_list ap;
    
    va_start(ap, fmt);
    count = vfscanf(stdin, fmt, ap);
    va_end(ap);
    return(count);
}
...
```

### Return Values

* Return values should represent something meaningful
* Return values should also incorporate error condtions
* Even a seemingly one-way function like printf\(\) has a return value

```c
int printf(const char *format, ...);    // Function prototype

/*
* Upon successful return, printf returns the number of characters
* printed (excluding the null byte used to end output to strings).
*
* If an output error is encountered, a negative value is returned.
*/
```

> Good read:
>
> http://linux.die.net/man/3/printf

# Demonstration Lab

## Function "Newline Records"

```c
int remove_newline(char * buffer);
```

* **Return value** - number of newline characters changed
* **Parameters - **pointer to a null-terminated string
* **Purpose - **replace all newline characters with spaces
* **Requirements:**
  ```
  -Ensure buffer is not NULL
  -Return ERR_NULL_POINTER if buffer is NULL
  -Return ERR_NONE_FOUND if no newlines are found
  ```



