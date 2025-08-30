#include<stdio.h>

/*
    Program: Print number in Binary using recursion

    Example:
        Input  : 10
        Output : 1010

    Logic:
        - Divide the number by 2 recursively
        - Print the remainder (num % 2) while backtracking
        - This way, binary digits come out in the correct order
*/

// Function Declaration
void print_bin_rec(int);

int main()
{
    int num = 10;   // You can also take input from user
    printf("Binary of %d = ", num);

    // Recursive function call
    print_bin_rec(num);

    printf("\n");
    return 0;
}

// Function Definition
void print_bin_rec(int num)
{
    // Recursive step: keep dividing until num reduces to 1
    if(num > 1)
        print_bin_rec(num / 2);

    // Print remainder (either 0 or 1)
    printf("%d", num % 2);
}
// Explanation of recursion:
/*
	print_bin_rec(10)
	= print_bin_rec(5)
		= print_bin_rec(2)				
			= print_bin_rec(1)		// Base case reached here, starts backtracking
				= print 1			// prints 1 (from 1 % 2)
			= print 0				// prints 0 (from 2 % 2)
		= print 1					// prints 1 (from 5 % 2)
	= print 0						// prints 0 (from 10 % 2)
	Final Output: 1010
*/