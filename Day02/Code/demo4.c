#include<stdio.h>
/*
Datatypes:
	- Builtin
		- primary datatypes
			- int        =>%d  =>Size 4 Byte
			- char       =>%c  =>Size 1 Byte
			- float      =>%f  =>Size 4 Byte
			- double     = %lf =>Size 8 Byte

*/
int main()
{
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
