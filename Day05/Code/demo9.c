#include<stdio.h>

//Check num is +ve or -ve or 0

int main()
{
	int num;
	printf("Enter a num : ");
	scanf("%d",&num);
	
	if ( num > 0)
		printf("Num is +ve : %d\n ", num);
	else if( num < 0 )
		printf("Num is -ve : %d \n", num);
	else
		printf("Num is Zero \n");
	return 0;
}
