#include <stdio.h>

/*
	Operator
		-Unary opr [It req. only one operand ]
		-Increment/ Decrement Opr
		-Binary opr [It re1. Minmum 2 operands ]
		-Ternary opt [It req. 3 operands ]

*/
int main()
{
	/*
		Unary Oprator
			- It req. only one operand
			- It is used with numeric data types only

			int n1= +10;// + is unary opr
			int n2= -10;// - is unary opr
			scanf("%d",&n1);// & is unary opr
			printf("%d \n",sizeof(n1) );// sizeof is unary opr
	*/

	/*
		Increment/ Decrement optator
		It is a unary opr
		It is used to increase/decrease the value by 1
		It is used with numeric data types only
		It can be used in 2 ways
		1. Pre Increment/ Decrement
		2. Post Increment/ Decrement

	*/

	// ++ => Pre Increment/Post Increment

	// 1.Pre Increment
	//  Here 1st Compiler Increment the value by 1 and after use its updated value

	int n1 = 10, res1;
	res1 = ++n1;// n1 = n1 + 1
				// n1 = 10 + 1 =>11
	printf("res1 = %d n1= %d \n", res1, n1); // 11
	//            11      11

	printf("n1= %d \n", ++n1); // 12
	//                 ++11

	/*
	//1.2 Post Increment
	//Here 1st use the value of variable and the after compiler increase the value by 1
	int n2=20,res ;

	res=n2++;// n2 = n1 + 1

	printf("res= %d  n2 = %d \n",res, n2);
	//          20        21


	printf("n2 = %d \n ",n2++);//
	//                   21++
	printf("n2 = %d \n",n2);
	//                   22
	*/

	//int x = ++10;	 // error due to constant value cannot be changed
	//char ch = ++'A'; // error due to constant value cannot be changed

	

	return 0;
}
