#include<stdio.h>
/*
	scanf() -> lib function use to accept calue from end user
	- It is defined in stdio.h header file
	- It is used to accept value from standard input device (keyboard)
	- It is a formatted input function
	- It can accept multiple values at a time
	- It requires format string to specify the type of data to be accepted
	- It requires address of variable to store the accepted value
	- Adress of variable is specified using & (address of) operator
	- returns no. of values accepted
	syantax : scanf("format string",[Adress of Arguments...]);
*/

int main()
{
	/*
	int num;
	printf("Enter a Integer value : ");
	scanf("%d",&num);
	printf("Num : %d \n",num);
	*/

	int n1,n2;
	printf("Enter Two integer values : ");
	scanf("%d%d",&n1,&n2);
	printf("n1 = %d n2 = %d \n ",n1,n2);

	short sh1,sh2;
	printf("Enter 2 short values  : ");
	scanf("%hd%hd",&sh1,&sh2);
	printf("sh1 = %hd  sh2 = %hd \n ",sh1,sh2);

	float f1,f2;
	printf("Enter Two float values  : ");
	scanf("%f%f",&f1,&f2);
	printf("f1 = %.2f  f2= %.2f \n",f1,f2);

	double d1,d2;
	printf("Enter Two double values : ");
	scanf("%lf%lf",&d1,&d2);
	printf("d1 = %.2lf d2 = %.2lf \n ",d1,d2);


	return 0;
}


