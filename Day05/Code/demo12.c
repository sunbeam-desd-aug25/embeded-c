#include<stdio.h>
/*
Accept the year and check is leap year or not and print its days
	
	Leap year : 366 days
	Not Leap year : 365 days	
	- A year is a leap year if it is divisible by 4
	- But if the year is century year (ending with 00) then it must be
	  divisible by 400 to be a leap year
	- ex. 2000 , 1600 , 1200 are leap years
	  ex. 1900 , 1800 , 1700 are not leap years
	- ex. 2012 , 2016 , 2020 are leap years
	  ex. 2015 , 2018 , 2021 are not leap years

	year : 2012               year : 2000                 year : 1900
	if( year % 4 == 0 )       if ( year % 400 == 0)      if (year %100 == 0)
		leap                   leap                       not leap

*/

int main()
{
	int year;
	printf("Enter the year : ");
	scanf("%d",&year); // 1200
			   // 1900
			   // 2020
			   // 2015
			   // 2000 , 1600 , 1200
/*
	//1.if-else
	if (year % 400 == 0 )
	{
		printf("Leap year : %d -> 366 days \n",year);
	}
	//       1900 % 4 == 0
	//          0    == 0
	else if ( year % 100 == 0 )
	{	
		printf("Not Leap year : %d -> 365 days \n",year);
	}
	//        2020 % 4 ==0
	//             0   == 0
	else if( year % 4 == 0 )
	{
		printf("Leap year : %d -> 366 days \n",year);
	}
	else
	{
		printf("Not Leap year : %d -> 365 days \n",year);
	}
*/		
	//2.Logical opr
	//2020
	//    2020 % 4         2020%100 !=0
	//         0  == 0        20    != 0
	//            T                T             XXX

	//2000
	//    2000 % 4        2000%100
	//        0    ==0       0      !=0
	//    (    T                 F      )
	//               F                        2000 % 400 == 0
	//                                           T

	//1900
	//    1900 %4 == 0     1900%100
	//       0     ==0      0       != 0
	//    (      T                  F )
	//                    F               ||  1900%400 ==0
	//                                           300   ==0
	//                                             F
	if(  (year % 4 ==0 && year %100 != 0) || year % 400 == 0  )
	{
		printf("Leap year : %d -> 366 days \n",year);
	}
	else
	{
		printf("Not Leap year : %d -> 365 days \n",year);
	}
	return 0;
}
