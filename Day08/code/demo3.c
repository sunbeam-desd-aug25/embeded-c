#include<stdio.h>

/*
B. Function takes input (i/p) but does NOT return anything.

Syntax:
    1. Function Declaration
       <return_type> <function_name>(<list of argument data types>);

    2. Function Definition
       <return_type> <function_name>(<list of arguments>)
       {
            //statements..
       }

    3. Function Call
       function_name(pass actual arguments);
*/

// Example: Pass an integer number to function and print inside function

// 1. Function Declaration
void fun_1(int n1);


int main()
{
    int num1 = 10, num2 = 20, num3 = 30;	

    // 3. Function Calls
    // When we call the function, we pass inputs (called Actual Arguments)
    fun_1(num1);   // passing value of num1 (10)
    fun_1(num2);   // passing value of num2 (20)
    fun_1(num3);   // passing value of num3 (30)
    fun_1(10);     // directly passing constant 10

    return 0;
}


// 2. Function Definition
// (int n1) => Formal Argument
// During function call: Actual argument is copied into formal argument
void fun_1(int n1)
{
    printf("Value of n1 : %d\n", n1);

    // Modification inside function
    n1 = 100;

    // This change is LOCAL to the function only
    // It does not affect the actual variable in main()
}
