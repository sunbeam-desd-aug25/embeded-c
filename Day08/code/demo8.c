#include<stdio.h>

// Function Declarations
void fun(void);            // no input, no return
void fun1(char, int);      // input: char + int, no return


int main()
{
    fun();   // calling fun()

    // invalid: fun() is void, so it cannot return int
    // int num = fun();  
    // printf("num = %d\n", num);

    fun1(65, 65); // passing ASCII value of 'A' and 65

    return 0;
}


// Function Definition
void fun(void)
{
    printf("One\n");
    printf("Two\n");

    // invalid: cannot return value from void function
    // return 1;    

    return;   // just ends the function

    // unreachable code: this will never execute
    // printf("Three\n");
}


void fun1(char ch, int n1)
{
    printf("ch = %c  n1 = %d\n", ch, n1);
}
