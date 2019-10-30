## Write a program to display array elements with their addresses.

 
```c
 int main()
{
   int num[5]={1,2,3,2,5};
   clrscr();
   printf(“\n num[0] = %d Address : %u”,num[0],&num[0]);
   printf(“\n num[1] = %d Address : %u”,num[1],&num[1]);
   printf(“\n num[2] = %d Address : %u”,num[2],&num[2]);
   printf(“\n num[3] = %d Address : %u”,num[3],&num[3]);
   printf(“\n num[4] = %d Address : %u”,num[4],&num[4]);
   return 0;
}
```
OUTPUT:
```
num[0] = 1 Address : 65516

num[1] = 2 Address : 65518

num[2] = 3 Address : 65520

num[3] = 2 Address : 65522

num[4] = 5 Address : 65524
```
##  Explanation:

In the output of the program, elements and their addresses are displayed. Recall that integer requires two bytes in memory. Hence, the memory locations displayed at the output have a difference of two. From the above program, it is clear that array elements are stored in contigious memory locations.

## Write a program to exceed the upper boundary of an array and see the element after expansion of an array.
```c

  void main()
{
   int num[5]={1,2,3,2,5};
   num[5]=6;
   clrscr();
   printf (“num[5]=%d”,num[5]);
   getche();
}
```
OUTPUT:
```
Num[5]=6
```
## Explanation:

In the above program, array num[5] is declared with array size 5 and it is initialized with 5 elements. In the next statement, 6th element is also initialized and displayed. Hence, we can say that upper boundary of an array can be expanded.

 ## Write a program to initialize the static array and display its elements.

```c 

  void main()
{
   int num[5]={0},j;
   clrscr();
   for(j=0;j<5;j++)
   printf(“\nnum[%d]=%d”,j,num[j]);
   getche();
}
```
OUTPUT:
```
num[0]=0
num[1]=0
num[2]=0
num[3]=0
num[4]=0
```
## Explanation:

In the above program, an array num[5] is declared and the first element is initialized with zero. The compiler automatically initializes all elements with zero. Using the for loop the contents of an array are displayed and we can see that all elements have zero values.

## Write a program to print bytes reserved for various types of data and space required for storing them in memory using arrays.
```c
 

  void main()
{
   int i[10];
   char c[10];
   long l[10];
   clrscr();
   printf(“The type ‘int’ requires %d Bytes”,sizeof(int));
   printf(“\nThe type ‘char’ requires %d Bytes”,sizeof(char));
   printf(“\nThe type ‘long’ requires %d Bytes”,sizeof(long));
   printf(“\n %d memory locations are reserved for ten ‘int’
   elements”,sizeof(i));
   printf(“\n %d memory locations are reserved for ten ‘char’
   elements”,sizeof(c));
   printf(“\n %d memory locations are reserved for ten ‘long’
   elements”,sizeof(l));
}
```
OUTPUT:
```
The type ‘int’ requires 2 Bytes
The type ‘char’ requires 1 Bytes
 The type ‘long’ requires 4 Bytes
 
 20 memory locations are reserved for ten ‘int’ elements
 10 memory locations are reserved for ten ‘char’ elements
 40 memory locations are reserved for ten ‘long’ elements
 ```

## Explanation:

The sizeof() function provides the size of data type in bytes. In the above example, int, char and long type of data variables are supplied to this function which gives the results 2, 1 and 4 bytes, respectively. The required number of memory locations for int, char and long will be 2, 1 and 4. Memory locations required for the arrays = argument of an array × sizeof(data type). In the above example, an array int i[10] requires 20 memory locations since each element requires two memory locations.

## Write a program to display character array with their address.
```c
 

  void main()
{
   char name[10]={‘A’,‘R’,‘R’,‘A’,‘Y’};
   int i=0;
   clrscr();
   printf(“\n Character Memory Location \n”);
   while(name[i]!=‘\0’)
   {
       printf(“\n [%c]\t\t [%u]”,name[i],&name[i]);
       i++;
   }
}
```
OUTPUT:
```
Character Memory Location
   [A]       4054
   [R]       4055
   [R]       4056
   [A]       4057
   [Y]       4058
```
## Explanation:

The elements of an array are stored in contigious memory locations. In the above example elements of one-dimensional array ‘A’,’ R’,’ R’,’ A’,’ Y’ are stored from location 4054 to 4058.

## Write a program to add even and odd numbers from 1 to 10. Store them and display their results in two separate arrays.

 
```c
  void main()
{
   int sumo=0,sume=0,i=0,odd[5],even[5],a=-1,b=-1;
   clrscr();
   for (i=1;i<=10;i++)
   {
      if(i%2==0)
      even[++a]=i;
      else
      odd[++b]=i;
   }
   printf(“\n\tEven \t\tOdd”);
   for(i=0;i<5;i++)
   {
      printf(“\n\t %d\t\t %d”,even[i],odd[i]);
      sume=sume+even[i];
      sumo=sumo+odd[i];
   }
   printf(“\n\t=====================\n”);
   printf(“Addition: %d %14d”,sume,sumo);
}
```
OUTPUT:
```
                Even   Odd
                 2     1
                 4     3
                 6     5
                 8     7
                 10    9
              =============
       Addition: 30    25
 ```
## Explanation:

The for loop executes 10 times. In the for loop the value of loop variable ’ i’ is tested for ‘even’ and ‘odd’ conditions. If the value of ’ i’ is even then it is assigned to array even[] otherwise to odd[]. Thus, for 10 times this task is performed. Finally, the second for loop displays both the even[] and odd[] arrays. In the same array, sum of even and odd elements is calculated and displayed.

## Write a program to input five numbers through the keyboard. Compute and display the addition of even numbers and product of odd numbers.
```C
 void main()
{
   int a=0,m=1,i,num[5];
   clrscr();
   for(i=0;i<5;i++)
   {
      printf(“\nEnter Number[%d]:”,i+1);
      scanf(“%d”,&num[i]);
   }
   printf(“\n=================================”);
   for(i=0;i<5;i++)
   {
      if(num[i]%2==0)
      {
         printf(“\n Even Number : %d”,num[i]);
         a=a+num[i];
      }
      else
      {
          printf(“\n Odd Number : %d”,num[i]);
          m=m*num[i];
      }
   }
   printf(“\n=================================”);
   printf(“\n Addition of Even Numbers : %d”,a);
   printf(“\n Product of Odd Numbers :%d”,m);
   printf(“\n=================================”);
}
```
OUTPUT:
```
Enter Number[1]: 1
Enter Number[2]: 2
Enter Number[3]: 3
Enter Number[4]: 4
Enter Number[5]: 5
================================
Odd Number : 1
Even Number : 2
Odd Number : 3
Even Number : 4
Odd Number : 5
=================================
Addition of Even Numbers : 6
Product of Odd Numbers : 15
=================================


```

## Explanation:

In the above example, five integers are entered through the keyboard. To detect even and odd numbers mod(%) operation is carried out and remainder of each number is obtained. If the remainder is 0, then the number is even and added to variable ‘a’. If the remainder is non-zero then this number is multiplied to ‘m’. Variables ‘a’ and ‘m’ are initialized with 0 and 1, respectively. Both the variables are printed through printf() function which gives addition of even numbers and product of odd numbers, respectively.

## Write a program to print a string in the reverse order.

* For example, HELLO would give the result as OLLEH.

 
```c
  void main()
{
   static char s[5]; /* Static Storage class initializes variables */
   int i;
   clrscr();
   puts(“Enter a String :”);
   gets(s);
   puts(“Reverse Siring :”);
   for(i=4;i>=0;i--)
   printf(“%c”,s[i]);
}
```
OUTPUT:
```
Enter a String :
HELLO
Reverse Siring :
OLLEH
```
## Explanation:

As we discussed earlier, an array stores its elements in continuous form and counting of array elements starts from ‘0’. By applying reverse loop elements are printed from last to the first.

## Write and display a program to detect the occurrence of a character in a given string.

 
```c
  void main()
{
   static char s[15];
   int i,c=0;
   char f;
   clrscr();
   puts(“Enter a String :”);
   gets(s);
   puts(“Enter a Character to Find :”);
   f=getchar();
   for(i=0;i<=15;i++)
   {
      if(s[i]==f)
      c++;
   }
   printf(“The Character (%c) in a String (%s) occurs %d
   times.”,f,s,c);
}
```
OUTPUT:
```
Enter a String : programmer
Enter a Character to Find : r
The Character (r) in a String (programmer) occurs (3) times.
```
## Explanation:

In this program, the string and a single character are entered through the keyboard. Inside the for loop, the if statement checks each element of the string for the occurrence of the single entered character. If the character (‘r’) is found then ‘c’ counter is incremented otherwise without incrementing the counter loop continuous till ‘i’ reaches to 15. At last the value of ‘c’ gives the total occurrence of the given character.

## Write a program to display the elements of two arrays in two separate columns and add their corresponding elements. Display the result of addition in the third column.

 
```c
  void main()
{
   int i,num[]={24,34,12,44,56,17};
   int num1[]={12,24,35,78,85,22};
   clrscr();
   printf(“Element of Array 1st - 2nd Array Addtion\n”);
   for(i=0;i<=5;i++)
   {
      printf(“\n\t\t %d + %d = \t%d”,num[i],num1[i],num[i]+num1[i]);
   }
}
```
OUTPUT:
```
Element of Array 1st - 2nd Array Addition
            24 + 12 = 36
            34 + 24 = 58
            12 + 35 = 47
            44 + 78 = 122
            56 + 85 = 141
            17 + 22 = 39
```
## Explanation:

In the above program, two integer arrays are initialized and the corresponding elements of arrays are added through a simple arithmetic operation.

##  Write a program to enter a character and integer data type. Use the two-dimensional array. Perform and display the addition of three numbers.

* Tips: The Unsigned character data type is capable of performing mathematical operations on numbers from 1 to 255.
```c
  void main()
{
   static unsigned char l,r,i,real[3][5],ima[3][5];
   long c;
   clrscr();
   for(l=0;l<3;l++)
   {
      printf(“Enter Number[%d] :”,1+l);
      scanf(“%ld”,&c);
      r=c/255;
      i=c%255;
      real[l][5]=r;
      ima[l][5]=i;
   }
   c=0;
   for(l=0;l<3;l++)
   c=c+real[l][5]*255+ima[l][5];
   printf(“\nSum of 3 Numbers :%3ld”,c);
   getch();
}
```
OUTPUT:
```
Enter Number [1] : 5
Enter Number [2] : 4
Enter Number [3] : 3

Sum of 3 Numbers : 12
```
## Explanation:

The unsigned character data type ranges from 0 to 255. In the above example, three numbers are entered. They are divided, and the mod operation is carried out with 255. If the numbers are less than 255 neither division nor mod operations are carried out. Their sum is evaluated and displayed on the screen. In case the entered numbers are greater than 255, real and imaginary parts are computed and stored in the separate arrays. To obtain the whole number the real part is multiplied with 255 and added to imaginary part.

## Write a program to accept any string up to 15 characters. Display the elements of string with their element numbers in a separate column.
```c
 # include <process.h>
void main()
{
   static char name[15];
   int i;
   clrscr();
   printf(“Enter your name :”);
   gets(name);
   printf(“Element no. & Character\n”);
   for(i=0;i<=15;i++)
   {
      if(name[i]==‘\0’)
      exit(1);
      printf(“\n %d \t\t%c”,i,name[i]);
   }
}
```
OUTPUT:
```
Enter your name : amit
    Element no. & character
       0              a
       1              m
       2              i
       3              t
```
## Explanation:

The string elements are entered through the keyboard. The for loop starts from ‘0’. The value of ‘i’ is the element number and argument is provided with array name[] towards printing the string element numbers and string characters.


