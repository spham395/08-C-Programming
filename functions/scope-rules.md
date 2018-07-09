# Scope Rules

Variables have two attributes: scope and class.

## Scope:

* The area of the program in which the variable is valid
* Either global or local scope
* Global \(AKA File Scope\):
  * Declared outside all blocks
  * Accessible at all levels/blocks/scopes
* Local \(AKA Block Scope\):
  * Declared inside a block
  * Accessible only within the block it was declared

#### DISCLAIMER:

A frequent alternative to global variables is to pass information by value to functions \(see: parameters\) and from functions \(see: Return values\). If you can pass it instead, do it.

## Class:

* Either permanent or temporary
* **Permanent: **created and initialized before the program starts and remains until it's terminated
* **Temporary: **allocated on "the stack"; memory is returned at the end of the block
* **Global Variables** are always permanent
* **Local Variables **are temporary unless declared static

| **Declared** | **Scope** | **Class** | **Initialized** |
| :--- | :--- | :--- | :--- |
| Outside all blocks | Global | Permanent | Once |
| **static **outside all blocks | Global | Permanent | Once |
| Inside a block | Local | Temporary | Each time block is entered |
| **static **inside a block | Local | Permanent | Once |

* Global and local variables may share names
* When invoked within their scope, local variables will "hide" global variables of the same name

> Static - When used inside a function, once the variable has ben initialized, it remains in memory until programs end

```c
// VARIABLE SCOPE EXAMPLE //

// This array is Global
char scope[] = {"Global\n"};
int main(void)
{
    int i = 0;    // Iterating var
    printf("%s, scope);

    // This array is local to main()
    char scope[] = {"Main\n"};
    printf("\t%s", scope);
    for (i = 0; i < 3; i++)
    {
        // This array is local to for loop
        char scope[] = {"For\n"};
        printf("\t\t%s", scope);
    }
[...]    // main() truncated
```

```c
// VARIABLE SCOPE OUTPUT //

Global
    Main
        For
        For
        For
```

> BEST PRACTICE: Use unique variable names



