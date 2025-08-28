#include<stdio.h>

/*
    Program: Check if a number is prime or not
    ------------------------------------------
    - Prime number: A number greater than 1 that has only 2 factors:
      1 and itself.
    - Example: 2, 3, 5, 7, 11, 13...

    Key Point:
    - 'break' can only be used inside loops or switch.
      (not allowed directly in main or if-else).
*/

int main()
{
    int num, i, flag = 0;

    // Input number
    printf("Enter Num : ");
    scanf("%d", &num);   // Example: 24

    // Prime check starts
    i = 2;
    while(i <= num / 2)   // check divisors up to num/2
    {
        if(num % i == 0)  // if divisible
        {
            flag = 1;     // mark as not prime
            break;        // exit loop early
        }
        i++;
    }

    // Result
    if(flag == 0 )
    {
        printf("Num %d is Prime\n", num);
    }
    else
    {
        printf("Num %d is NOT Prime\n", num);
    }

    return 0;
}
