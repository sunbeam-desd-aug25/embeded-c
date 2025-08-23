#include<stdio.h>

int main()
{
	int a=10 , b=-20 , c = 0 , res;
/*
	res = a || b || c ;
	//    T   XXXXXXXX  -> True 1
	printf("a = %d b = %d c = %d res = %d \n ",a,b,c,res);
	//		 10     -20     0         1

	res = a && b && c ;
	//    T && T && F -> Flase
	printf("a = %d b = %d c = %d res = %d \n ",a,b,c,res);
	//		 10     -20     0         0
*/
    //-----------------------------------------------------------------------------
    //The solve left to right and precedence of Logical Opr
	// && has more precedence than ||


	//Left------------------------->Right  
      //    = a ||(b && c)  
      //      T || XXXXXX
	//res = a || b && c ;
	  //    T XXXXXX
	printf("a = %d b = %d c = %d res = %d \n ",a,b,c,res);
	//         10     -20     0         1


	//Left------------------------->Right 
	//  = (a && b)|| c
	//     T && T
	res =  a && b || c ;//
	//        T   XXX
    
	printf("a = %d b = %d c = %d res = %d \n ",a,b,c,res);
    //         10     -20     0         1



:




	return 0;
}






