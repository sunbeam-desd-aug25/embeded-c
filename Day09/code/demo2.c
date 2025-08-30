#include<stdio.h>

/*
    Program: Calculate power (base^index) using recursion

    Example:
        base = 2 , index = 3
        2^3 = 2 * 2 * 2 = 8

    Iterative way (for reference):
        pow = 1;
        for(i = 1 ; i <= index ; i++)
        {
            pow = base * pow;
        }

    Here we will use RECURSION instead of loop.
*/

// Function Declaration (prototype)
int power_rec(int base , int index);

int main()
{
    int base, index;

    // Input base and index (exponent)
    printf("Enter base and index: ");
    scanf("%d%d", &base, &index);

    // Function call to calculate power using recursion
    int pow = power_rec(base , index);

    // Output result
    printf("%d ^ %d = %d\n", base, index, pow);
    // Example: 2 ^ 3 = 8

    return 0;
}

// Function Definition
int power_rec(int base , int index)
{
    // Base case: any number raised to 0 is 1
    if(index == 0)
        return 1;

    // Another base case: number raised to 1 is the number itself
    else if(index == 1)
        return base;

    // Recursive case: base^index = base * base^(index-1)
    else
        return base * power_rec(base , index - 1);
}
// Explanation of recursion:
/*
	power_rec(2, 3)
	= 2 * power_rec(2, 2)				
		= 2 * (2 * power_rec(2, 1))		
			= 2 * (2 * 2)					
				= 8
*/