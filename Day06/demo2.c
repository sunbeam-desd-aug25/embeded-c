#include<stdio.h>

/*
	Ternery oprator/Conditional oprator
		- It is a short form of if else
		- It is a single line statement
		- Syntax :
			Condition ? True  : False ;

*/

int main()
{

	//Check num is even / Odd
	int num;
	printf("Enter a Num : ");
	scanf("%d",&num);
	/*
                   ( Condition)
		if(num % 2 == 0)
			even -> True
		else
			odd  -> false

	*/
	//condition ? True  : False ;
	num % 2 == 0 ?printf("Even num..\n")    : printf("Odd number..\n");
	//                     True                 False


	return 0;

}










