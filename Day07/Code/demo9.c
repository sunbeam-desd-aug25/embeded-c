#include<stdio.h>

/*
    Program: Demonstration of 'continue' statement
    ----------------------------------------------
    - 'continue' is used to skip the remaining statements 
      of the current iteration and jump to the next iteration.
*/

// Example 1: Show how continue skips statements
int main()
{
    int min = 1, max = 5;

    while(min <= max)
    {
        printf("One\n");
        printf("Two..\n");
        continue;              // Skip rest (i.e., "Three..")
        printf("Three...\n");  // This will never execute
        min++;
    }

    printf("\n--- Example 2: Print only even numbers from 1 to 10 ---\n");

    // Example 2: Print even numbers using continue
    int i;
    for(i = 1; i <= 10; i++)
    {
        if(i % 2 != 0)  // If number is odd
            continue;   // Skip printing odd numbers

        printf("%d ", i); // Only even numbers get printed
    }
    printf("\n");

    return 0;
}
