#include<stdio.h>

/*
	sizeof oprator
	-> it gives size of variable/data type/constant
	syntax : sizeof(<variable/data type/constant>);
	       : size is given in bytes
	
	int => 4 bytes
	char => 1 bytes
	float => 4 bytes
	double => 8 bytes

*/


int main()
{
	int num1;
	float f1;
	double d1;
	char ch;

	printf("size of int : %d \n",sizeof(int)); // 4
	printf("size of float : %d \n",sizeof(float)); // 4
	printf("size of double : %d \n",sizeof(double)); // 8
	printf("size of char : %d \n",sizeof(char)); // 1

	printf("size of num1 : %d \n",sizeof(num1)); // 4
	printf("size of f1 : %d \n",sizeof(f1)); // 4
	printf("size of d1 : %d \n",sizeof(d1)); // 8
	printf("size of ch : %d \n",sizeof(ch)); // 1

	printf("size of num1 : %d \n",sizeof(10)); // 4
	printf("size of f1 : %d \n",sizeof(3.14f)); // 4 // float constant
	printf("size of d1 : %d \n",sizeof(10.2)); // 8 // double constant
	printf("size of ch : %d \n",sizeof('A')); // 4 // character constant is treated as integer in C



	return 0;
}






