# Loops

---

## Topics:

* For
* While
* Do While
* When do I use ? instead of ?
* Break
* Continue
* Nested Control Flow

## What is a loop?

A loop represents a method of executing a statement, block or algorithm multiple times. A loop consists of a statement or block called the "loop body". The "loop body" is executed multiple times depending on a given condition.

## For Loop

For loops utilize a control structure with three components written as expressions:

* Initialization \(starting point\)
* Tests the controlling expression
* Make adjustments at the end of each loop \(commonly incrementation\)

These three components in the head of the for loop define the loops actions and number of iterations executed by the loop. Any of the three components may be omitted but the place-holders must remain.

```c
//////// FOR LOOP SYNTAX ////////

// expression1 is the initial-statement, commonly "i = 0"
// expression2 is the condition, evaluated as a boolean expression
// expression3 is the iteration-statement, typically increment

for (expression1; expression2; expression3)
{
    statement1;        // Executed when expression2 != 0
}


// breakdown
/* Sequence of for loop execution:
    1. Init expression1
    2. Is expression2 true?
        2.a. if so,
            2.a.i   execute the code block
            2.a.ii  execute expression3
            2.a.iii go back to 2.
        2.b. if not, stop looping */
```

#### Example

```c
//////// FOR LOOP EXAMPLE ////////

int i = 0;

for (i = 0; i < 15; i++)
{
    printf("i = %d\n", i + 1);
}

/* Executes the printf statement 
for all values of i 
between 0 and 14 */
```

#### Example Output

```c
//////// For Loop Output ////////
i = 1
i = 2
i = 3
i = 4
i = 5
i = 6
i = 7
i = 8
i = 9 
i = 10
i = 11
i = 12
i = 13
i = 14
i = 15
```

### Demonstration Lab: For Loops

**"Three or more? Use a for!"**

* What previous Lab could have benefitted from a for loop? Were there:
  * arrays to manipulate?
  * repetitious calculations?
  * copy/pasted code?

### Performance Lab: For Loops

* Find a lab that could have benefited and implement a for loop.

## While Loop

While loops utilize a control structure with one component written as an expression. The expression is required. The component in the head of the while loop is evaluated:

* If True, the loop body is executed and the expression is evaluated again
* If False, program continues with statement following the loop body

#### NOTE: Take care to avoid infinite loops

```c
//////// WHILE LOOP SYNTAX ////////

// expression1 is the condition, evaluated as a boolean expression
while (expression1)
{
    statement1;
    iteration-statement;        // Ensure you control expression 1; prevent infinite loop
}

/* Breakdown
1. Is expresion1 true?
    2.a. If so,
        2.a.i  execute the code block
        2.a.ii go back to 1
    2.b  If not, stop looping */
```

#### Example

```c
//////// WHILE LOOP EXAMPLE ////////

int i = 512;
int counter = 0;

while (i)
{
    printf("i = %d\n", i);
    i /= 2;
    counter++;
}

printf("%d runs.\n", counter);
```

#### Example Output

```c
i = 512
i = 256
i = 128
i = 64
i = 32
i = 16
i = 8
i = 4
i = 2
i = 1
10 loops.
```

### Performance Lab: While Loop

**"Print one line"**

1. Initialize a nul terminated char array with multiple phrases separated by newlines
2. Test the char array with puts\(\)
3. Write a while loop that only prints the first line and stops at a nul character

#### NOTE: Stopping at the null character is a safety measure that accounts for arrays lacking a newline

## DO WHILE Loop

Do while loops utilize a control structure with one component written as a required expression. The "loop body" is executed prior to evaluating the control structure. After which, the component in the head of the do while loop is evaluated:

* If True, the loop body is executed and the expression is evaluated again
* If False, program continues with statement following the loop body.

#### NOTE: Take care to avoid infinite loops

```c
//////// DO WHILE LOOP SYNTAX ////////

// The loop body will always execute at least once

do                                 // Execute the following "loop body"
{
    statement1;                    // Regular Code
    iteration-statement;           // Ensure you control expression1
}
while (expression1);               // ...then evaluate expression 1

// Terminating conditions must be included in the loop body
/* Breakdown
    1. Execute the code block
    2. Is expression1 true?
        2.a. If so,
            2.a.i execute the clode block again
            2.a.iii go back to 2.
        2.b. If not, stop looping */
```

#### Example

```c
//////// DO WHILE LOOP EXAMPLE ////////
char alpha[] = {"Shadow Warrior"};
int i = 0;        // Coundting variable

do
{
    printf("%c\n", alpha[i]);
    i++;
}
while(alpha[i]); // Stops at null

printf("%d characters.\n" i);
```

#### Example Output

```
S
h
a
d
o
w

W
a
r
r
i
o
r
14 characters.
```

### Performance Lab: DO WHILE Loops

**"One 'X' counts the Count..."**

1. Initialize a 26 element int array to 0
2. Initialize a char variable to 0
3. Use do while to input, but not store, a string one character at a time from stdin without scanf\(\)
4. Each time a character is entered:
   1. Convert the character to uppercase using toupper\(\)
   2. Increment the corresponding array element if the user input is a letter
   3. Ensure non-letters \(e.g., Ctrl-D, tab\) are safely handled
5. End the loop when a newline is read
6. Print the results using a for loop

---

# When do I use X Loop?

### When do I use FOR?

* When there is a known number of iterations

```c
/* How many maximum iterations do I need to traverse this string? */
char myString[31] = {"Try hardened slugs each movie."};
int i = 0;                        // Incrementing variable

for (i = 0; i < 31; i+=4)         // What are the values of i?
{
    printf("%c", myString[i]);    // Prints one array element
}
putchar(10);
/* BONUS: What is the output of this for loop? */
```

### When do I use WHILE?

* Unknown number of iterations ranging from 0 to infinity.

```c
/* Function to print a null-terminated string */

int print_string(char* string)
{
    int i = 0;                            // Incrementing variable
    if (string)                           // Checks for NULL pointer
    {
        while (string[i])                 // Stops on NULL character
        {
            putchar(string[i++]);         // Prints one element
        }
    }
}
```

### When do I use DO WHILE?

* Unknown number of iterations ranging from 1 to infinity; but you need the loop body to execute at least once no matter what. 

```c
int inputNumber = 0;                            // Temporarily holds user inpug
int runningTotal = 0;                           // Holds the total

/* Continues adding user input to running sum until 0 is entered */
do
{                                               // Loop body runs at least once
    printf("Enter an integer to add to the total. \n");
    printf("(0 to exit) \n");                   // This is the exit condition
    scanf("%d", &inputNumber);                  // Takes user input
    runningTotal += inputNumber;                // Adds user input to total
}
while (inputNumber);                            // Do again if inputNumber != 0
printf("The total is: %d \n", runningTotal);
```

### Why should I use FOR instead of WHILE or vice-versa?

* There isn't a definitive guideline when to use a particular type of loop over another
* Common convention:
  * Use a for when the compiler knows how many iterations to run
  * Use a while or do while when the compiler doesn't know

---

# Break and Continue

### Break

Break provides an early exit from for, while and do while. More specifically, break causes the innermost enclosing loop or switch to be exited immediately. Useful to stop looping when a condition is met.

### Continue

Continue will cause a loop to go to the top of the loop. This is useful to skip input.

```c
int i = 0;                            // Iterating variable
int firstNumber = 0;                // Numerator
int secondNumber = 0;                // Denominator

for (i = 0; i < 10; i++)            // Loops 10 times
{
    printf("x %% y \n");                    // Prints necessary format
    _flushall();                        // Clears all open streams
    scanf("%d %% %d", &firstNumber, &secondNumber);
    if (secondNumber == 0)                    // Checks for divide by 0
    {
        continue;                    // Skips divide by 0
    }
    printf("Result: %.2f \n", (float)firstNumber / secondNumber);
}
```

## Demonstration Lab: Continue

**"Tailored Times Table"**

* Input an integer "x"
* print the product of x and y when y ranges from 1 through x
* Exit if the user inputs an integer larger than 10
* Use continue to ignore any zeros or negative numbers yet repeat the loop

![](/assets/timesTable.PNG)

## Performance Lab: Continue

**"Indivisible"**

1. Input an unsigned integer "x"
2. Print the first 20 positive integers that x is divisible by utilizing the mod operator\*
3. Repeat this process
4. Immediately stop this process when the user inputs an integer above 999
5. Ignore and divide by 0 errors using continue

**Divisible \(adjective\) - **Capable of being divided by another number without a remainder

\*This is not the most efficient method

---

# Nested Control Flow

Conditional statements are frequently nested within loops and loops are frequently nested within conditional statements.

```c
if (thisIsTrue)
{
    for (i = 0; i < thisIsTrue; i++)
    {
        while (someValue > 0)
        {
            for (j = 0; j < i; j++)
            {
                someValue--;
            }
        }
    }
}
```

### Example

```c
//////// NESTED CONTROL FLOW EXAMPLE ////////
int i = 0;                            // 1st level var
char j = 'A';                         // 2nd level var

/* First for loop iterates through the first level, [1-4] */

for (i = 1; i <= 4; i++)
{
    // Print the 1st level
    printf("%d. \n", i);
    /* Second for loop iterates through the 2nd level , [A-C] */

    for (j = 'A'; j < 'D'; j++)
    {
        // Print the 2nd level
        printf("\t%c. \n", j);
    }
}
```

### Example Output

```
1.
    A.
    B.
    C.
2.
    A.
    B.
    C.
3.
    A.
    B.
    C.
4.
    A.
    B.
    C.
```

## Performance Lab: Nested Control Flow

1. Print all the even or odd numbers from \[0-100\]
2. Prompt the user for input to indicate odds or evens
3. Loop from \[0-100\] and print all the indicated numbers
4. Use an if statement to check even or oddness
5. Bonus: Ask the user to continue with a do while loop
6. Write a version with the counting loop written as a for-loop and a while-loop version.



