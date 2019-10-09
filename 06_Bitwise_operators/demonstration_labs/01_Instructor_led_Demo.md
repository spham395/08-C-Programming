# Instructor Led Demos

1. Write a program to shift inputted data by two bits right.

 ```

void main()

{

int x,y;

clrscr();

printf(“Read The Integer from keyboard (x) :-”);

scanf(“%d”, &x);

x>>=2;

y=x;

printf(“The Right shifted data is = %d”,y);

}
```
OUTPUT:
```
Read The Integer from keyboard (x) :- 8

The Right shifted data is = 2
```
Before the execution of the program: The number entered through the keyboard is 8 and its corresponding binary number is 1 0 0 0.

![image](https://user-images.githubusercontent.com/47218880/66503920-c05b2d80-ea8d-11e9-8114-a0c4bebc4e89.png)

After execution of the program: As per the above-given program, the inputted data x is to be shifted by 2 bits right side. The answer in binary bits would be as follows:

![image](https://user-images.githubusercontent.com/47218880/66503954-d23cd080-ea8d-11e9-9299-3041feb230f0.png)

Shifting two bits right means the inputted number is to be divided by 2s where s is the number of shifts i.e. in short y=n/2s, where n = number and s = the number of position to be shift.

As per the program cited above, Y=8/2E2 = 2.

2.Write a program to shift inputted data by three bits left.

 
```c
void main()

{

int x,y;

clrscr();

printf(“Read The Integer from keyboard (x) :-”);

scanf(“%d”, &x);

x<<=3;

y=x;

printf(“The Right shifted data is = %d”,y);

}
```
OUTPUT:
```
Read The Integer from keyboard (x) :- 2

The Left shifted data is = 16
```
Before the execution of the program: The number entered through the keyboard is 2 and its corresponding binary number is 1 0. The bits will be as follows:

![image](https://user-images.githubusercontent.com/47218880/66504166-352e6780-ea8e-11e9-9444-68d7b78aac27.png)

After execution of the program: As per the above-given program, the inputted data x is to be shifted by 3 bits left side. The answer in the binary bits would be as follows:

![image](https://user-images.githubusercontent.com/47218880/66504203-47a8a100-ea8e-11e9-9e8c-f4b824f71f50.png)

The corresponding decimal number is 16, i.e. answer should be 16.

Shifting three bits left means the number is multiplied by 8; in short y=n*2s where n = number and s = the number of position to be shifted.

As per the program given above,

Y=2*2E3 = 16.

3. Write a program to use bitwise AND operator between the two integers and display the results.

```c 

void main()

{

int a,b,c;

clrscr();

printf(“Read The Integers from keyboard (a & b) :-”);

scanf(“%d %d”, &a,&b);

c=a & b;

printf(“The Answer after ANDing is (C)= %d”,c);

}
```
OUTPUT:
```
Read The Integers from keyboard (a & b) : 8 4

The Answer after ANDing is (C) = 0
```
Binary equivalent of 8 is

Before execution:

a=8

![image](https://user-images.githubusercontent.com/47218880/66504305-7b83c680-ea8e-11e9-9500-d302a62b349a.png)

b=4

Binary equivalent of 4 is

![image](https://user-images.githubusercontent.com/47218880/66504352-8f2f2d00-ea8e-11e9-81aa-11853d6288f6.png)

After execution

c=0

Binary equivalent of 0 is

![image](https://user-images.githubusercontent.com/47218880/66504383-9eae7600-ea8e-11e9-9b4c-dd7598b51144.png)

OR

Read The Integers through keyboard (a & b) : 8 8

The Answer after ANDing is (C) = 8

Before execution

a=8

Binary equivalent of 8
![image](https://user-images.githubusercontent.com/47218880/66504435-b0901900-ea8e-11e9-8cb2-8f20148afd0e.png)

Before execution

b=8

Binary equivalent of 8

![image](https://user-images.githubusercontent.com/47218880/66504480-c7cf0680-ea8e-11e9-8182-5fb3da8e9dbe.png)

After execution

c=8

Binary equivalent of 8

![image](https://user-images.githubusercontent.com/47218880/66504510-d74e4f80-ea8e-11e9-8ab4-c201a022a739.png)


The table for AND operation (Table A) is as follows and can be used in future for reference. Similarly, the table for OR operator (Table B) can be used as follows.
Table A for AND
![image](https://user-images.githubusercontent.com/47218880/66504634-2dbb8e00-ea8f-11e9-9d7c-8296b0fd4b46.png)

Table B for OR operator

![image](https://user-images.githubusercontent.com/47218880/66504660-390eb980-ea8f-11e9-8556-1e1bf8428ec9.png)

4. Write a program to operate OR operation on two integers and display the result.

 ```c

void main()

{

int a,b,c;

clrscr();

printf(“Read The Integer from keyboard (a & b) :-”);

scanf(“%d %d”, &a,&b);

c=a | b;

printf(“The Oring operation bewteen a & b in c = %d”,c);

getche();

}
```
OUTPUT:
```
Read The Integer from keyboard (a & b) :- 8 4

The Oring operation between a & b in c = 12
```
Before execution

a=8

Binary equivalent of 8

![image](https://user-images.githubusercontent.com/47218880/66505521-2b5a3380-ea91-11e9-8262-f5c919aba168.png)

Before execution

b=4

Binary equivalent of 4

![image](https://user-images.githubusercontent.com/47218880/66505567-3b721300-ea91-11e9-8a71-c6838cfe8bc4.png)

After execution

c=12

Binary equivalent of 12

![image](https://user-images.githubusercontent.com/47218880/66505623-52b10080-ea91-11e9-80e5-ee20e51246cf.png)

The table for Exclusive OR (XOR) is as follows 

 Table of exclusive OR
 
 ![image](https://user-images.githubusercontent.com/47218880/66505691-7411ec80-ea91-11e9-929f-0f659b711495.png)
 
5. Write a program with Exclusive OR Operation between the two integers and display the result.
```c
void main()

{

int a,b,c;

clrscr();

printf(“Read The Integers from keyboard (a & b) :-”);

scanf(“%d %d”, &a,&b);

c=a^b;

printf(“The data after Exclusive OR operation is in c= %d”,c);

getche();

}
```
OUTPUT:
```
Read The Integers from keyboard (a & b) : 8 2

The data after Exclusive OR operation is in c =10
```
Before execution

a=8

![image](https://user-images.githubusercontent.com/47218880/66505908-e1be1880-ea91-11e9-9990-b15acabdab51.png)

Before execution

b=2

![image](https://user-images.githubusercontent.com/47218880/66505917-e71b6300-ea91-11e9-8efa-33ff2e49e09d.png)


After execution

c=10

![image](https://user-images.githubusercontent.com/47218880/66505920-eaaeea00-ea91-11e9-8760-3390f5a33dad.png)


The table for bitwise complement-operator (Inverter Logic) is as follows Table Below
Table of inverter logic

![image](https://user-images.githubusercontent.com/47218880/66506065-39f51a80-ea92-11e9-975f-e26123d5fc9c.png)

The operator ~ is used for inverting the bits with this operator 0 becomes 1 & 1 becomes 0.

Write a program to show the effect of ~ operator.
```c
 

void main()

{

unsigned int v=0;

clrscr();

printf(“\n %u”, ~v);

}
```
OUTPUT:
```
65535
```

