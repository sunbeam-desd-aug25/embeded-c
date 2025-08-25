#include<stdio.h>

/*
	Assignment Opr
	+=  -=  *=  /=  %=
	- All are binary oprs
	- All are right to left associative
	- Precedence is less than Arithematic oprs and greater than Relational oprs
	
*/

int main()
{
	// += is used to add and assign value to variable  
	int n1 = 10,res;
	n1 +=5 ; // n1 = n1 + 5
	printf("res = %d \n", n1);//15

	// -= is used to subtract and assign value to variable
	n1 -= 10 ; // n1 = n1 - 10
		       //      15 -10
		       //      5
	printf("res = %d \n", n1);//5

	// *= is used to multiply and assign value to variable
	n1 *= 4 ; // n1 = n1 * 4
	          //      5 * 4
	          //      20
	printf("res = %d \n", n1);//20

	// /= is used to divide and assign value to variable
	n1 /= 5 ; // n1 = n1 / 5
	          //      20 / 5
	          //      4
	printf("res = %d \n", n1);//4

	// %= is used to get remainder and assign value to variable
	n1 %= 3 ; // n1 = n1 % 3
	          //      4 % 3
	          //      1
	printf("res = %d \n", n1);//1

	//n1 %= 0 ; // error due to divide by zero
	//n1 /= 0 ; // error due to divide by zero	
	

	return 0;
}
