#include<stdio.h>

/*
	Acccept the student data
	Roll
	Marks
	grade

*/

int main()
{
	int roll;
	float per;
	char grd;
	/*
	printf("Enter Grade : ");
	scanf("%c",&grd);
	printf("Enter A Roll : ");
	scanf("%d",&roll);
	printf("Enter Percentage  : ");
	scanf("%f",&per);

	//printf("Enter Grade : ");
	//scanf("%*c%c",&grd); // Here %*c is used to ignore unwanted char from input buffer
	*/

	printf("Enter Roll , Per , Grade : ");
	scanf("%d%f%*c%c",&roll,&per,&grd);
	printf("Roll : %d\nPer : %.2f\nGrade : %c \n",roll,per,grd);




	return 0;
}
