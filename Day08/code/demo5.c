#include<stdio.h>

// Example: Function that accepts char, int, float, double, and enum

// 1. Enum definition
enum rainbow { VOI, INDIG, BLU };  
// VOI=0, INDIG=1, BLU=2   (by default enums assign integer values)

enum rainbow clr1;  
// variable of type enum rainbow


// 2. Function Declaration
void fun2(char, int, float, double, enum rainbow);
/*
void          => return type (function does not return anything)
fun2          => function name
(char, int, float, double, enum rainbow) => list of argument types
*/


int main()
{
    clr1 = BLU;  // assigning enum value (BLU = 2)

    // 3. Function Call
    fun2('A', 10, 3.14f, 10.2, clr1);

    return 0;
}


// 4. Function Definition
/*
Note: formal arguments sequence must match with actual arguments sequence
*/
void fun2(char ch, int n1, float f1, double d1, enum rainbow clr1)
{
    printf("ch   : %c\n", ch);
    printf("n1   : %d\n", n1);
    printf("f1   : %.2f\n", f1);
    printf("d1   : %.2lf\n", d1);
    printf("clr1 : %d\n", clr1);  
    // Enums are internally represented as int
}
