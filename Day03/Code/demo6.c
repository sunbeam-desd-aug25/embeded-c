#include<stdio.h>
/*
	
	%d => decimal
	%o => Ocatal
	%x => Hexadecimal
*/

int main()
{
	int num1 = 65;
	printf("Decimal : %d \n",num1); // 65
	printf("Octal   : %o \n",num1);// 101
	printf("Hexadecimal : %x ",num1);// 41

    //Octal and Hexadecimal number representation in C

	int num2=0101; // if any number start with 0 => octal number
	printf("num  : %o \n", num2);// 101
	printf("num2 : %d \n",num2); // 65
	printf("num2 : %x \n",num2);// 41

	int num3 = 0x41;//if any number start with 0x => hexadecimal number
	printf("num3 : %x \n",num3); // 41
	printf("Num3 : %d \n",num3); // 65
	printf("Num3 : %o \n",num3); // 101

	return 0;
}














