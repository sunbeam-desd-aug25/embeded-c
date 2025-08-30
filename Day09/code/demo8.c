#include<stdio.h>

int num1 = 10;    // Global variable (definition + initialization)

extern int num2;  // Pure declaration (tells compiler "num2 exists somewhere")

int main()
{
    int num1 = 100;   // Local variable shadows global num1
    printf("main : num1 = %d \n", num1);  // Prints 100 (local has priority)

    // num2 is not defined yet here, but compiler knows it exists (extern)
    // Its definition is given later in the program
    printf("main : num2 = %d \n", num2);  // Prints 50

    return 0;
}

int num2 = 50;   // Global variable (definition + initialization)
