# Class Review Exercises
For each of the following functions, explain its purpose, the type(s) of
its output parameters, and the type(s) of its input parameter(s). Also,
indicate if it is user-defined or if it is from the string library or from the ctype library.

```
strcpy     strncpy     strncat
islower    strcat      scanline
isalpha    strlen      strcmp
```
Which of the following strings could represent space allocated for a local variable? 
Which could represent a formal parameter of any length?
```

char str1[50]     char str2[]
```
A program you have written is producing incorrect results on your second data set, 
although it runs fine on the first. As you debug, you discover that the value of 
one of your strings is spontaneously changing from "blue" to "al" in the following code segment. What could be wrong?

```
. . .
printf("%s\n", s1);     /*     displays "blue" */
scanf("%s", s2);
printf("%s\n", s1);     /*     displays "al"   */
. . .
```
Declare a variable str with as little space as would be reasonable given that str will hold each 
of the values below in turn.

```
carbon     uranium     tungsten     bauxite
```
What is the value of t1 after execution of these statements if the value of t2 is "Merry Christmas"?

```
strncpy(t1, &t2[3], 5); t1[5] = '\0';
```
The action of joining two strings is called ______________.

Write a statement that assigns to s1 the end of the string value of s2 starting with the fourth character (i.e., s2[3]).

Write statements that take a whole data line as input and display all the uppercase letters in the line.

What is the value of the following expression?

```
isdigit(9)
```
What does this program fragment display?

```
char city[20] = "Washington DC 20059";
char *one, *two, *three;
one = strtok(city, " ");
two = strtok(NULL, " ");
three = strtok(NULL, " ");
printf("%s\n%s\n%s\n", one, two, three);
```

After execution of the fragment in previous problem, is the value of city still “Washington DC 20059”?

	
