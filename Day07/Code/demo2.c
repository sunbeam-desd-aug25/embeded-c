#include<stdio.h>

/*
    Example: do-while loop
    ----------------------
    - Exit-controlled loop (condition checked at the end)
    - Syntax:

        <initialization>;
        do
        {
            // statements
            // <modification>
        } while(<condition>);

    Key Point:
    - Loop body executes at least once, even if the condition is false.
*/

// Print the multiplication table of a given number
int main()
{
    int num = 8;   // Number for which table is printed

    // Initialization
    int i = 1;

    // do-while loop starts
    do
    {
        printf("%d x %d = %d\n", num, i, num * i);

        // Modification
        i++;
    } while(i <= 10);   // Condition

    return 0;
}
