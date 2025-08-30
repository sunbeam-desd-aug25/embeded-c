#include<stdio.h>

/*
    Topic: extern / global variables

    Properties:
        - Initial value : 0 (if not initialized explicitly)
        - Storage       : Data Section (not stack)
        - Scope         : Entire program (all functions can access it)
        - Lifetime      : Till program ends

    Notes:
        - Global variables are automatically extern.
        - They can be accessed in all functions without passing as arguments.
*/

// Global variables
int n1;        // uninitialized global → default value = 0
// int n2 = n1;  // Error: cannot initialize one global with another
int n2 = 20;   // initialized global → value = 20

// Function declaration
void fun(void);

int main()
{
	printf("n1 : %d \n", n1);  // Prints 0 (default value of uninitialized global)
	printf("n2 : %d \n", n2);  // Prints 20

    int num = 10;  // local variable (stack)
    // Assign local value to global
    n1 = num;   // global n1 now becomes 10

   

    /*
    printf("n1 : %d \n", n1); // Initially 0 (if not modified)
    fun();                    // Changes n1 to 10
    printf("n1 : %d \n", n1); // Now prints 10
    */

    return 0;
}

// Function definition
void fun()
{
    n1 = 10;  // Accessing and modifying global variable
}
