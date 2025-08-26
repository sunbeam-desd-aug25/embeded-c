#include<stdio.h>

// Find max from 3 numbers using ternary operator

int main()
{
/*
	int n1,n2;
	printf("Enter the 2  num : ");
	scanf("%d%d",&n1,&n2);
	
		if(n1 > n2 )
			n1 it grater  -> true
		else
			n2 is greater -> false

	// cond ? True : False ;
	//                 True                False
	//n1 > n2 ? printf("N1 : %d \n",n1)  : printf("N2 : %d \n",n2);
*/


	// Find max from 3 numbers
	int n1,n2,n3, max ;
	printf("Enter 3 num : ");
	scanf("%d%d%d",&n1,&n2,&n3);
	/*
		condition-1
		if(n1 > n2)
		{
		-----------True--------
			   conditon-2
			if(n1 > n3 )
				n1 is max  -> true
			else
				n3 is max -> false
		}
		else
		{
		-----------false-----------
			condition-3
			if (n2 > n3  )
				n2 is max -> true
			else
				n3 is max -> fasle
		}
		              True                                     False
	[Condition -1  ] ? [ [condition-2 : True : False  ]] : [ [condition -3 ?  True  : False ] ]   ;

	*/

	// n1 = 10 , n2= 20 , n3 = 30 -> case 1
	// n2 = 30 , n2=20  , n2 = 10 -> case 2

	//		       True                      False
	//                   cond   ? T   F           cond    ? T  : F    
	max = (n1 > n2) ? ((n1 > n3)? n1 :n3 )   :  ( (n2 > n3) ? n2 : n3 ) ;
	//     30 > 20  ?   30 > 10 ? 30					->case 2 
	//     10 > 20                               20 > 30 ?    : 30          ->case 1
       
	printf("Max : %d \n",max);
	return 0;
}





