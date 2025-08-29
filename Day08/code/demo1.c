#include<stdio.h>

/*
Topic: Functions in C

1. Function Declaration
   - To inform the compiler about the function (its name, return type, and parameters).
   Syntax:
        <return_type> <function_name>(<types of formal arguments>);

2. Function Definition
   - Where we write the actual logic/body of the function.
   Syntax:
        <return_type> <function_name>(<list of formal arguments>)
        {
            //statements of function
        }

3. Function Call
   - Used to execute the function body.
   Syntax:
        function_name();

----------------------------------------------------------
Types of Functions based on Input (i/p) and Output (o/p):

A. Function does NOT accept input and does NOT return output  
B. Function accepts input but does NOT return output  
C. Function does NOT accept input but RETURNS output  
D. Function accepts input and RETURNS output  

----------------------------------------------------------
Example Program: Function to print a message on console
*/

// 1. Function Declaration
// <return_type> <function_name>(<data types of formal arguments>);

void print_msg(void);
/*
void      => return type (means function does NOT return any value)
print_msg => function name
(void)    => function does NOT accept any arguments
*/


// Entry point of program
int main()
{
    // 3. Function Call
    print_msg();   // function called first time
    print_msg();   // function called second time

    // main() is the calling function
    // print_msg() is the called function

    return 0; 
}


// 2. Function Definition
// Actual logic of function is written here
void print_msg(void)
{
    printf("Good Morning..\n");
    printf("Sunbeam DESD..\n");

    // Inside print_msg():
    // print_msg() is the calling function
    // printf() is the called function
}
