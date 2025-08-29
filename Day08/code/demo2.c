#include<stdio.h>

/*
Program: Function not accepting input (i/p) and not returning output (o/p)

Requirements:
    - We cannot pass data (i/p) to the function.
    - Function does not return any result (o/p).
    - Inside the function, read two numbers, add them, and print the result.
*/

// 1. Function Declaration
void addition(void);
/*
void      => return type (means function does NOT return any value)
addition  => function name
(void)    => function does NOT accept any arguments
*/


// Entry point of program
int main()
{
    // 3. Function Call
    addition();   // first call
    addition();   // second call

    return 0;
}


// 2. Function Definition
void addition(void)
{
    int n1, n2, res;

    printf("Enter 2 numbers : ");
    scanf("%d%d", &n1, &n2);   // input taken INSIDE the function

    res = n1 + n2;             // processing
    printf("Result = %d\n", res); // output printed INSIDE the function
}
