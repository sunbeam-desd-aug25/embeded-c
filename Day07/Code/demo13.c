#include<stdio.h>

// Pass two values to function, perform addition, and print result inside function

// 1. Function declaration
//    Syntax: <return_type> function_name(parameter_list);
//    Here: void add(int, int);  → no return, but accepts 2 integer inputs
void add(int, int);

int main()
{
    /*
        Actual arguments = values we pass while calling the function.
        Example: add(10,20); → here 10 and 20 are actual arguments.
    */

    add(10, 20); // function call 1 (actual arguments = 10, 20)

    add(5, 6);   // function call 2 (actual arguments = 5, 6)

    int num1 = 50, num2 = 60;
    add(num1, num2); // function call 3 (actual arguments = variables)

    return 0;
}

// 2. Function Definition
//    Formal arguments = variables used inside function to receive values.
//    Example: add(int n1, int n2) → n1 and n2 are formal arguments.
//
//    Flow: 
//       add(10, 20)  → n1 = 10, n2 = 20
//       add(5, 6)    → n1 = 5,  n2 = 6
//       add(num1, num2) → n1 = 50, n2 = 60
void add(int n1, int n2)
{
    printf("n1 = %d, n2 = %d \n", n1, n2);

    int res = n1 + n2; // perform addition
    printf("res = %d\n", res); // print result
}
