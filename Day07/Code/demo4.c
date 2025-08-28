

#include<stdio.h>

/*
    Program: Factorial using do-while loop
    --------------------------------------
    Example: num = 5

    1 * 2 * 3 * 4 * 5 = 120
    fact : 120

    Key Point:
    - do-while ensures the loop runs at least once
      (important if num = 0, factorial = 1).
*/

int main()
{
    int num, i = 1, fact = 1;

    // Input number from user
    printf("Enter the number: ");
    scanf("%d", &num);   // Example: 5

    // Factorial calculation using do-while
    do
    {
        printf("%d *", i);      // Display steps: 1 * 2 * 3 * ...
        fact = fact * i;        // Update factorial
		//120       24  * 5
	    //24        6  * 4
		// 6        2  * 3
	    // 2        1  * 2 
	    // 1        1  * 1	
		i++;//1->2->3->4->5->6  //// Move to next number
                            
    } while(i <= num);

    // \b removes last '*' and replaces with '='
    printf("\b= %d\n", fact);

    return 0;
}
