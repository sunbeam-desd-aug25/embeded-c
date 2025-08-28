
#include<stdio.h>

/*
    Program: Prime Factorization using do-while loop
    ------------------------------------------------
    Example:
        num = 180

        Factors:
        2 * 2 * 3 * 3 * 5

    Explanation:
    - Start dividing num from i = 2.
    - If divisible, print i and divide num by i.
    - If not divisible, increase i.
    - Repeat until num becomes 1.
*/

int main()
{
    int num, i;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);   // Example: 180

    i = 2; // Start checking from smallest prime number
    do
    {
        if(num % i == 0)       // If divisible
        {
            printf("%d *", i); // 2 * 2 * 3 * 3 * 5 *
            num = num / i;     // Reduce number
			// Example: 180 / 2 = 90
        }
        else
        {
            i++;               // Try next divisor
			// Example: 2 -> 3 -> 4 -> 5 ...
        }
    } while(num != 1);         // Stop when number is reduced to 1

    // Remove last '*' and replace with newline
    printf("\b \n");

    return 0;
}


