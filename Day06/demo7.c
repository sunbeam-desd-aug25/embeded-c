#include<stdio.h>

int main()
{
    /*
    ===================================================
    Example 1: Normal enum → values start from 0
    ===================================================
    enum month {JAN ,FEB , MARCH , APRIL ,MAY ,JUNE ,JULY , AUG , SEPT ,OCT ,NOV , DEC };
    //          0     1     2       3      4     5      6     7      8     9    10    11
    */

    /*
    ===================================================
    Example 2: Starting enum from 1
    ===================================================
    enum month {JAN=1 ,FEB , MARCH , APRIL ,MAY ,JUNE ,JULY , AUG , SEPT ,OCT ,NOV , DEC };
    //           1      2      3       4     5     6      7     8      9    10   11    12
    */

    /*
    ===================================================
    Example 3: Simple enum with typedef
    ===================================================
    enum demo {ITEM1 , ITEM2 , ITEM3  };
    enum demo d1 , d2;
    typedef enum demo ED;    // "ED" is an alias for "enum demo"
    ED d2, d3;
    */

    /*
    ===================================================
    Example 4: Typedef in single line
    ===================================================
    typedef enum demo {ITEM1 , ITEM2 , ITEM3} ED; // ED is nickname
    ED d1,d2; // valid declarations
    */

    /*
    ===================================================
    Example 5: Enum with specific value assignment
    ===================================================
    enum demo {ITEM1 , ITEM2=12 , ITEM3};
    //           0         12        13
    */

    /*
    ===================================================
    Example 6: Duplicate values are allowed
    ===================================================
    enum demo {ITEM1 , ITEM2=12 , ITEM3, ITEM4=12 , ITEM5};
    //           0        12        13       12        13

    enum demo d1 , d2;
    d1 = ITEM2; // d1 = 12
    d2 = ITEM4; // d2 = 12
    printf("%d %d\n", d1, d2);  // Output: 12 12
    */

    /*
    ===================================================
    Example 7: Float not allowed in enum (error!)
    ===================================================
    // enum demo {ITEM1 , ITEM2=12.5f , ITEM3}; //  Not valid
    */

    /*
    ===================================================
    Example 8: Variable as value (NOT allowed)
    ===================================================
    int x=12;
    enum demo {ITEM1 , ITEM2=x , ITEM3}; //  Error
    */

    /*
    ===================================================
    Example 9: Assigning character constant
    ===================================================
    */
    enum demo {ITEM1 , ITEM2='A' , ITEM3 , ITEM4=12 , ITEM5};
    //            0       65           66       12       13
    // ITEM1 = 0   
    // ITEM2 = ASCII of 'A' = 65
    // ITEM3 = next number after ITEM2 → 66
    // ITEM4 = explicitly 12
    // ITEM5 = next after ITEM4 → 13

    enum demo d1 = ITEM1; // d1 = 0

    printf("%d %d\n", ITEM1, ITEM2);
    // Output: 0 65

    return 0;
}
