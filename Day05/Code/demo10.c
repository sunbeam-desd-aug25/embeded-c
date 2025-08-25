#include<stdio.h>

//Accept two num and check which is greater

int main()
{	
	int n1,n2;
	printf("Enter Two num : ");
	scanf("%d%d",&n1,&n2); // 100 20

	//  100> 20  -> true
	if (n1 > n2 )
	{
		// true
		printf("%d : n1 is greater \n",n1);
	}
	else
	{
		// fasle
		printf("%d : n2 is greater \n",n2);
	}
	
	return 0;
}
