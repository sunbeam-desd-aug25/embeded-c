#include<stdio.h>

/*
Program: Function that accepts 3 integers as input and prints them.
         (Function with input but no return value)
*/

// 1. Function Declaration
void print_3_num(int, int, int);
/*
void           => return type (no value is returned)
print_3_num    => function name
(int,int,int)  => function accepts 3 integer arguments
*/


int main()
{
    // 3. Function Call
    // We must pass 3 integers (actual arguments), otherwise it will be an ERROR
    // print_3_num(10);  //  ERROR → function requires 3 inputs
    
    print_3_num(40, 50, 60);  
    // (40, 50, 60) => Actual arguments

    return 0;
}


// 2. Function Definition
// The values of actual arguments are copied into formal arguments
// So: n1 = 40, n2 = 50, n3 = 60
void print_3_num(int n1, int n2, int n3)
{
    printf("n1 : %d  n2 : %d  n3 : %d\n", n1, n2, n3);
}
