#include<stdio.h>

//1.check the num is even or odd
/*
	Steps to Solve the Problem
	1.Analysis
		- Problem statement : check the num is even or odd
		- Input : Num
		- Output : Even / Odd
		- Process : check the num is divisible by 2 or not
			if num is divisible by 2 then 
				print Num is Even
			else
				print Num is Odd
	2.Algorithm
		1.Start
		2.Accept the num from user and store it in variable num1
		3.Check the num1 is divisible by 2 or not
			if num1 is divisible by 2 then 
				print Num is Even
			else
				print Num is Odd
		4.Stop
	3.Flowchart
		- It is a pictorial representation of Algorithm
	4.Pseudocode
		- It is a detailed version of Algorithm
		1. Start
		2. Declare variable num1
		3. Accept the num from user and store it in variable num1
		4. if num1 % 2 == 0 then
				print Num is Even
		   else
				print Num is Odd
		5. Stop

	5.Implementation of code


*/

int main()
{
	int num1;
	printf("Enter the num : ");
	scanf("%d",&num1);
	if ( num1 % 2 == 0   )
	{
		printf("Num  is Even : %d \n",num1);
	}
	else
	{
		printf("Number is odd : %d \n",num1);
	}
	return 0;
};
