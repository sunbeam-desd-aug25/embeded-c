#include<stdio.h>

int main()
{
/*
    int n1 = 3;
	if (--n1,--n1,--n1);
		printf("Ok");
	else
		printf("Not ok");

	
    int n1 = 3;
	// --3
	//    2  --2
	//        1   --1  
	//              0 -> false
	if (--n1,--n1,--n1)
		printf("Ok\n");
	else
		printf("Not ok \n");
*/

	//Here printf() returns number of char printed on screen
	//printf("") -> 0
	//printf("Hello") -> 5
	//printf("Desd")  -> 4
	//printf("A")     -> 1

	int n1 = 2;
	//     if ( 2 )
	if ( !(printf(""))  )
		printf("Hello\n");
	else
		printf("Desd\n");
	return 0;
	
}













