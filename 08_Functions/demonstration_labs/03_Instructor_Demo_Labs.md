# Demo Labs

## Show the value of x after each of the following statements is performed:
```
x = fabs( 7.5 );

x = floor( 7.5 );

x = fabs( 0.0 );

x = ceil( 0.0 );

x = fabs( -6.4 );

x = ceil( -6.4 );

x = ceil( -fabs( -8 + floor( -5.5 ) ) );
```

## (Parking Charges)
A parking garage charges a $2.00 minimum fee to park for up to three hours and an additional $0.50 per hour for each hour or part thereof over three hours. The maximum charge for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours at a time. Write a program that will calculate and print the parking charges for each of three customers who parked their cars in this garage yesterday. You should enter the hours parked for each customer. Your program should print the results in a tabular format, and should calculate and print the total of yesterday’s receipts. The program should use the function calculateCharges to determine the charge for each customer. Your outputs should appear in the following format:

![image](https://user-images.githubusercontent.com/47218880/66579887-22c23580-eb43-11e9-8424-34409d17e429.png)


## (Rounding Numbers) 
An application of function floor is rounding a value to the nearest integer. The statement
![image](https://user-images.githubusercontent.com/47218880/66579993-4be2c600-eb43-11e9-8434-83769294ab24.png)

will round the number x to the nearest integer and assign the result to y. Write a program that reads several numbers and uses the preceding statement to round each of these numbers to the nearest integer. For each number processed, print both the original number and the rounded number.

## Answer each of the following questions.

What does it mean to choose numbers “at random”?

Why is the rand function useful for simulating games of chance?

Why would you randomize a program by using srand? Under what circumstances is it desirable not to randomize?

Why is it often necessary to scale and/or shift the values produced by rand?


## Write statements that assign random integers to the variable n in the following ranges:
```
1 ≤ n ≤ 2

1 ≤ n ≤ 100

0 ≤ n ≤ 9

1000 ≤ n ≤ 1112

–1 ≤ n ≤ 1

–3 ≤ n ≤ 11

```
## (Exponentiation)
Write a function integerPower(base, exponent) that returns the value of baseexponent

For example, integerPower( 3, 4 ) = 3 * 3 * 3 * 3. Assume that exponent is a positive, nonzero integer, and base is an integer. Function integerPower should use for to control the calculation. Do not use any math library functions.

## (Square of Asterisks) 
Write a function that displays a solid square of asterisks whose side is specified in integer parameter side. For example, if side is 4, the function displays:


## (Displaying a Square of Any Character) 
Modify the function created in the previous exercise to form the square out of whatever character is contained in character parameter fillCharacter. Thus if side is 5 and fillCharacter is “#”, then this function should print:

![image](https://user-images.githubusercontent.com/47218880/66582412-5e5efe80-eb47-11e9-8e94-db5e1c5f2e88.png)

## (Separating Digits) 
 Write program segments that accomplish each of the following:

Calculate the integer part of the quotient when integer a is divided by integer b.

Calculate the integer remainder when integer a is divided by integer b.

Use the program pieces developed in a) and b) to write a function that inputs an integer between 1 and 32767 and prints it as a series of digits, with two spaces between each digit. For example, the integer 4562 should be printed as:


![image](https://user-images.githubusercontent.com/47218880/66582544-99613200-eb47-11e9-915c-81961ef223d2.png)
















