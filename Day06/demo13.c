#include<stdio.h>

/*
	-for loop
		- It is used to execute a block of code repeatedly for fixed number of times
		- Syntax :
			for( init , init... ; condition , condition... ; modification, modification... )
			{
				block of code;
			}

		- Here init, condition and modification are optional
			- if init is not given then it will be consider as empty statement
			- if condition is not given then it will be consider as true
			- if modification is not given then it will be consider as empty statement

		- Here , (comma) operator is used to separate multiple init , condition and modification statements
			- Comma operator will evaluate all the expressions and return the value of last expression

		- Flow of for loop
			1. Init part will be executed only once at the begining of loop
			2. Condition part will be checked before each iteration of loop
				if condition is true then block of code will be executed otherwise loop will be terminated
			3. After execution of block of code, modification part will be executed
			4. Again condition part will be checked and so on...

*/

//Print the table of  given num
int main()
{

	int num = 6;
    int  i;
	for( i = 1 ; i <= 10 ;  ++i   )
	{
		printf("%d \n", i * num);
	}

	/*
	for( printf("Init \n"),  i = 1 ; printf("Con\n") , i<=5   ;   printf("Modf\n"), i++  )
	{
		printf("Block \n");
	}
	*/

	return 0;
}








