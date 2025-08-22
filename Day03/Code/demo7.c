#include<stdio.h>
/*
	The following are the extended integer types in C:
	short => %hd  => 2 bytes
		- short int
	long  => %ld  => 8  bytes
		- long int
	long long => %lld => 8 bytes
		- long long int

*/
int main()
{
	short num = 10;
	printf("num : %hd \n",num); //10
	printf("sizeod short : %d \n",sizeof(num));
/*
	short int num2 ;//ok

	short char ch ; //error
	short float f1; // error
	short double d1; // error
*/
	long num3= 30;
	printf("long : %ld \n",sizeof(long));
	printf("num3 : %ld \n",num3);
/*
	long int num4; // ok
	long float f1;//  error
	long double d1; // ok
	long char ch ;// error
*/

	long long int  num4;
	printf("size of long long : %ld \n",sizeof(num4));

	//short short n1;//Error 
	//printf("sizeof short short : %ld \n",sizeof(n1));


}




