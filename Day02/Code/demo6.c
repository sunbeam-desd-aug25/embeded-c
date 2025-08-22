#include<stdio.h>
/*
	sizeof()  => gives the size of data type
*/


int main()
{
	int n1;
	char c1;
	float f1;
	double d1;

	printf("int size : %u \n ",sizeof(n1));
	printf("Char size : %u \n ",sizeof(c1));
	printf("float size : %u \n ",sizeof(f1));
	printf("Double size : %u \n ",sizeof(d1));

	printf("int size : %u \n ",sizeof( int ));
	printf("Char size : %u \n ",sizeof(char));
	printf("float size : %u \n ",sizeof(float));
	printf("Double size : %u \n ",sizeof(double));

	
	printf("int size : %u \n ",sizeof( 5 ));  // 4
	printf("Char size : %u \n ",sizeof( 'A' )); // 1 Or 4 => 4
	printf("float size : %u \n ",sizeof( 3.142f ) );//4 
	printf("float size : %u \n ",sizeof( 3.142 ) );// 8 => By Default decimal number treat as Double
	printf("Double size : %u \n ",sizeof( 8.56 )); // 8

	return 0;
}





