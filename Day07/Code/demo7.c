#include<stdio.h>

/*
    Program: Demonstration of 'break' statement
    -------------------------------------------
    - break is a jump statement.
    - It is used to immediately exit from a loop (or switch).
    - Control jumps to the first statement after the loop/switch.

    Example:
    Print numbers from 1 to 10, but stop if i >= 5
*/

int main()
{
    int num = 10, i = 1;

    while(i <= num)
    {
        printf("i = %d \n", i);

        if(i >= 5)   // When i reaches 5 or more
        {
            break;   // Exit from the loop
        }
        i++;
    }

    // Loop ends here
    printf("Loop terminated using break\n");

    return 0;
}
