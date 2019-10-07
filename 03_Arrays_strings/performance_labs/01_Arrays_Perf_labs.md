# Student Performance Labs

##  Fill in the blanks in each of the following:

C stores lists of values in______________.

The elements of an array are related by the fact that they_____________.

When referring to an array element, the position number contained within square brackets is called a(n)________________.

The names of the five elements of array p are__________,_____________,__________,_________and_______________.

The contents of a particular element of an array is called the____________of that element.

Naming an array, stating its type and specifying the number of elements in the array is called___________________-the array.

The process of placing the elements of an array into either ascending or descending order is called_______________.

In a double-subscripted array, the first subscript identifies the____________of an element and the second subscript identifies the_________________of an element.

An m-by-n array contains__________rows,___________columns and______________elements.

The name of the element in row 3 and column 5 of array d is___________________.


## State which of the following are true and which are false. If false, explain why.

* To refer to a particular location or element within an array, we specify the name of the array and the value of the particular element.

* An array definition reserves space for the array.

* To indicate that 100 locations should be reserved for integer array p, write
![image](https://user-images.githubusercontent.com/47218880/66331483-4ba2ba80-e8f8-11e9-9217-43133c74fdee.png)


* A C program that initializes the elements of a 15-element array to zero must contain one for statement.

* A C program that totals the elements of a double-subscripted array must contain nested for statements.

* The mean, median and mode of the following set of values are 5, 6 and 7, respectively: 1, 2, 5, 6, 7, 7, 7.

## Write statements to accomplish each of the following:

* Display the value of the seventh element of character array f.

* Input a value into element 4 of single-subscripted floating-point array b.

* Initialize each of the five elements of single-subscripted integer array g to 8.

* Total the elements of floating-point array c of 100 elements.

* Copy array a into the first portion of array b. Assume double a[11], b[34];

* Determine and print the smallest and largest values contained in 99-element floating-point array w.

## Find the error(s) in each of the following statements:
a.
![image](https://user-images.githubusercontent.com/47218880/66331725-c9ff5c80-e8f8-11e9-8a54-8012bdc671c0.png)

b.

![image](https://user-images.githubusercontent.com/47218880/66331761-dbe0ff80-e8f8-11e9-9bcf-5f57c289cff3.png)

c. double f[ 3 ] = { 1.1, 10.01, 100.001, 1000.0001 };


d.

![image](https://user-images.githubusercontent.com/47218880/66331774-e69b9480-e8f8-11e9-9efc-c7a729c421eb.png)

## (Game of Craps) 
Write a program that runs 1000 games of craps (without human intervention) and answers each of the following questions:

* How many games are won on the first roll, second roll, …, twentieth roll and after the twentieth roll?

* How many games are lost on the first roll, second roll, …, twentieth roll and after the twentieth roll?

* What are the chances of winning at craps? [Note: You should discover that craps is one of the fairest casino games. What do you suppose this means?]

* What’s the average length of a game of craps?

* Do the chances of winning improve with the length of the game?

## (Airline Reservations System)
A small airline has just purchased a computer for its new automated reservations system. The president has asked you to program the new system. You’ll write a program to assign seats on each flight of the airline’s only plane (capacity: 10 seats).

Your program should display the following menu of alternatives:

![image](https://user-images.githubusercontent.com/47218880/66331903-2a8e9980-e8f9-11e9-8408-32f9158f458b.png)

If the person types 1, then your program should assign a seat in the first class section (seats 1–5). If the person types 2, then your program should assign a seat in the economy section (seats 6–10). Your program should then print a boarding pass indicating the person’s seat number and whether it’s in the first class or economy section of the plane.

Use a single-subscripted array to represent the seating chart of the plane. Initialize all the elements of the array to 0 to indicate that all seats are empty. As each seat is assigned, set the corresponding element of the array to 1 to indicate that the seat is no longer available.

Your program should, of course, never assign a seat that has already been assigned. When the first class section is full, your program should ask the person if it’s acceptable to be placed in the economy section (and vice versa). If yes, then make the appropriate seat assignment. If no, then print the message “Next flight leaves in 3 hours.”



