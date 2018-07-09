# Conditional Statements Pt2

Just like IF statements, **switch **statements also create conditional jumps. Switch statements test an expression or variable against cases. When the variable is equivalent to a case, the following statements will execute until a **break**. A break statement, while optional, can be used to end cases. If you don't use a break statement to end your switch case, the statement will "fall through" and execute all the following cases.

```c
//////// SWITCH STATEMENT SYNTAX ////////
switch (variable)            // "variable" is tested against values
{
    case constant1:          // if (variable == constant1)...
        statement1;          //...{statement1;}
        break;               // Optional; Exits if case is met

    case constant2;          // if (variable == constant2)...
        break;

    default:                 // Optional; if no case is met
        statement3;
        break;
}
```

```c
//////// SWITCH STATEMENT EXAMPLES ////////
switch(binaryInput)
{
    case 1:
        printf("%d = TRUE \n", binaryInput);
        break;

    case 0:
        printf("%d = FALSE \n", binaryInput);
        break;

    default:
        printf("Somthing has gone wrong. \n");
        break;
}
```

### Case Labels:

* Case label must be unique
* Case labels must end with colon
* Case labels must have constants/constant expression
* Case label must be of integral Type \(integer, character\)
* Case label should not be a floating point number
* Switch cases should have at most one default label
* Default label is opitonal though
* Default can be placed anywhere in switch
* Break statements take control out of the swtich
* Two ore more cases may share one break statement
* Nesting \(switch within switch\) is allowed
* Relational Operators are not allowed in a Switch Statement
* Macro Identifiers are allowed as Switch Case Label
* Const Variable is allowed in the switch Case Statement
* Empty switch case is allowed

### Demonstration Lab: SWITCH Statement

**"May I see a menu?"**

* Input an integer from the user
* Create a menu allowing the user to:
  * Print their input as Binary
  * Print their input as Octal
  * Print their input as Decimal
  * Print their input as Hexadecimal
  * Print their input as a Character
  * Input a new number
  * Exit

### Performance Lab: SWITCH Statement

**"Noa Kuttler is..."**

1. Write a program that will evaluate a simple math formula
2. Input the formula with two integers separated by an arithmetic operator from one line \(e.g., 1 + 1, -8 - 3, 2 \* -7, -15 / -4\)
3. Use a switch statement to print the correct value using the operators as "cases"
4. Set the default condition to an error
5. Ensure any division provides a "double" answer to two decimal places

**HINT: Scan the arithmetic operator as a char**

## When do I use X Statement?

* ### **When do I use IF?**

  * Whenever you only have one condition to act on

```c
if (somethingIsTrue)
{
    then_do_this_thing();        // One condition
}
/* I don't want to do anything if it's false */
```

* ### **When do I use IF-ELSE?**

  * Whenever you only have two conditions to act on

```c
if (somethingIsTrue)
{
    then_do_this_thing();            // Condition one
}
else
    otherwise_do_something_else();   // Condition two
}
// Used for binary input validation, and error checking
```

* ### **When do i use ELSE-IF?**

  * Whenever you have more than two conditions to act on

```c
if (somethingIsTrue)
{
    then_do_this_thing();                  // Condition one
}
else if (somethingElseIsTrue)
{
    then_do_this();                        // Condition two
}
else
{
    otherwise_do_this_instead();           // Condition three
}
```

* ### **Why should I use SWITCH instead of ELSE-IF?**

  * Readability
  * Easier to group multiple cases
  * Faster \(generally\)
  * ELSE-IF does not allow "fall through"

#### Readability

```c
//////// SWITCH ////////
switch (echoNumber)
{
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    default:
        print("???\n");
        break;
}
```

```c
//////// ELSE-IF ////////
if (echoNumber == 1)
{
    printf("One\n");
}
else if (echoNumber == 2)
{
    printf("Two\n");
}
else if (echoNumber == 3)
{
    printf("Three\n");
}
else
{
    printf("???\n");
}
```

#### Easier to group multiple cases

```c
//////// SWITCH ////////
switch (primeNumber)
{
    case 1:
    case 2:
    case 3:
    case 5:
        printf("Prime\n");
        break;
    case 4:
    case 6:
        printf("Not\n");
        break;
    default:
        printf("???\n");
        break
}
```

```c
//////// ELSE-IF ////////
if (primeNumber == 1 || primeNumber == 2 || primeNumber == 3 || primeNumber == 5)
{
    printf("Prime\n");
}
else if(primeNumber == 4 || primeNumber == 6)
{
    printf("Not\n");
}
else
{
    printf("???\n");
}
```

#### Faster/Easier to optimize

* A switch generally generates a jump table in assembly which is usually faster. Of course, this all depends on many factors such as your case, compiler and underlying architecture. 

#### ELSE-IF does not "fall through"

```c
//////// SWITCH ////////
switch (countToNum)
{
    case 3:
        printf("Three\n");
    case 2:
        printf("Two\n");
    case 1: 
        printf("One\n");
    case 0:
        printf("Launch\n");
        break;
    default:
        printf("???\n");
        break;
}
```

```c
//////// ELSE-IF ////////
if (countToNum == 3)
{
    printf("Three\n");
    printf("Two\n");
    printf("One\n");
    printf("Launch\n");
}
else if (countToNum == 2)
{
    printf("Two\n");
    printf("One\n");
    printf("Launch\n");
}
else if (countToNum == 1)
{
    printf("One\n");
    printf("Launch\n");
}
else if(countToNum == 0)
{
    printf("Launch\n");
}
else
{
    printf("???\n");
}
```

* ### When should I use ELSE-IF instead of SWITCH?

  * Large ranges of cases \(switch does not translate well to large ranges\)
  * Conditional expressions \(switch only evaluates constants\)
  * Variable values \(switch case values must be literals\)
  * Floating point values \(floats are technically literals but \*don't\* utilize == or SWITCH with floats

#### Large ranges of cases

```c
//////// IF-ELSE ////////
if (rngNum >= && rngNum <= 20)
{
    printf("%d\n", rngNum);
}
else
{
    printf("???\n");
}
```

```c
//////// SWITCH ////////
switch (rngNum)
{
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
        printf("%d\n", rngNum);
        break;
    default:
        printf("???\n");
        break;

}
```

#### Conditional Expressions

```c
//////// ELSE-IF ////////
int inputNumer = 0;
scanf("%d", &inputNumber);
printf("Number is ");

if (inputNumber > 0)
{
    printf("positive\n");
}
else if (inputNumber < 0)
{
    printf("negative\n");
}
else
{
    printf("zero\n");
}
```

```c
//////// SWITCH ////////
int inputNumber = 0;
scanf("%d", &inputNumber");
printf("Number is ");

switch (inputNumber)
{
    case >0:
        printf("pos\n");
        break;
    case <0:
        printf("neg\n");
        break;
    default:
        printf("zero\n");
        break;
}
/////////////////////////////////
////// COMPILE ERROR!!!!!!!//////
/////////////////////////////////
```

#### Variable Values

```c
//////// IF-ELSE ////////
char char1, char2;
scanf("%1c %1c", &char1, &char2);
printf("Are they equal?\n");

it (char1 == char2)
{
    printf("Yes\n");
}
else
{
    printf("No\n");
}
```

```c
//////// SWITCH ////////
char char1, char2;
scanf("%1c %1c", &char1, &char2);
printf("Are they equal?\n");

switch (char1)
{
    case char2:
        printf("Yes\n");
        break;
    default:
        printf("No\n");
        break;
}

///////////////////////////////
//////// COMPILE ERROR ////////
///////////////////////////////
```

#### Floating Point Values

```c
//////// IF-ELSE ////////
float inputDecimal;
scanf("%f", &inputDecimal);
printf("Equal to 3.14?\n");

if (inputDecimal > 3.14)
{
    printf("No\n");
}
else if (inputDecimal < 3.14)
{
    printf("No\n");
}
else
{
    printf("Yes\n");
}
```

```c
//////// SWITCH ////////
float inputDecimal;
scanf("%f", &inputDecimal);
printf("Equal to 3.14\n");

switch (inputDecimal)
{
    case 3.14:
        printf("Yes\n");
        break;
    default:
        printf("No\n");
        break;
}

///////////////////////////////
//////// COMPILE ERROR ////////
///////////////////////////////
```



