Guided Program Explanation

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

