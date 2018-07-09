# coding style guide

this is a general style guide. different guides will be released for different languages. the entire guide won't apply to every section. newly applicable sections will be covered in each objective. the **requirements** section will be evaluated during all Progress Checks. the **recommended** section will NOT be evaluated but do represent best practices.

### requirements

    1. comments
        - minimum documentation box on top
        - comment for each function
        - variable declaration
    2. indent/brace style
    3. files

### recommended

    comments
    1. \#endif
    2. return values

>documentation box:
every program should start with a comment saying briefly what it is for. this is also where you will put your name, date and project/lab name.

```c
/* this program does something!
*
*  name: dwight eisenhower
*  date: 19 DEC 2017
*  project: super hard project
*
*  additional things
*/
```

>variable declaration:
there should be a comment on each static variable like this

```c
// hit_counter counts the amount of hits an NPC has taken
int hit_counter;
```

>functions:
explain what each function does, what arguments it gets, what they are used for, etc.

>names:
names of global variables and functions sort of act like comments. they need to be clear and state what their intended purpose is. local variables \(like those in functions\) on the other hand can be shorter since they are only to be used within it's one context. limit the use of abbreviations and use underscores to separate words in a name. use lowercase and reserve upper case for macros and enum constants.

>indent/brace style:
indentation must be constant and uniform. braces {} must be used for functions, required statements \(if, else, etc\), etc.

>files:
ensure you use the correct extensions. the first letter of the file name should be a letter and all characters should be lower-case letters and numbers. use underscores for word splitting. i.e.: **npc\_ai.c**

### more information

[https://www.gnu.org/prep/standards/html\_node/Writing-C.html](https://www.gnu.org/prep/standards/html_node/Writing-C.html)
