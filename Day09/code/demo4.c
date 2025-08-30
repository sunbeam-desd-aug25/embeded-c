#include<stdio.h>
/*
//Local/ Auto variable
/*
   Storage classes:
   	- tells about two things of variables
		- life - existence of variable in memory
		- scope - where we can access that varible
	- Block is a number of statements enclosed in curly braces

	- There are 4 storage classes in C
		1. Auto/local
			keyword - auto
			storage - stack
			default value - garbage
			life - block
			scope - block
		- precedence is always given to a local variable
		- if variable is not found then it is searched into its immediate outer block

		2. Register
			keyword - register
			storage - cpu register
			default value - garbage
			life - block
			scope - block

		3. Global/extern
			keyword - extern
			storage - data section
			default value - zero
			life - program
			scope - program

		4. Static
			keyword - static
			storage - data section
			default value - zero
			life - program
			scope - limited

   */

/*
    Topic: auto (local) variables

    Properties:
        - Location -> Stored in STACK
        - Initial value -> Garbage (if not initialized)

    Scope Rule:
        - A variable is accessible only inside the block { } where it is declared.
        - Once the block ends, the variable is destroyed.
*/

int main()
{
    auto int num1;   // local (auto) variable
    int num;         // same as auto int (default storage class)

    // Will print garbage value (since num1 is not initialized)
    printf("num1 = %d \n", num1);

    {
        // Block - 1
        int n1 = 10;  // local variable
        printf("Block-1 : n1 = %d \n", n1); // 10

        {
            // Block - 2
            int n2 = 20;  // local variable
			// n1 is accessible here (inner block can access outer block's variables) 
			// but n2 is not accessible in Block-1 (outer block cannot access inner block's variables)
            printf("Block-2 : n1 = %d  n2 = %d \n", n1, n2); // 10  20

            {
                // Block - 3
                int n3 = 30;  // local variable
                printf("Block-3 : n1 = %d  n2 = %d  n3 = %d \n", n1, n2, n3);
                // Output: 10  20  30
            }

            // ERROR: n3 is not accessible here (out of scope)
            // printf("Block-2 : n3 = %d \n", n3);
        }

    }

    // ERROR: n1 is not accessible here (out of scope)
    // printf("n1 = %d \n", n1);

    return 0;
}
