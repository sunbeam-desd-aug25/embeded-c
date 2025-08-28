#include<stdio.h>

int main()
{
    /*
    Pattern 1: Right-angled Triangle
    Row = 4

    *
    * *
    * * *
    * * * *
    */
    int row=4,col;
    int i,j;
    for(i = 1 ; i <= row ; i++ )
    {
        for(j = 1 ; j <= i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    /*
    Pattern 2: Inverted Right-angled Triangle
    Row = 4

    * * * *
    * * *
    * *
    *
    */
    for(i = 1 ; i <= row ; i++)
    {
        for( j = row ; j >= i ; j-- )
        {
            printf("* ");
        }
        printf("\n");
    }

    /*
    Pattern 3: Pyramid (Left-spaced Triangle)
    Row = 4

          *
         * *
        * * *
       * * * *
    */
    row=4;
    for(i = 1 ; i <= row ; i++)
    {
        // Print spaces
        for(j = 1 ; j <= row-i ; j++ )
        {
            printf(" ");
        }
        // Print stars
        int k;
        for(k=1 ; k <= i ; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    /*
    Pattern 4: Hollow Rectangle
    Row = 4, Col = 6

    * * * * * *
    *         *
    *         *
    * * * * * *
    */
    row=4,col=6;
    for(i = 1 ; i <= row ; i++)
    {
        for(j=1 ; j <= col ; j++ )
        {
            // Boundary condition: first row, last row, first col, last col
            if(j == 1 || i == row || i == 1 || j == col )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        } 
        printf("\n");
    }
    
    return 0;
}
