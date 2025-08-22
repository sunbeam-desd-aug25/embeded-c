#include<stdio.h>

/*
	Type modifier
	-signed
		- by default all integer data types are signed
		- here we can store both +ve and -ve value
		- 
	-unsigned
		- all integer data types can be made as unsigned
		- if you want make variable as unsighned the the unsighned keyword in nesseray
		- here we can store only +ve value

*/

int main()
{
/*
	char ch = 'A';
	printf("ch : %c \n ",ch);// A
	printf("ch : %d \n ",ch);// 65
	printf("ch : %o \n ",ch); //101
	printf("ch : %x \n", ch); // 41
*/	
	char ch1 = 0 ;
	printf("ch1 : %d \n ",ch1);// 0
        ch1 = 127;
	printf("ch1 : %d \n ",ch1);// 127
	ch1=128;
	printf("ch1 : %d \n ",ch1);// -128
	
	ch1=129;
	printf("ch1 : %d \n ",ch1);// -127

	ch1=130;
	printf("ch1 : %d \n ",ch1);// -126
	
	return 0;
}



