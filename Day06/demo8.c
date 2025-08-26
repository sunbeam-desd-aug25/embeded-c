#include<stdio.h>
/*
	switch
		- It is a keyword
		- It is used to select one option from multiple options
		- It is an alternative to if...else if...else ladder
		- It is used when we have to select one option from multiple options based on single variable value

		- Syntax :
			switch( expression/variable )
			{
				case constant1 : statements;
						 break;
				case constant2 : statements;
						 break;
				...
				...
				default : statements;
					  break;
			}

		

*/


//Print num of days in a given  month
int main()
{
	int month;
	printf("Enter the month : ");
	scanf("%d",&month); // 13

	switch ( month ) 
	{
		case 1 : printf("Jan -> 31 Days \n");
			break;
		case 2: printf("Feb ->  28/29 \n");
			break;
		case 3 : printf("March -> 31 Days \n");
			break ;
			//..
			//..
		default :printf("Invalid Month enter..\n");
			break;
	}

	return 0;
}











