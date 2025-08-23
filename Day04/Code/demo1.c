#include<stdio.h>


/*
	ASCII values of char
	 	-Ascii values is a numeric value associated with character
		- It is a 7 bit code [ 0 to 127 ]
		- It is used to represent char in computer memory

		A->65    a -> 97       0 ->48
		B->66    b -> 98       1 ->49
		.        .             .
		.        .             .
		Z->90    z -> 122      9 ->57

*/
int main()
{
	char ch='A';
	printf("ch : %c  -> %d \n",ch,ch  );
	//      ch : A   -> 65
	printf("ch : %c  -> %d \n",'B','B'); // B -> 66	
	printf("ch : %c  -> %d \n",'C','C'); // C -> 67	
	
	printf("ch : %c  -> %d \n",'Z','Z'); // Z -> 90 


	printf("ch : %c  -> %d \n",'a','a');// a -> 97  
	printf("ch : %c  -> %d \n",'b','b');// b -> 98
	printf("ch : %c  -> %d \n",'z','z');// z -> 122
	

	
	printf("ch : %c  -> %d \n",'0','0'); // 0 -> 48  
	printf("ch : %c  -> %d \n",'1','1'); // 1 -> 49  
	printf("ch : %c  -> %d \n",'9','9'); // 9 -> 57 

	return 0;
}












