# Conditional Statements Pt1

---

## IF statement

**If **statements create conditional jumps. An expression is tested as TRUE or FALSE, if TRUE, the code block will be executed.

```c
//////// MINIMUM IF STATEMENT SYNTAX ////////
if (expression)        // "expression" is evaluated as true or false
{
    statement1;        // Executed when "expression" is true
}
/*
    The block containing "statement1" is executed when "expression" is true (expression != 0)

    The block containing "statement1" is skipped when "expression" is faluse (expression == 0)
*/
```

```c
//////// BASIC IF STATEMENT EXAMPLES ////////
if (1 > 0)
{
    printf("All is right with the world. \n");
}

if (1)
{
    printf("1 evaluates to True. \n");
}

if (i > u)
{
    printf("i is greater than u. \n");
}

if (i && i == u)
    printf("Apparently, this works and i evaluates to True. \n");
```

#### EVIL: Don't leave IF statements unwrapped. This is a dangerous practice and can lead to unexpected behavior.

### Demonstration Lab: IF Statement

* Initialize a char array to zero
* Safely store a user-input string in that char array
* Safely print the string \*if\* the first element is not equal to zero

### Performance Lab: IF Statement

1. Initialize a char array to zero
2. Safely store a user-input string in that char array
3. Safely print the string \*if\* the following conditions are both true:
   1. The first element is greater than or equal to decimal value 32
   2. The first element is less than decimal value 126

#### NOTE: Decimal values 32-126 represent printable ASCII characters

## IF-ELSE Statement

An **IF **statement may also include an **ELSE. **Just like the IF statement, the **IF-ELSE **will test an expression as true or false. If true, the if code block will be executed. But, if it's false while using an IF-ELSE statement, the else code block will be executed instead.

```c
//////// IF-ELSE STATEMENT SYNTAX ////////
if (expression)            // "expression" is evaluated as true or false
{
    statement1;            // Executed when "expression" is evaluated to true
}
else 
{
    statement2;            // Executed when "expression" is evaluated to false
}
```

```c
//////// IF-ELSE STATEMENT EXAMPLES ////////
if (i >= u)
{
    printf("U is no greater than i. \n");
}
else
{
    printf("U is greater than i. \n");
}


if (i && i == u)
    printf("Apparently, this works and i evaluates to True. \n");
else
    i = u;
/* Set i equal to u since it's either 0 or not already equivalent */
```

#### EVIL: Don't leave IF-ELSE statements unwrapped

### Demonstration Lab: IF-ELSE Statements

**"Even It Out"**

* Input a number from user
* Determine if the number is odd or even utilizing the "mod" operator[^1]
* Utilizing an IF-ELSE statement:
  * If the number is odd, multiple the number by 2, store the result in the original variable and print the new number
  * If the number is even, say so
* **BONUS: **Determine if the number is odd or even utilizing a bitwise operator[^2] instead

### Performance Lab: IF-ELSE Statements

**"Negative, Ghost Rider..."**

1. Initialize a signed int to 0
2. Input a number from the user and store it in the signed int
3. Determine if the number is negative or positive utilizing a bitwise operator
4. Utilizing an IF-ELSE statement:
   1. If the number is negative, say so
   2. Otherwise print the original value in binary, and use a bitwise operation to flip one bit to make it negative
5. Print the binary

## ELSE-IF Statement

If statements may also include multiple else conditions. The easiest way to explain this is to hop straight into demonstrations.

```c
//////// ELSE-IF STATEMENT SYNTAX ////////
if (expression1)            // "expression1" is evaluated as true or false
{
    statement1;             // Executed when "expression1" is true
}
else if (expression2)       // "expression2" is evaluated as true or false only if "expression1" is false
{
    statement2;             // Executed when "expression2" is true
}
else
{
    statement3;             // Executed when both "expression1" and "expression2" are false
}
```

```c
//////// ELSE-IF STATEMENT EXAMPLES ////////
if (i > u)
{
    printf("I is greater than u. \n");
}
else if (i < u)
{
    printf(" U is greater than i. \n");
}
else
{
    printf("U and i are equal. \n");
}
```

#### EVIL: Don't leave ELSE-IF statements unwrapped

### Demonstration Lab: ELSE-IF Statement

**"What's the Difference?"**

* Initialize three \(and only three\) int variables to 0
* Safely scan user input into the variable \#1 and \#2 utilizing a single line
* Using a single ELSE-IF statement:

  * If variable \#1 is equal to variable \#2, assign 0 to variable \#3
  * Otherwise, subtract the smallest from the largest \(e.g., 3 - 2, 42 - -455, -11 - -1337\) and assign the result to variable \#3 

* Print the value of variable \#3 if it is positive, otherwise print an error

### Performance Lab: ELSE-IF Statement

**"Swap the Largest Number"**

1. Initialize three \(and only three\) unsigned int variables to 0
2. Safely scan user input into the variable \#1 and \#2 utilizing a single line
3. Using a single ELSE-IF statement:
   1. If variable \#1 is equal to variable \#2, print an error
   2. Otherwise, exchange the value of the largest variable with variable \#3 while preserving the other value
4. Print the values of all three variable if the sum of the three variables is grater than 2 regardless of the previous ELSE-IF statement. 

[^1]: This is not the most efficient method

[^2]: This is the most efficient method

