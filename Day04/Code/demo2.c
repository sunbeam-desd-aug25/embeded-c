#include<stdio.h>

/*
	-Print ASCII values of Escape Seq.
	- Escape Seq. are used to represent non printable characters
	- Escape Seq. always starts with backslash(\)
	- Escape Seq. are used in string and char constants only
	- Escape Seq. are not stored in memory as such , they are stored as their ASCII values
	- Escape Seq. are used to perform some specific task
		\n -> New line
		\t -> Tab
		\r -> Carrage return
		\b -> Backspace
		\a -> Alarm/Beep
*/

int main()
{
	//here \n is used to print new line
	// here \\n is used to print \n as such
	printf("\\n -> %d  \n ", '\n');
 	//  \n -> 10

	//here \\t is used to print \t as such
	printf("Tab:   \\t -> %d  \n ", '\t');

	printf("Carrage return :\\r -> %d  \n ", '\r');

	printf("Backspace\\b -> %d  \n ", '\b');
	
	printf("Alarm/Beep :\\a -> %d  \n ", '\a');

	return 0;
}


