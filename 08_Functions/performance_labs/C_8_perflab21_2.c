// 5.39--> (recursive greatest common divisor) 
// 	The greatest common divisor of integers (x) and (y) is the largest integer 
//     that evenly divides both (x) and (y). Write a function (gcd) that returns 
//     the greatest common divisor of (x) and (y). 
// 	The (gcd) of (x) and (y) is defined recursively as follows: if (y) is 
//     equal to 0, then (gcd(x, y)) is (x); otherwise (gcd (x) and (y)) is 
//     (gcd (y, x % y)), where % is the remainder operator.
// 5.40--> (recursive main) 
// 	Can main be called recursively? Write a program containing a function   
//     (main). Include (static) local variable count initialized to 1. 
//     Post-increment and print the value of count each time main is called. 
//     What happens when your program runs?

// #include <stdio.h>
// //Recursion divides into eachother until there is no remainder(y==0)
// //x=10, y = 22; -> 22, 10> 10 2> 2 0>returns x=2
// int gcd(int x, int y){
//     if (y == 0){
//         return x;
//     }else{
//         return gcd(y, x % y);
//     }
// }

// int main(){
//     int num1 = 0;
//     int num2 = 0;

//     //Prompts user for 2 numbers
//     printf("Enter 2 numbers\n");
//     scanf("%d %d", &num1, &num2);
//     printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

//     return 0;
// }


#include <stdio.h>

int main(){
    //initialized but when modified, keeps the modified value
    static int count = 1;
    
    printf("%d\n", count++);
    //calls main until count hits 10
    if (count == 10){
        return 0;
    }else{
        main();
    }

    //return 0;
}
