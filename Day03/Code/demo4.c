#include<stdio.h>
/*
Datatypes:
	- Builtin
		- primary datatypes
			- int        =>%d  =>Size 4 Byte
			- char       =>%c  =>Size 1 Byte
			- float      =>%f  =>Size 4 Byte
			- double     = %lf =>Size 8 Byte


	printf() - library function to print on console
		syntax:
			printf("format string", arg1, arg2, ...);
		format string - string containing text to be printed and format specifiers
		format specifiers - placeholders for variables to be printed
			%d  - for integer
			%c  - for character
			%f  - for float
			%lf - for double
*/

int main()
{
	int num1;// declaration + definition 
			 //  declaration of variable num1 of type int
	//printf("%d \n",num1) ; // grabage value ptrint

	num1=20; // assignment of value 20 to variable num1
	printf("%d \n",num1); // 20
	printf("Num1 : %d \n ",num1); 
    //     Num1  : 20




	int num = 10; //
	char ch = 'A' ;
	float f1 = 3.142 ;
	double d1 = 8.5612;
/*
	printf("%d \n",num); //here %d is format specifier
	printf(" %c \n",ch);
	printf(" %f \n",f1);
	printf(" %lf \n",d1);
*/
	
/*	printf("Num =  %d \n",num); //Num = 10
	printf("Char =  %c \n",ch);
	printf("Float =  %f \n",f1);
	printf("Double =  %lf \n",d1);
*/
	printf("Num = %d %d %d \n ", 10,20,30 ) ;
	printf("%d , %c , %f , %lf \n", num ,ch ,f1 , d1);

	return 0;
}
