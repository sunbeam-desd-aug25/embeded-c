#include<stdio.h>
/*
	Controll statment in C
	1.Decision Controll
		- if
		- if-else
		- if-else if-else
		- switch
	
	2.itrator/looping
		1.while
		2.for
		3.do while

	3. jump statment
		1.goto
		2.return
		3.continue
		4.break
*/

/*
	syntax of if
	if( condition )
	{
		//If block executes when condition is true
		statments;
	}
	//{ } is optional when if block has only one statment

	//----------------------------------------------------------------
	syntax of if-else
	if( condition )
	{
		//If block executes when condition is true
		statments;
	}
	else
	{
		//else block executes when condition is false
		statments;
	}
	//------------------------------------------------------------------
	syntax of if-else if-else
	if( condition1 )
	{
		//If block executes when condition1 is true
		statments;
	}
	else if( condition2 )
	{	
		//else if block executes when condition2 is true
		statments;
	}
	...
	...
	else
	{
		//else block executes when all condition1 and condition2 are false
		statments;
	}
*/


// check the num is +ve
int main()
{
	int num;
	printf("Enter the num : ");
	scanf("%d",&num);//10  , -20

/*
	//  10 > 0
	//   true
	//  -20 > 0
	if( num > 0  )
	{
		//{ } => block
		printf("Num is +ve : %d \n",num);
	}
	//  { } is optional when if block has only one statment
	//-->
*/
	return 0;
}








