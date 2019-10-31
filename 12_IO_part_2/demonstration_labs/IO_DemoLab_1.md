# File Input/Output Demo Labs

## Write a program to write data to text file and read it.

 ```c

# include <stdio.h>

# include <conio.h>

# include <process.h>

void main()

{

FILE *fp;

char c=‘ ’;

clrscr();

fp=fopen(“data.txt”,“w”);

if(fp==NULL)

{

  printf(“Can not open file”);

  exit(1);

}

printf(“Write data & to stop press ‘.’ :”);

while(c!=‘.’)

{

  c=getche();

  fputc(c,fp);

}

fclose(fp);

printf(“\n Contents read :”);

fp=fopen(“data.txt”,”r”);

while(!feof(fp))

printf(“%c”,getc(fp));

}
```
OUTPUT:
```
Write data & to stop press ‘.’: ABCDEFGHIJK.

Contents read: ABCDEFGHIJK.
```
##  Write a program to open a pre-existing file and add information at the end of file. Display the contents of the file before and after appending.
```c
 

# include <stdio.h>

# include <conio.h>

# include <process.h>

void main()

{

FILE *fp;

char c;

clrscr();

printf(“Contents of file before appending :\n”);

fp=fopen(“data.txt”,“r”);

while(!feof(fp))

{

  c=fgetc(fp);

  printf(“%c”,c);

}

fp=fopen(“data.txt”,“a”);

if(fp==NULL)

{

  printf(“File can not appended”);

  exit(1);

}

printf(“\n Enter string to append :”);

while(c!=‘.’)

{

  c=getche();

  fputc(c,fp);

}

fclose(fp);

printf(“\n Contents of file After appending :\n”);

fp=fopen(“data.txt”,“r”);

while(!feof(fp))

{

  c=fgetc(fp);

  printf(“%c”,c);

}

}
```
OUTPUT:
```
Contents of file before appending :

String is terminated with ‘\0’.

Enter string to append :

This character is called as NULL character.

Contents of file After appending :

String is terminated with ‘\0’.

This character is called as NULL character.
```
## Write a program to use w+ mode for writing and reading of a file.

 ```c

# include <stdio.h>

# include <conio.h>

# include <process.h>

void main()

{

FILE *fp;

char c=’ ‘;

clrscr();

fp=fopen(“data.txt”,“w+”);

if(fp==NULL)

{

  printf(“Can not open file”);

  exit(1);

}

printf(“Write data & to stop press ‘.’ :”);

while(c!=‘.’)

{

  c=getche();

  fputc(c,fp);

}

rewind(fp);

printf(“\n Contents read :”);

while(!feof(fp))

printf(“%c”,getc(fp));

}
```
OUTPUT:
```
Write data & to stop press ‘.’: ABCDEFGHIJK.

Contents read : ABCDEFGHIJK.
```
## Write a program to open a file in append mode and add new records in it.

 
```c
# include <stdio.h>

# include <conio.h>

# include <process.h>

void main()

{

FILE *fp;

char c=‘ ’;

clrscr();

fp=fopen(“data.txt”,“a+”);

if(fp==NULL)

{

  printf(“Can not open file”);

  exit(1);

}

printf(“Write data & to stop press ‘.’ :”);

while(c!=‘.’)

{

  c=getche();

  fputc(c,fp);

}

printf(“\n Contents read :”);

rewind(fp);

while(!feof(fp))

printf(“%c”,getc(fp));

}
```
OUTPUT:
```
Write data & to stop press ‘.’ : This is append and read mode.

Contents read : This is append and read mode.
```

## Write a program to open a text file and write some text using fprintf() function. Open the file and verify the contents.

 
```c
# include <stdio.h>

# include <conio.h>

void main()

{

FILE *fp;

char text[30];

fp=fopen(“Text.txt”,“w”);

clrscr();

printf(“Enter Text Here :”);

gets(text);

fprintf(fp,“%s”,text);

fclose(fp);

}
```
OUTPUT:
```
Enter Text Here: Have a nice day.
```
##  Write a program to read the contents of the file using getc() function.

```c 

# include <stdio.h>

# include <process.h>

# include <conio.h>

void main()

{

FILE *f;

char c;

clrscr();

f=fopen(“list.txt”,“r”);

if(f==NULL)

{

  printf(“\nCannot open file”);

  exit(1);

}

while((c=getc(f))!=EOF)

printf(“%c”,c);

fclose(f);

}
```
OUTPUT:
```
aman

akash

amit

ajay

ankit
```
## Write a program to write some text into the file using putc() function.

 ```c

# include <stdio.h>

# include <conio.h>

void main()

{

int c;

FILE *fp;

clrscr();

printf(“\n Enter Few Words ‘*’ to Exit\n”);

fp=fopen(“words.doc”,“w”);

while( (c=getchar())!=‘*’)

putc(c,fp);

fclose(fp);

}
```
OUTPUT:
```
Enter Few Words ‘*’ to Exit

This is saved into the file *
```

## Write a program to read a C program file and count the following in the complete program:

* Total number of statements.
* Total number of included files.
* Total number of blocks and brackets.
 
```c
# include <stdio.h>

# include <conio.h>

void main()

{

FILE *fs;

int i=0,x,y,c=0,sb=0,b=0;

clrscr();

fs=fopen(“PRG2.C”,“r”);

if (fs==NULL)

{

  printf(“\n File opening error.”);

  exit(1);

}

while((x=fgetc(fs))!=EOF)

{

  switch(x)

  {

    case ‘;’ :

    c++;

    break;

    case ‘{’ :

    sb++;

    break;

    case ‘(’ :

    b++;

    break;

    case ‘#’ :

    i++;

    break;

  }

}

fclose (fs);

printf(“\n Summary of ‘C’ Program\n”);

printf(“=========================”);

printf(“\n Total Statements : %d ”,c+i);

printf(“\n Include Statements : %d”,i);

printf(“\n Total Blocks {} : %d”,sb);

printf(“\n Total Brackets () : %d”,b);

printf(“\n==========================”);

}
```
OUTPUT:
```
Total Statements : 25

Include Statements : 4

Total Blocks {} : 5

Total Brackets () : 25
```
## Write a program to write text to a file using fputc() function.

 ```c

# include <stdio.h>

# include <conio.h>

void main()

{

FILE *fp;

char c;

clrscr();

fp=fopen(“lines.txt”,“w”);

if(fp==NULL)

return;

else

{

  while( (c=getche())!=‘*’)

  fputc(c,fp);

}

fclose(fp);

}
```
OUTPUT:
```
United States is my country *

```








