#include<stdio.h>
/*
	1.On entry check
		- While loop

	syntax:
		1.<Initialisation>
		while ( 2.<Condition>  )
		{
			//Statment..
			3.<Modification>
		}
*/

//To print the table of given num

int main()
{
	int num;
	printf("Enter the num : ");
	scanf("%d",&num);

	//1.initialisation
	int i=1;
    //      1 <= 10 -> T
	//      2 <= 10 ->T
	//      10 <= 10
	//      11<= 10  -> False
	while ( i <= 10   ) // 2. condition
	{
		//      5 * 1  = 5
		//      5 * 2  = 10
		//      5 * 10 = 50
		printf("%d * %d = %d \n ",num , i , num * i ); //statment
		
		//++i;// 3. modification
		i++ ;
		//1 -> 2.......->10 -> 11
	}
	//--->
	return 0;
}








