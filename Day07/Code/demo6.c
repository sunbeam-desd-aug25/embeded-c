#include<stdio.h>
#include<math.h>

/*
    Program: Menu-driven number operations
    --------------------------------------
    Accept a number from the user and perform operations:

    0. Exit
    1. Sum of digits
    2. Print reverse of number
    3. Check palindrome
    4. Check Armstrong number

    Concepts used:
    - do-while loop (menu repeats until exit)
    - enum for menu choices
    - switch-case for multiple operations
*/

int main()
{
    typedef enum choice {EXIT ,SUM_DIGIT , REV , PALIN , ARM }CHOICE;
    //                      0       1        2      3      4

    CHOICE ch;

    do
    {
        int num, rem, sum = 0, rev = 0, arm = 0, temp = 0, count = 0;

        // Input number
        printf("\nEnter the number: ");
        scanf("%d", &num);

        // Display menu
        printf("\n==== MENU ====\n");
        printf("0. Exit\n");
        printf("1. Print Sum of Digits\n");
        printf("2. Print Number in Reverse\n");
        printf("3. Check Palindrome\n");
        printf("4. Check Armstrong\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case EXIT:
                printf("Bye Bye...\n");
                break;

            case SUM_DIGIT:
                temp = num;
                sum = 0;
                while(temp != 0)	
                {
                    rem = temp % 10;
                    sum = sum + rem;
                    temp = temp / 10;
                }
                printf("Sum of digits = %d\n", sum);
                break;

            case REV:
                temp = num;
                rev = 0;
                while(temp != 0)
                {
                    rem = temp % 10;
                    rev = rev * 10 + rem;
                    temp = temp / 10;	
                }
                printf("Reverse = %d\n", rev);
                break;

            case PALIN:
                temp = num;
                rev = 0;
                while(temp != 0)
                {
                    rem = temp % 10;
                    rev = rev * 10 + rem;
                    temp = temp / 10;	
                }
                if(rev == num)
                    printf("Number is Palindrome\n");
                else
                    printf("Not a Palindrome\n");
                break;

            case ARM:
                temp = num;
                count = 0;

                // Count digits
                while(temp != 0)
                {
                    count++;
                    temp = temp / 10;
                }

                // Reset values
                temp = num;
                arm = 0;

                // Armstrong calculation
                while(temp != 0)
                {
                    rem = temp % 10;
                    arm = arm + pow(rem, count);
                    temp = temp / 10;
                }

                if(num == arm)
                    printf("Number is Armstrong\n");
                else
                    printf("Not an Armstrong number\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(ch != EXIT);

    return 0;
}
