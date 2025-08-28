#include<stdio.h>

/*
    Program: PIN Verification using do-while loop
    ---------------------------------------------
    - The program keeps asking the user to enter a 4-digit PIN.
    - It compares the entered PIN with a predefined "master" PIN.
    - The loop continues until the correct PIN is entered.
    - Once the correct PIN is entered, the user successfully logs in.

    Key Point:
    - do-while is used because we want the code to run at least once 
      (user must be prompted at least one time).
*/

int main()
{
    int pass;               // Variable to store user-entered PIN
    int master = 1234;      // Predefined correct PIN

    // Loop until correct PIN is entered
    do
    {
        printf("Enter 4 digit PIN: ");
        scanf("%d", &pass);
        // Example: if pass = 1234, then loop will stop
    } while(pass != master);

    printf("Successfully logged in...\n");

    return 0;
}
