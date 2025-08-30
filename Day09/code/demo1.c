#include<stdio.h>

/*
    Program: Calculate factorial of a number using recursion

    Example:
        5! = 1 * 2 * 3 * 4 * 5
           = 120 

    Iterative way (for reference):
        fact = 1;
        for(i = 1 ; i <= 5 ; i++)
        {
            fact = fact * i;
        }

    Here we will use RECURSION instead of loop
*/

// 1. Function Declaration (Prototype)
int fact_rec(int);

int main()
{
    int num;

    // Input number from user
    printf("Enter the number: ");
    scanf("%d", &num);

    // Function call to calculate factorial using recursion
    int fact = fact_rec(num);

    // Output result
    printf("%d! = %d\n", num, fact);

    return 0;
}

// 2. Function Definition
int fact_rec(int num)
{
    // Base case: if num is 0 or 1, factorial = 1
    if(num == 0 || num == 1)   
        return 1;   

    // Recursive case: num * factorial of (num-1)
    else
        return num * fact_rec(num - 1);
}
// Explanation of recursion:
/*
	fact_rec(5)	
	= 5 * fact_rec(4)
			= 5 * (4 * fact_rec(3))
				= 5 * (4 * (3 * fact_rec(2)))
					= 5 * (4 * (3 * (2 * fact_rec(1))))
						= 5 * (4 * (3 * (2 * 1)))
							= 120
*/
