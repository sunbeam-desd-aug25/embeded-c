#include<stdio.h>

/*
	Simple Calculator using switch
		- Accept 2 num from user
		- Accept choice from user
			1. ADD
			2. SUB
			3. MUL
			4. DIV
		- Perform operation based on user choice

*/


int main()
{
	//int n3 = 5 / 0 ; // due 5 / 0 we get run time error

	int n1,n2;
	float res;
	printf("Enter the 2  Num : ");
	scanf("%d%d",&n1,&n2);//10 3

	typedef enum choice {ADD=1 , SUB ,MUL , DIV}CHOICE ;
	//                     1      2    3     4
	CHOICE s1;
	printf("1.ADD\n2.SUB\n3.MUL\4.DIV\n");
	printf("Enter your choice : ");
	scanf("%d",&s1);

	switch( s1  )
	{
		//case 1 : 
		case ADD : res = n1+n2;
			   printf("res = %.2f \n",res);
			   break;
		//case 2 :
		case SUB :res = n1-  n2;
			  printf("res = %.2f \n", res);
		          break;
		case MUL : res = n1* n2;
			  printf("Res = %.2f \n",res);
			break;

		case DIV : if(n2== 0)
				printf("Cant Div by zero..\n ");
			   else
			   {
				res= (float)n1 / n2 ;
				printf("res : %.2f \n",res);
			   }
			break;

		default : printf("Wrong choice....\n");
			break;
	}

	return 0;
}











