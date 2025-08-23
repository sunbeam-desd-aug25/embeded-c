#include<stdio.h>

//In these code we will see about the field width in scanf
/*
	Field width in scanf
	- It is used to specify no. of char to be considered from input buffer
	- It is specified between % and format specifier
	- It is optional
	- It should be +ve value
	- It is used to avoid unwanted char from input buffer

	syntax : scanf("%[field width][format specifier]",&var);
*/

int main()
{
	/*
	int n1,n2, ret;
	printf("Enter 2 numbers : ");
	ret = scanf("%d%d",&n1,&n2);//scanf returns no. of values accepted
	
	printf("n1 = %d , n2 = %d \n ",n1,n2);//prints accepted values
	printf("ret = %d \n",ret);//2
	*/

	int n3;
	printf("Enter the values : ");//123456
	//scanf("%-3d",&n3);// Not allowed
	scanf("%3d",&n3);//Here 1st 3 char are considered and rest are ignored
	//123 456
	printf("n3 = %d \n",n3);//123
	return 0;
}



