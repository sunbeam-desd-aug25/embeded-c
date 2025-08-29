#include<stdio.h>

/*
Program: Function to calculate power of a given base and index
Example: 2^3 = 2 * 2 * 2 = 8
*/

// Function declarations
int accept(void);             // reads an integer and returns it
int my_power(int, int);       // calculates power
void print(int res);          // prints the result


// Function to print result
void print(int res)
{
    printf("Power = %d\n", res);
}


int main()
{
    int base, index, power;

    // Accept inputs
    base = accept();   // read base
    index = accept();  // read index

    // Function Call
    power = my_power(base, index);  // e.g., 2^3

    // Print result
    print(power);

    return 0;
}


// Function to calculate power
// base^index => multiply base 'index' times
int my_power(int b, int i)
{
    int j, res = 1;

    // Loop runs 'i' times
    for(j = 1; j <= i; j++)
    {
        res = res * b;
        /*
        Example: b=2, i=3
        j=1 → res = 1 * 2 = 2
        j=2 → res = 2 * 2 = 4
        j=3 → res = 4 * 2 = 8
        */
    }

    return res;  // final result returned to main()
}


// Function to accept integer input from user
int accept(void)
{
    int n1;
    printf("Enter the number: ");
    scanf("%d", &n1);
    return n1;
}
