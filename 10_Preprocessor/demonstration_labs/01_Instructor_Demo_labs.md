# Guided Exercises 

## Fill in the blanks in each of the following:

```
Every preprocessor directive must begin with_________.

The conditional compilation construct may be extended to test for multiple cases by using the_______and_____________ directives.

The_________directive creates macros and symbolic constants.

Only_________characters may appear before a preprocessor directive on a line.

The____________directive discards symbolic constant and macro names.

The___________and____________directives are provided as shorthand notation for #if defined(name) and #if !defined(name).

__________enables you to control the execution of preprocessor directives and the compilation of program code.

The___________-macro prints a message and terminates program execution if the value of the expression the macro evaluates is 0.

The___________directive inserts a file in another file.

The____________-operator concatenates its two arguments.

The____________operator converts its operand to a string.

The character___________indicates that the replacement text for a symbolic constant or macro continues on the next line.

The_____________directive causes the source code lines to be numbered from the indicated value beginning with the next source code line.
```
## Write a preprocessor directive to accomplish each of the following:

Define symbolic constant YES to have the value 1.

Define symbolic constant NO to have the value 0.

Include the header common.h. The header is found in the same directory as the file being compiled.

Renumber the remaining lines in the file beginning with line number 3000.

If symbolic constant TRUE is defined, undefine it and redefine it as 1. Do not use #ifdef.

If symbolic constant TRUE is defined, undefine it and redefine it as 1. Use the #ifdef preprocessor directive.

If symbolic constant TRUE is not equal to 0, define symbolic constant FALSE as 0. Otherwise define FALSE as 1.

Define macro CUBE_VOLUME that computes the volume of a cube. The macro takes one argument.

