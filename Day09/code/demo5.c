#include<stdio.h>

// Function definition
void fun(void)
{
    // ERROR: 'num' is not declared in this scope
    // 'num' exists only inside main(), not here
    //printf("num : %d \n", num);// error
}

int main()
{
    int num = 10;   // local variable (scope is only inside main)

    fun(); // Call function

    return 0;
}
// Explanation:
/*
	In the above program, 'num' is declared inside main() function.	
	So, 'num' is a local variable of main() and its scope is only inside main().
	When we try to access 'num' inside fun(), it gives an error because 'num' is not declared in fun() 
	and fun() cannot access variables of main().
	Each function has its own scope and cannot access local variables of other functions.
*/