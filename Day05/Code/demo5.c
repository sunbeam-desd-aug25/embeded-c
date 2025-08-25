#include<stdio.h>

/*
	,   (Comma) Opr
	( )  Parenthesis Opr
	- Both are binary oprs
	- Both are left to right associative
	- Precedence is less than Logical oprs and greater than Assignment oprs
	
*/

int main()
{
/*
	// ,  oprator
	// ,  opr seprate the expression
	int a=10 , b=20 ,  c = 30 , res ;
	res = a,b,c; //here res will get value of a
	//res = a ,  b  , c;
	printf("res : %d \n",res ); //10

	res = ++a , b++ , c--;
	//  Exp1  ,Exp2 , Exp3
	//res=11  , 20++, 30--
	//a= 11
	printf(" a = %d , b = %d , c = %d ,  res = %d \n",a,b,c,res );
	//          11      21       29           11

*/

	// ( ) opr
	int res , a = 10 , b = 0 , c = -10;
	
	res = (10 , 20 , 30 );//res will get last value
	//res = 30 ;
	printf("res = %d \n ",res  );//30
	res = ( a , b ,c);
	printf("res = %d \n ",res  );//-10;


	res = ( a++ , ++b ,--c);	
	//     10++ , ++0 ,--(-10) ;
	//      11     1    -11
	printf(" a = %d , b = %d , c = %d ,  res = %d \n",a,b,c,res );
	//          11       1       -11         -11

	a=10;
	res = (++a , a++ , a++);
	//     ++10
	//     11  , 11++
	//               , 12++
        //res =            12++ ;  
	printf("res = %d , a =  %d \n", res , a  );
	//	    12           13


	a=10;
	res = (++a, a++) ,          a++;
	//res = (++10, 11++  )      12++
	//        11
	//res = 11++

	printf("res = %d , a =  %d \n", res , a  );
       //            11         13





	return 0;
}






