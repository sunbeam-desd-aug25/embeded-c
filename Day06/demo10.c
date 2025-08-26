#include<stdio.h>

int main()
{
/*
====================================================
 Rule 1: switch expression must be integer type
====================================================
    switch( 3.14f  )   // ERROR → float not allowed
    {
        case 3.14f : printf("Float"); // case must be int const
                      break;
    }
*/

/*
====================================================
 Rule 2: case labels must be constant expressions
====================================================
    int x = 1;
    switch(x)
    {
        case x : printf("X\n");   // ERROR → variable 'x' is not constant
                 break;
    }
*/

/*
====================================================
 Rule 3: case label must be constant expression
          (compile-time evaluable)
====================================================
    int x=10; 
    switch(x + 2) // switch expression OK (evaluates at runtime)
    {
        case x + 2 : printf("No"); // ERROR → x+2 not constant at compile-time
                      break;
    }
*/

/*
====================================================
 Rule 4: switch expression promotes to int
====================================================
    int x=10; 
    switch( 3.14 )  // float/double is promoted to int → switch(3)
    {
        case 10 + 2 :   // OK, 12 is a constant expression
            int y = 10; // ERROR → declaration not allowed directly in case
            printf("No");
            break;

        // case 2 : int z; //ERROR → same reason (declaration not allowed)
        //          break;
    }
*/

/*
====================================================
 Rule 5: char constants are valid
====================================================
    char ch = 'A';
    switch(ch)
    {
        case 'A' : printf("Ok");  //  OK
    }
*/

/*
====================================================
 Rule 6: case labels can be integer constant expressions
====================================================
    int x = 10 , res;
    switch( 1 )
    {
        case 10 - 9 : printf("OK \n"); //OK → 1
                      // no break → fallthrough

        case 10 * 2 : printf("ok-2");  //OK → 20
                      // no break → fallthrough

        // case 11 / 11 : printf("Ok \n"); //OK → 1 (DUPLICATE with case 10-9)  ERROR

        // case "ABC" : printf("OK"); //  ERROR → string literal not allowed
    }
*/


    return 0;
}
