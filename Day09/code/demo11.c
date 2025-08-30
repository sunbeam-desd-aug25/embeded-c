#include<stdio.h>

/*
    Topic: Global static variable

    Properties:
        - Initial value : 0 (if not initialized explicitly)
        - Location      : Data Section
        - Scope         : Limited to the current file only (File scope)
        - Lifetime      : Entire program

    Difference from normal global:
        - Normal global : accessible across multiple files using extern
        - Static global : accessible only inside the same file
*/

// Global static variable (visible only in this file)
static int num = 10;  

void fun();

int main()
{
    num = num + 2;  
    printf("main : num = %d \n", num);  // 12

    fun(); // modifies same global static variable → 14
    fun(); // → 16
    fun(); // → 18

    return 0;
}

void fun()
{
    num = num + 2;   // modifies global static variable
    printf("fun : num = %d \n", num);  
}
