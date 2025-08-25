#include<stdio.h>


int main()
{
	int a = 10 , b = 20 , c= 0,res ;

	//-------------------------->
	//Left----------->Right
	
	//    a || (b && c )
	//   op1||  op2
	//    T ||  XXXXX
	res = a ||  b && c ;
	//   10 ||  20 && 0
	
	printf("res = %d \n ",res );
	//----------------------->
	
	res = 5 + 3 * 2 / 3 - 4 ;
	//  = ((5 +((3 * 2) / 3)) - 4)
	printf("res = %d \n ",res ); 


	res = 5 - 3 / 2 * 3 + 4 ;
	//  = (( 5 -((3/2)*3)) + 4 )
	printf("res = %d \n ",res ); 
}
