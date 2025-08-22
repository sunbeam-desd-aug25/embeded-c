#include<stdio.h>
/*
	Escape seq.
	- \n => new line
		- It will move cursor to next line
	- \r => carrage return
		- It will move cursor to begining of same line
	- \t => tab
		- It will move cursor to next tab position
	- \b => backspace
		- It will move cursor one position back	
*/
int main()
{
	//   \n -> print new line
	printf("sunbeam\nCDAC\n");//

	// \r -> carrage return
	printf("ABCD\r123456\n");
    //      123456

	
    // \t -> tab => 4 space
	printf("Sunbeam\tCDAC\n");
	
	// \b -> backspace => delete 1 char
	printf("123456\b789\n");
    //      12345789



	return 0;
}
