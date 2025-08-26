#include<stdio.h>
/*
	enum
		- It is a keyword
		- It is used to create user defined data type
		- It is used to assign names to integral constants
		- It makes code more readable

		- Syntax :
			enum <new_data_type_name> { list of names } ;

		- By default first name will be assigned 0 and next name will be assigned 1 and so on...

*/
int main()
{
	enum week_days { SUN, MON , TUES , WED , THURS , FRI ,SAT }; //declartion of enum
	//                0    1     2      3     4       5    6

	printf("size of enum : %ld \n",sizeof(enum week_days) );
	printf("SUN : %d \n",SUN); //0
	printf("MON : %d \n",MON); //1
	printf("FRI : %d \n",FRI); //5

	
	enum week_days d1,d2; // d1 and d2(int) variable creation
	d1 = SUN ;  //d1 = 0
	d2 = WED ;  //d2 = 3
	printf("d1 = %d d2 =%d \n ",d1,d2);// 0 3 
	
	return 0;
}








	

