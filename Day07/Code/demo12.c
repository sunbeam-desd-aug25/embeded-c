#include<stdio.h>

/*
        Function = reusable block of code.
        Instead of rewriting the same scanf + add + printf logic in main(),
        we just call addition(); wherever needed.

        void return type => function does not return any value, only prints.

        Multiple calls => each time, it asks for new inputs and prints the result
*/


// 1. Declaration
void addition (void);

int main()
{
    

    addition(); // function call 1
    addition(); // function call 2
    addition(); // function call 3

    return 0;
}

// 2. Function definition
void addition(void)
{
    int n1, n2, res;
    printf("Enter num1 and num2 : ");
    scanf("%d%d", &n1, &n2);
    res = n1 + n2; 
    printf("res = %d \n", res);
}
