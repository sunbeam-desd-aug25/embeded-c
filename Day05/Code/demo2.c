#include<stdio.h>
/*
	Relational opr
	==  !=   >  <  >=  <=
	- All are binary oprs
	- All are left to right associative
	- Precedence is less than Arithematic oprs and greater than Logical oprs
	
*/
int main()
{
	int n1=10 , n2=20, res;
/*
	// <   => if Left value is less than Right value then op is True
	res= n1 < n2 ; // 10 < 20
	printf("Res = %d \n",res);//1
	
	// >   => if Left value is greater than Right value then op is True
	printf("10  > 20 : %d  \n ", 10 > 20 );// 0
    //       10  > 20 : 0

	// >=  if Left value is greater than or equal to Right value then op is True
	printf("10 >= 10 : %d \n ", 10>= 10 ); //1

	// <=  if Left value is less than or equal to Right value then op is True
	printf("10 <= 20: %d \n ", 10 <=20 ); //1


	// ==  (Equal to)
	//    L   == R => if both are equal then op is True
	//                if both are diff  then op is False
	res=  500 == 500;
	printf("res : %d \n ", res );// 1
	res= 500 == 1000;
	printf("res = %d \n", res);// 0	


*/
	// != (Not Equal to)
	// !=   => if Both value are Diff then op is True
	//	=> if both values are same then op is False
	// L != R

	res = 10 != 20 ;
	printf("res = %d \n ", res); // 1
	
	res = 60 != 60;
	printf("res= %d \n", res);// 0 

	//res = 10.02 != 5.5 ;//error due to float
	return 0;
}






