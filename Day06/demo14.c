#include<stdio.h>
/*
	//Program to calculate power of a number
	base = 2 , index = 3
	o/p => 2  ^3 => 8
	       - 2 * 2 * 2 = >8
*/
int main()
{
	int base=2 , index= 3, pow=1 ,i;

	//   1      1 <= 3         2
	//          2 <= 3
	//                         2++
	//          3 <= 3
	//                         3++
	//         4 <= 3
	for(i=1  ;  i <= index   ; i++  )
	{
		pow =  base * pow     ;
		//8       2  * 4
		//4       2  * 2
		//2      2   * 1
	}
	printf(" %d ^ %d : %d \n",base, index, pow);
	return 0;
}
