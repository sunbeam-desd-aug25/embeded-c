#include<stdio.h>

/*
    Recursion:
        - A function calling itself is called recursive function.
        - Always needs a terminating condition (base case),
          otherwise infinite recursion → stack overflow.
		
		  syntax:
		  void func()
		  {
		  	// base case
		  	if(condition)					
		  		return;	// stopping condition
			recursive_call();	// function calls itself
			// processing (after recursion returns back)		
		  }		
	 	
				
*/

// Function Declaration
void recursive_print(int);

int main()
{
    int num = 5;

    recursive_print(num);

    return 0;
}

// Function Definition
void recursive_print(int n1)
{
    // 1. Base Case (stopping condition)
    if(n1 < 1)
        return;

    // 2. Recursive Step
    recursive_print(n1 - 1); // function calls itself with smaller value

    // 3. Processing (after recursion returns back)
    printf("%d ", n1);
}

/*
--------------- WORKING for num = 5 ---------------

recursive_print(5)
    → calls recursive_print(4)
        → calls recursive_print(3)
            → calls recursive_print(2)
                → calls recursive_print(1)
                    → calls recursive_print(0)
                        → base case: return

Now recursion starts RETURNING back:
    print(1)
    print(2)
    print(3)
    print(4)
    print(5)

Output:
1 2 3 4 5
---------------------------------------------------
*/
