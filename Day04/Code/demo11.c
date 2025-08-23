#include<stdio.h>

/*
	Logical Oprator
	 -Logical Opr output gets in True or False
	 - True =  1 [ Othere than 0 every value is true  ( +ve / -ve )]
	 - False = 0

	 - Logical OR  => ||
		A    B       Y
		0    0       FAlse
		0    1       True
		1    0       True
		1    1       True
	- In Logical OR if 1st operand is True then 2nd operand is not checked
	Or
	- In Logical OR if 1st operand is False then 2nd operand is checked


*/


int main()
{
	int res, n1=10 , n2 = 0;
/*
	res = n1 || n2 ; // 
	//    10 || 0
	//    T     XX   -> True
	printf("N1 = %d  N2 = %d res = %d \n ", n1,n2,res);
	//          10      0        1


	res = ++n2 || ++n1 ; 
	//    ++0     ++10
	//     1     XXX
	printf("N1 = %d  N2 = %d res = %d \n ", n1,n2,res);
	//		  11      1        1

*/

	res = n2-- || ++n1;
	//    0--
	//    0
	//    F    || ++10
	//    F         T  -> T
	printf("N1 = %d  N2 = %d res = %d \n ", n1,n2,res);
	//          11      -1        1

/*	
	res = 10 || 20 ;// 1
	//    T     T -> True
	printf("res = %d \n",res);//1
	res = 0 || 20 ; // True
	printf("res = %d \n",res);//1
	res = 0 || 0 ; // False
	printf("res = %d \n",res);//0

*/
	return 0;
}














