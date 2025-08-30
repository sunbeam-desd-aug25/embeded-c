#include<stdio.h>

/*
    Topic: register storage class

    Properties:
        - Initial value : Garbage (if not initialized)
        - Location      : CPU register (if available, else memory)
        - Lifetime      : Same as auto (local to the block)
        - Scope         : Local
        - Faster access compared to normal variables (since stored in CPU registers)

    Note:
        - You cannot have the address of a register variable (i.e., cannot use &a).
        - You cannot declare a global register variable.
*/

// register int b = 20; //Error: register variable cannot be global

void fun(void);

int main()
{
    register int a;   // register variable (local)
    printf("a = %d \n", a); // Garbage value (not initialized)

    printf("Enter the num : ");
    // scanf("%d", &a); // Error: cannot use & with register variable
    
	a = 10; // Assign value to register variable a
    printf("a = %d \n", a); // Prints updated value

    // printf("size : %ld \n", sizeof(a)); // Valid, size of int = 4 (typically)

	//------------------------------------------------------------------
	//nested blocks
	{
		register int var2 = 200; // valid (local register variable)
		printf("var2 = %d \n", var2);// 200
		{	
			register int var3 = 300; // valid (new variable)
			printf("var3 = %d \n", var3);// 300
		}
	}
	//-------------------------------------------------------------------
	// Call function
	fun();
	
    return 0;
}

void fun(void)
{
    register int var1 = 100;  // valid (local register variable)
    // var1 exists only inside this function
	printf("var1 = %d \n", var1);
}