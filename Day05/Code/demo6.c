#include<stdio.h>

/*
	Typecasting (type conversion)
	 
	- Implicit typecasting
	- Explicit typecasting
	- Typecasting is used to convert one data type to another data type
	- Typecasting is applicable for compatible data types only

	ex. int + float => float
	    int + double => double
	    char + float => float
	    char + double => double
	    char + int => int
	    float + double => double
		unsign + sign => unsign
*/


int main()
{
/*
	int n1 = 10;
	float pi = 3.14, res;
	double d1 = 20.3;
	res = n1          + pi ; 
	//    n1(float)     float
	printf("res = %.2f \n", res);//13.14


	printf("n1 = %d \n", n1);// 10

	res = 'A'        +     pi ;
	//    char(float)+     float
	//      65       +     3.14
	printf("res = %.2f \n ",res);// 68.14


	res =  n1         +      d1 ;//10 + 20.3
 //     float =  int(double) +  double
//      floar = double
	printf("res = %.2f \n", res);//30.3
*/
/*
	int n1=10 , n2=3;
	float res;
	res = n1 / (float)n2 ; 
	//    10 / 3
	//    3.33
	//    3.XXX
	printf("res = %.2f \n",res);//3.00

*/
	char ch = 'A' , res1  ; // -128 to 127
	//char ch = 65
	unsigned char ch1= 10 , res2 ; // 0 ->  255

	res1 = ch > ch1 ; // 65 > 10 //True
	printf("res =%d \n",res1);
	//                   1

	ch = -2;
	ch1 = 100;
	res2 =(unsigned)ch   > ch1 ; 
	//    -2             > 100
	//    11111110         01100100
	//    ________      ________
	//   [ 76543210 ]   [76543210]
	//    sign           > unsign
	//    sign(unsign)   > unsign
	//     254           > 100
	printf("res =  %d \n", res2);
	//              1 
	printf("res = %d \n", ch > ch1);// 1

	return 0;
}
























