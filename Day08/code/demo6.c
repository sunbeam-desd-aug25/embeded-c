#include<stdio.h>

/*
C. Function does NOT accept input (i/p) but RETURNS a value (o/p)

Important Notes:
- A function can return ONLY ONE value at a time.
- The return type in declaration/definition must match the type of value returned.

Steps:
    1. Function Declaration
       <return_type> <function_name>(<void>);

    2. Function Definition
       <return_type> <function_name>(void)
       {
            //statements
            return value;   // value is returned to calling function
       }

    3. Function Call
       variable = function_name();  // store returned value
*/


// 1. Function Declarations
int accept(void);        // returns int, accepts nothing
char accept_char(void);  // returns char, accepts nothing


int main()
{
    int num;
    // 3. Function Calls
    num = accept();  // function returns int value 10
    printf("num = %d \n", num);

    // Function call can be used directly inside printf
    printf("accept() returned : %d \n", accept());

    char ch;
    ch = accept_char();  // function returns char value 'A'
    printf("ch = %c \n", ch);

    printf("accept_char() returned : %c \n", accept_char());

    return 0;
}


// 2. Function Definitions
int accept(void)
{
    return 10;  // returns integer 10
}

char accept_char(void)
{
    return 'A'; // returns character 'A'
}
