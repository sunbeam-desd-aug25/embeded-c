#include<stdio.h>

/*
	Logical Oprator
	 -Logical Opr output gets in True or False
	 - True =  1 [ Othere than 0 every value is true  ( +ve / -ve )]
	 - False = 0

	 - Logical NOT => !
		! +ve[True] => False
		! -ve[True] => False 
		
		! 0 [False] => True
		-Here ! is used to reverse the state
			True -> False
			False -> True

*/


int main()
{
	int res, n2 = 0;
	
	printf("!n2 = %d \n", !n2);
	//             1
	n2 = 10;
	printf("!n2 = %d \n", !n2);
	//             0

	n2 = 0;
	!n2;//here !n2 is not stored anywhere so it is useless
	printf("n2 = %d \n", n2);//0

	n2 = 0;
	n2 = !n2;//here we are storing the output of !n2 into n2
	printf("n2 = %d \n", n2);//1



	return 0;
}














