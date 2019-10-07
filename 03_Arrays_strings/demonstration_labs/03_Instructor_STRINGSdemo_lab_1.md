# Guided Program Explanation
##  Write a program to display the output when the account of NULL character is not considered.
```c
   void main()
{
   char name1[6]={‘S’,‘A’,‘N’,‘T’,‘O’,‘S’};
   clrscr();
   printf(“Name1 = %s”,name1);
   getche();
}
```
OUTPUT:
```
         Name1 = SANTOSabdn12
```
## Explanation:

The output of the above program would be SANTOS followed by some garbage values. To get the correct result, the argument must be [7] instead of [6]. The output can be seen as given below after changing the size [7] in place of [6].

The output will be: SANTOS

The array size must be equal to the number of characters of the word + NULL character. In case the NULL character is not taken into account (statement (a)) the string followed by the first string (statement (b)) will be displayed. The output can be observed by executing the following program.

## Write a program to display successive string in case first string is not terminated with NULL character.

```c
   void main()
{
   char name1[6]={‘S’,‘A’,‘N’,‘T’,‘O’,‘S’};
   char name2[7]={‘S’,‘A’,‘N’,‘T’,‘O’,‘S’};
   clrscr();
   printf(“Name1 = %s”,name1);
   printf(“\nName2 = %s”,name2);
}
```
OUTPUT:
```
         Name1 = SANTOSSANTOS
         Name2 = SANTOS
```

## Explanation:

The NULL character has not been considered in the first statement. The compiler reads the second string immediately followed by the first string because the end of first string is not identified. Because of this, the second string is printed followed by the first string. Hence, the argument must include the account of the NULL character.

## Write a program to print ‘WELCOME’ by using different syntax of initialization of array.
```c
  void main()
{
   char arr1[9]={‘W’,‘E’,‘L’,‘ ’,‘C’,‘O’,‘M’,‘E’,‘\0’};
   char arr2[9]=“WELCOME”;
   char arr3[9]= {{‘W‘},{‘E‘},{‘L‘},{‘ ‘},{‘C‘},{‘O‘},{‘M‘},{‘E‘}};
   clrscr();
   printf(“\nArray1 = %s”,arr1);
   printf(“\nArray2 = %s”,arr2);
   printf(“\nArray3 = %s”,arr3);
}
```
OUTPUT:
```
Array1 = WEL COME
Array2 = WELCOME
Array3 = WEL COME
```
 ## Explanation:

The string elements can be initialized individually with enclosing single quote and curly braces. The curly braces are optional. While initializing individual elements, they must be separated by a comma. This is done in the first and third statements. Also it can be initialized with double-quotation marks and this is done in the second statement.

## Program to Print ASCII Value
```c
#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    // Reads character input from the user
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    return 0;
}
```
Output
```
Enter a character: G
ASCII value of G = 71
```
In this program, user is asked to enter a character which is stored in variable c. The ASCII value of that character is stored in variable c rather than that variable itself.

When %d format string is used, 71 (ASCII value of 'G') is displayed.

When %c format string is used, 'G' itself is displayed.
