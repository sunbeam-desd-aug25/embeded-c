#include<stdio.h>
#include"header.h"

int res; // global variable
int main()
{
	int n1=20 , n2 = 40;
	sum(n1,n2);//function call
	printf("res : %d \n",res);
}

/*
	To run this program:
	cmd$ gcc main.c fun.c 
	cmd$ ./a.out
*/



