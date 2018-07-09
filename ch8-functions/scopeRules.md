# scope rules
variables have two attributes: scope and class

    scope

    - the area of the program in which the variable is valid
    - either global or local scope
    - global (aka file scope)
        - declared outside all blocks
        - accessible at all levels/blocks/scopes
    **NOTE: global variables are generally frowned upon.**
    - local (aka block scope)
        - declared inside a block
        - accessible only within the block it was declared

    class

    -either permanent or temporary
    -permanent classes are created and initialized before the program starts and remains until it terminates
    -temporary classes are allocated on "the stack"; memory is returned at the end of the block

global variables are ALWAYS permanent

local variables are TEMPORARY unless declared *static*

| **declared** | **scope** | **class** | **initialized** |
|---|---|---|---|
|outside all blocks|global|permanent|once|
|static outside all blocks|global|permanent|once|
|inside a block|local|temporary|each time block is entered|
|static inside a block|local|permanent|once|

both global and local variables can share names

when invoked within their scope, local variables will "hide" global variables of the same name

*static* means that once the variable is initialized (when used in a function) it will remain in memory until the program ends

```c
///variable scope example///

//this array is global

char scope[] = {"global\n"};
int main(void)
{
    int i = 0;    //iterating the var
    printf("%s", scope);

//this array is local to main()
    
    char scope[] = {"main\n"};
    printf("%s", scope);
    for (i = 0; i < 3; i++)
    {

//this array is local to the for loop

        char scope[] = {"for\n"};
        printf("%s", scope);
    }

//[...] main() truncated
}

///variable scope output///

global
    main
        for
        for
        for
```
NOTE: use unique variable names, it will help avoid summoning another variable by mistake

