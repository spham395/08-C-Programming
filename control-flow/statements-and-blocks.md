# Statements and Blocks

* A **statement** is an expression followed by a semicolon.

```c
[expression];        // Example
i = 0;               // Assignment Expression
```

* A **block** groups a number of statements together into one statement. Blocks may contain declarations:

```c
{....};                    // Block example
{
    int i = 0;             // Declaration statement part of a block
    i++;                   // Single statement part of a block
    i *= 2;                // Single statement part of a block
    if (i > 4)             // Single statement part of a block
    {...}                  // A nested block of statements in a block
}
```



