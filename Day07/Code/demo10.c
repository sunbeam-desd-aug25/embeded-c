#include<stdio.h>

/*
    Program: Demonstration of 'goto'
    --------------------------------
    Syntax:
        LABEL:
            // statements
            goto LABEL;

    Key Points:
    - goto jumps control to the LABEL.
    - Labels must be unique.
    - Labels are allowed only inside functions.
    - You cannot declare variables immediately after a label.
*/

// Print numbers 1 to 10 using goto

// 1. Label outside a function is not allowed
    // HERE:    //ERROR

int main()
{
    int i = 1;   // initialize counter

    HERE:   // label
    printf("%d\n", i);  // print number
    i++;

    if(i <= 10)
        goto HERE;      // jump back to label

	// 2. Duplicate labels not allowed
    // HERE:
    //     printf("Again\n");  // Error: redefinition of label 'HERE'

	/*

    3. Variable declaration immediately after a label is not allowed
    XYZ:
        int x = 10;   // Error: declaration not allowed after label
        printf("%d", x);
		goto XYZ;
    */

    return 0;
}
