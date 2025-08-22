#include<stdio.h>

int main()
{
/*
	char ch = 127;
	printf("ch = %d \n",ch);//127
	ch = 128;
	printf("ch = %d \n",ch);//-128
	ch = 129;
	printf("ch = %d \n",ch);//-127
	ch = 130;
	printf("ch = %d \n",ch);//-126
	ch = -129;
	printf("ch = %d \n",ch); // 128
*/
	unsigned char ch1 = 255;
    ch1 = 256;
	printf("ch = %u \n",ch1);//0
	ch1 = 300;
	printf("ch = %u \n",ch1);//44

	return 0;
}


