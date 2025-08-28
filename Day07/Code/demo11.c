#include<stdio.h>

/*
    Functions in C
    --------------
    1) Function Declaration (Prototype) – tells the compiler about the function.
       Syntax:
           <return_type> <function_name>(<formal_arguments>);

    2) Function Definition – actual logic of the function.
       Syntax:
           <return_type> <function_name>(<formal_arguments>)
           {
               // statements
           }

    3) Function Call – where the function is executed.
       Syntax:
           function_name(<actual_arguments>);
*/

// Function Declaration
void print_msg(void);   // 'void' means no return value, no parameters

int main()
{
    // Function Calls
    print_msg();   // 1st call
    print_msg();   // 2nd call

    return 0;
}

// Function Definition
void print_msg(void)
{
    printf("Inside the function...\n");
}
