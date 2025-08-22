#include<stdio.h>


int main()
{
	//Here ch is unsigned char it can store value from 0 to 255
	unsigned char ch=0;
	printf("ch = %u ",ch);// 0

	 ch=254;
	printf("ch = %u ",ch);//254

	 ch=255;
	printf("ch = %u ",ch);//255

	
	//if we assign value more than 255 it will start from 0 again ,like rolling over
	 ch=256;
	printf("ch = %u ",ch);//0

	 ch=257;
	printf("ch = %u ",ch);//1

	 ch=300;
	printf("ch = %d \n",ch);//44

	ch = -1;
	printf("ch = %d ", ch );// 255


	return 0;

}
