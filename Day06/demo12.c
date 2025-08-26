#include<stdio.h>
/*
Accept Num from user 
	- Print num digits count
		ex. num = 123
		    o/p : 3
	- print sum of digits
		ex. num = 123
		    o/p : 1 + 2 + 3 = 6
	- print in rev
		ex. num = 123
		    o/p : 321
	- check plaindrome
		ex. num = 121
		    o/p : 121 is plaindrome
		- check not plaindrome
			ex. num = 123
			o/p : 123 is not plaindrome
			

	- check Armstrong
	        ex. num = 153
		    o/p : 1^3 + 5^3 + 3^3 = 153

*/
int main()
{

	//--------------------------------------------------
	//check plaindrome
	int num;
	printf("Enter the num : ");
	scanf("%d",&num);// 123

/*	
	int rev=0 , rem;
	while( num > 0)   // ( num != 0)
	{
		rem = num %  10;
		rev = rev * 10 + rem ;
		num = num / 10 ;
	}
	printf("Rev : %d \n",rev);

*/
	//--------------------------------------------------
/*	
	//sum of digits

    int sum = 0;
	int rem;
	//    123 > 0 -> T
	//    12  > 0 -> T 
	//    1   > 0 -> T
	//    0  > 0  -> f
	while( num > 0  )
	{
		//1
		rem = num % 10; // 1 % 10 
		sum = sum + rem;
	      // 6       5 + 1
	      // 5      3  +  2
	      // 3      0  +  3
		//sum += rem;

		num = num / 10;// 0
		//num /=10;
	}
	printf("sum : %d \n",sum);
*/

	//--------------------------------------------------
/*	
	//count of digits
	int count=0;
	int rem;
	//     123 > 0 -> T
	//     12  > 0
	//     1   > 0
	//     0   > 0  -> False
	while( num > 0  )
	{
		//3    123%10
		//rem = num % 10 ;

		count++;// 0 -> 1 -> 2 -> 3
		num = num / 10; // 1 / 10
		//0
		// 12 / 10 => 1
		//1
		//  123 / 10 => 12
	        //12 

	}
	printf("Count : %d \n ",count);
*/
    //--------------------------------------------------
	return 0;
}








