#include<stdio.h>

/*
D. Function accepts input (i/p) and RETURNS output (o/p)

Key points:
- Function can return only ONE value at a time.
- The return value is sent back to the calling function.
- You can pass arguments to a function and get back a result.
*/

// Function declarations
int accept_int(void);       // takes no input, returns an int
void print_res(int res);    // takes int input, prints it


int main()
{
    int n1, n2, res;

    // Get values from function
    n1 = accept_int();   // returns 10
    n2 = accept_int();   // returns 10 (again, since same function logic)

    printf("n1 = %d, n2 = %d\n", n1, n2);

    // Process values
    res = n1 + n2;

    // Print result
    print_res(res);

    return 0;
}


// Function Definition 1
// Reads a number from user and returns it
int accept_int(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n;   // returning the entered number
}


// Function Definition 2
// Accepts int value and prints it
void print_res(int res)
{
    printf("Result = %d\n", res);
}
// Note: This function does not return any value (void)