#include<stdio.h>

/*
	typedef
		- It is a keyword
		- It is used to create new name for existing data types
		- It is used to make code more redable

		- Syntax :
			typedef <existing_data_type>  <new_name> ;

*/


int main()
{
	int n1;
	typedef int INTIGER ;
	INTIGER n2,n3;

	typedef unsigned int UN ;
	UN n4,n5;

	typedef float Pointed_num ;
	Pointed_num f1,f2;

	float f3,f4;
	
	typedef char Character ;
	Character ch1,ch2;

	typedef double DOU ;
	DOU d1,d2;

	typedef unsigned char UC ;
	UC c1,c2;

	return 0;
}
