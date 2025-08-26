#include<stdio.h>

/*
    Pattern Examples:
    1.
    *
    * *
    * * *
    * * * *
    --------------------------------
    2.
    * * * *
    * * *
    * *
    *
    --------------------------------
    3.
      *
     * *
    * * *
   * * * *
   ----------------------------------
   4.
   * * * *
    * * *
     * *
      *
    --------------------------------
*/

int main()
{
    /*
    Example 1:
    * 
    * *
    * * *
    * * * *
    */

    int i, j, row;
    printf("Enter Row : ");
    scanf("%d", &row);

    // Loop to print the first pattern
    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    /*
    Example 2:
    * * * *
    * * *
    * *
    *
    *
	
    /*
	fo

    for(i = 1; i <= row; i++)
    {
        for(j = row; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    */


    return 0;
}