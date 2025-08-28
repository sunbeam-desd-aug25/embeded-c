#include <stdio.h>



int main()
{
    int n1, n2, result;

    // 1. Define enum for operations
    typedef enum
    {
        EXIT = 0,
        ADD = 1,
        SUB,
        MUL,
        DIV
    } OPERATION;   // typedef used so we can just write OPERATION instead of enum ...
    OPERATION choice; // variable of enum type

    do
    {
        // Menu Display
        printf("\n===== Calculator Menu =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", (int *)&choice); // read choice (cast to int pointer for enum)

        // Perform operation
        switch (choice)
        {
        case ADD:
            printf("Enter two numbers: ");
            scanf("%d %d", &n1, &n2);
            result = n1 + n2;
            printf("Result = %d\n", result);
            break;

        case SUB:
            printf("Enter two numbers: ");
            scanf("%d %d", &n1, &n2);
            result = n1 - n2;
            printf("Result = %d\n", result);
            break;

        case MUL:
            printf("Enter two numbers: ");
            scanf("%d %d", &n1, &n2);
            result = n1 * n2;
            printf("Result = %d\n", result);
            break;

        case DIV:
            printf("Enter two numbers: ");
            scanf("%d %d", &n1, &n2);
            if (n2 != 0)
            {
                result = n1 / n2;
                printf("Result = %d\n", result);
            }
            else
            {
                printf("Error: Division by zero not allowed!\n");
            }
            break;

        case EXIT:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != EXIT); // loop until user selects Exit

    return 0;
}
