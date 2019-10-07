# Array Class-Review Exercises

Answer each of the following:

Lists and tables of values are stored in______________.

The number used to refer to a particular element of an array is called its___________.

A(n)______________-should be used to specify the size of an array because it makes the program more scalable.

The process of placing the elements of an array in order is called________________the array.

Determining whether an array contains a certain key value is called______________-the array.

An array that uses two subscripts is referred to as a(n)_____________array.

## State whether the following are true or false. If the answer is false, explain why.

```
* An array can store many different types of values.

* An array subscript can be of data type double.

* If there are fewer initializers in an initializer list than the number of elements in the array, C automatically initializes the remaining elements to the last value in the list of initializers.

* It’s an error if an initializer list contains more initializers than there are elements in the array.

* An individual array element that’s passed to a function as an argument of the form a[i] and modified in the called function will contain the modified value in the calling function.
```
## Follow the instructions below regarding an array called "fractions."

* Define a symbolic constant SIZE to be replaced with the replacement text 10.

* Define an array with SIZE elements of type double and initialize the elements to 0.

* Refer to array element 4.

* Assign the value 1.667 to array element nine.

* Assign the value 3.333 to the seventh element of the array.

* Print array elements 6 and 9 with two digits of precision to the right of the decimal point, and show the output that’s displayed on the screen.

* Print all the elements of the array, using a for repetition statement. Assume the integer variable x has been defined as a control variable for the loop. Show the output.

## Write statements to accomplish the following:

* Define table to be an integer array and to have 3 rows and 3 columns. Assume the symbolic constant SIZE has been defined to be 3.

* How many elements does the array table contain? Print the total number of elements.

* Use a for repetition statement to initialize each element of table to the sum of its subscripts. Assume the integer variables x and y are defined as control variables.

* Print the values of each element of array table. Assume the array was initialized with the definition:

![image](https://user-images.githubusercontent.com/47218880/66328013-73425480-e8f1-11e9-9e6c-17003ac25d81.png)

##  Find the error in each of the following program segments and correct the error.

![image](https://user-images.githubusercontent.com/47218880/66328105-a1c02f80-e8f1-11e9-901c-2c0023901eef.png)

## Consider a 2-by-5 integer array "t."

* Write a definition for t.

* How many rows does t have?

* How many columns does t have?

* How many elements does t have?

* Write the names of all the elements in the second row of t.

* Write the names of all the elements in the third column of t.

* Write a single statement that sets the element of t in row 1 and column 2 to zero.

* Write a series of statements that initialize each element of t to zero. Do not use a repetition structure.

* Write a nested for statement that initializes each element of t to zero.

* Write a statement that inputs the values for the elements of t from the terminal.

* Write a series of statements that determine and print the smallest value in array t.

* Write a statement that displays the elements of the first row of t.

* Write a statement that totals the elements of the fourth column of t.

* Write a series of statements that print the array t in tabular format. List the column subscripts as headings across the top and list the row subscripts at the left of each row.
 
## (Sales Commissions)
Use a single-subscripted array to solve the following problem.
A company pays its salespeople on a commission basis. The salespeople receive 
$200 per week plus 9% of their gross sales for that week. For example, a salesperson 
who grosses $3,000 in sales in a week receives $200 plus 9% of $3,000, or a total of $470. 
Write a C program (using an array of counters) that determines how many of the salespeople 
earned salaries in each of the following ranges (assume that each salesperson’s salary is truncated to an integer amount):
```
$200–299

$300–399

$400–499

$500–599

$600–699

$700–799

$800–899

$900–999

$1000 and over
```
Label the elements of 3-by-5 double-subscripted array sales to indicate the order in 
which they’re set to zero by the following program segment:

![image](https://user-images.githubusercontent.com/47218880/66329202-be5d6700-e8f3-11e9-9c12-fe7d9c78f8c1.png)

What does the following program do?
![image](https://user-images.githubusercontent.com/47218880/66329332-f82e6d80-e8f3-11e9-96a2-9c1eb5529136.png)

## (Dice Rolling) 
Write a program that simulates the rolling of two dice. The program should use rand 
twice to roll the first die and second die, respectively. The sum of the two values should then be calculated.
[Note: Because each die can show an integer value from 1 to 6, then the sum of the two values will vary from 2 to 12, with 7 being the most frequent sum and 2 and 12 the least frequent sums.] 
Figure below shows the 36 possible combinations of the two dice. 
Your program should roll the two dice 36,000 times. Use a single-subscripted array to tally 
the numbers of times each possible sum appears. Print the results in a tabular format. Also, determine if the totals are reasonable; i.e., there are six ways to roll a 7, so approximately one-sixth of all the rolls should be 7.

![image](https://user-images.githubusercontent.com/47218880/66329522-45124400-e8f4-11e9-91fa-d137d217c4ac.png)

