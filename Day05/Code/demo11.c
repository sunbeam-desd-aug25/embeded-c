#include<stdio.h>
/*
	Nested if-else
	syntax:
	if( condition1 )
	{
		if( condition2 )
		{					
			statments; // when condition1 and condition2 are true
		}
		else
		{
			statments; // when condition1 is true and condition2 is false
		}
	}
	else
	{
		if( condition3 )				
		{
			statments; // when condition1 is false and condition3 is true
		}
		else
		{
			statments; // when condition1 and condition3 are false
		}
	}		

*/
//Accept three num and check which is greater

int main()
{
	int n1,n2,n3;
	printf("Enter the  3 number : ");
	scanf("%d%d%d",&n1,&n2,&n3);
	//     10   20    30  ->case 1 n3 grt
	//     10   30    20  ->case 2 n2 Grt
	//     30   20    10  ->case 3 n1 grt

	//  10 > 20 case 1
	//  10 > 30 case 2
	//  30 > 20 case 3	
	if( n1 > n2  )
	{
		//  30 > 10 case 3
		if (n1 > n3 )
			printf("n1 : %d \n",n1); //30 case 3
		else
			printf("n3 : %d \n",n3);
	}
	else
	{
		// 20 > 30 case 1
		// 30 > 20 case 2
		if(n2 > n3)
		{
			printf("n2 : %d \n",n2);//20 case 2
		}
		else
		{
			printf("Num3 : %d \n",n3);//30 case 1

		}
	}	
	
	
	return 0;
}
