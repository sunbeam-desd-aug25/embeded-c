#include<stdio.h>

/*
    Topic: static storage class

    Properties:
        - Initial value : 0 (if not initialized explicitly)
        - Location      : Data Section (not stack)
        - Scope         : Depends (local/global/function)
        - Lifetime      : Entire program

    Types:
        1. static local variable
        2. static global variable
        3. static function
*/

// Example: static local variable
void fun(void)
{
    static int num1 = 10; // Initialized only once (persists across calls)

    num1++;               // num1 is incremented and retains new value for next call

    printf("num1 : %d \n", num1);
}

int main()
{
    fun();  // First call  num1 = 11
    fun();  // Second call  num1 = 12
    fun();  // Third call  num1 = 13

    // printf("num1 : %d \n", num1); // Error: num1 is local to fun()

    /*
    // Example: static local with initialization error
		static int num = 10;     // OK
		int n1 = 10;
		static int num = n1;     // Error: cannot initialize static with non-constant

	// But assigning later is OK
		static int num;
		num = n1;   // OK
		num = 10;   // OK
    */

    /*
    // Example: using static with input
		static int num;
		printf("Enter the num: ");
		scanf("%d", &num);   // Works fine
		printf("num = %d \n", num);
    */

    return 0;
}
