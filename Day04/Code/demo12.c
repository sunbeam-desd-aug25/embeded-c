#include<stdio.h>

/*
	Logical Oprator
	 -Logical Opr output gets in True or False
	 - True =  1 [ Othere than 0 every value is true  ( +ve / -ve )]
	 - False = 0

	 - Logical AND => &&
		Truth Table
		A	B	Y
		0       0      False
		0       1      False
		1       0      False
		1       1      True

		-If any one operand is False then output is False
		-If both operands are True then output is True
		-In Logical AND if 1st operand is False then 2nd operand is not checked
		Or
		- In Logical AND if 1st operand is True then 2nd operand is checked

	 - Logical OR  => ||
		
	 - Logical NOT => !


*/


int main()
{
	int res, n1=10 , n2 = 0;
/*
	res = n1 && n2 ; // False
	printf("n1 = %d n2 = %d res= %d \n ",n1,n2,res);
	//		   10      0          0

	res = n2 && n1 ; //  False
	//    0  && 10 ; -> False
	printf("n1 = %d n2 = %d res= %d \n ",n1,n2,res);
	//		   10      0          0

	res = n2++ && n1 ; //
	//    0++  && 10
	//    0    && 10 -> False
	printf("n1 = %d n2 = %d res= %d \n ",n1,n2,res);
	//		   10      1          0

	res =  n1  &&  ++n2 ;
        //     10  &&  ++0 ;
	//      10     1
	//     T   &&  T  -> True
	printf("n1 = %d n2 = %d res= %d \n ",n1,n2,res);
	//		   10      1          1

	res = ++n1 && n2++ ;
	//    ++10 && 0++
	//    11   && 0
	//    T    && F -> False
	printf("n1 = %d n2 = %d res= %d \n ",n1,n2,res);
	//		   11      1          0


	res = n2++ && ++n1 ; 
	//    0++ &&  ++10 - > Fasle 
	//    0
	//    F   &&  XXX
	//    1       10
	printf("n1 = %d n2 = %d res= %d \n ",n1,n2,res);
	//		   11      1          0

*/
	//	res = 0  && (n2= 20) ; 
	//    F      XXX
	//printf("n1 = %d n2 = %d res= %d \n ",n1,n2,res);
	//		   10       0          0

	res =  (n2 = 20) && 0;
	printf("n1 = %d n2 = %d res= %d \n ",n1,n2,res);
	//           10       20          0



/*
	res = 10 && 0 ; 
	//    T && F -> False(0)
	printf("Res = %d  \n",res); // 0
	
	res = 0 && 10;
	//   F  && T -> False
	printf("Res = %d  \n",res); // 0

	res = 10 && 10;
	//    T  && T -> True
	printf("Res = %d  \n",res); // 1

	res = 10 && 20 && 0 ;
	//    10 * 20  * 0 => 0
	//    T  * T   * F => False 
	printf("Res = %d  \n",res); // 0
*/
	return 0;
}




