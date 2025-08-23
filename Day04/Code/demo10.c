#include<stdio.h>

int main()
{
	//-- pre and post Decrement
/*
	//1.1 => Pre Decrement
	// Here 1st Compiler Decrement the value by 1 and after use its updated value

	int n1 = 10, res;
	res= --n1; // n1 = n1-1
        //     9
       

	printf("res = %d n1 = %d \n",res,n1);
        //             9      9

	printf("n1 = %d \n ", --n1);
	//           8	

*/

	//1.2 => Post Decrement
	//Here 1 st value used and then decremented by 1

	int n1 = 10, res;
	res  = n1--; // n1 = n1-1
        //10   10--
        //     9
       

	printf("res = %d n1 = %d \n",res,n1);
        //             10      9       

	printf("n1 = %d \n ",n1--);
	//           	     9--
        //            9
	printf("n1 = %d \n ",n1);
	//            8

	return 0;
}
