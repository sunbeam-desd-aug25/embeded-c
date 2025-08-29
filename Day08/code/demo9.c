#include<stdio.h>

/*
D. Function accepts input (i/p) and RETURNS output (o/p)

Example: Function to return the square of a given integer number
*/

// 1. Function Declaration
int square(int);


int main()
{
    int num, res;

    printf("Enter a number: ");
    scanf("%d", &num);

    // 3. Function Call
    // num => actual argument
    res = square(num);

    printf("Square = %d\n", res);

    return 0;
}


// 2. Function Definition
// int n2 = num  => actual argument (num) copied into formal argument (n2)
int square(int n2)
{
    int res;

    res = n2 * n2;

    return res;   // returning the calculated square to main()
    
    // Examples of return:
    // return 8 * 8;      → returns 64
    // return n2 * n2;    → general case
}
