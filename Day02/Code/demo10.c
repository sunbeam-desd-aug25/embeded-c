#include<stdio.h>
/*
	Escape sequences - character constants starting with '\'
	eg. 
	'\n', 
	'\t', 
	'\r', 
	'\b', 
*/

int main()
{
//	printf("Welcome to Sunbeam\n"); //\n => get a newline

//	printf("SUNBEAA\bM \n"); // \b => work like Backspace

// 	printf("Desd\tDAC");     // \t => Work like Tab

	printf("123456\r789\n"); // \r => Carrage Return
	//      789456    =>Output
	printf("123456\r1112\n");
	//      111256    =>Output

	return 0;
}
1. Low-Level Language
These are basic computer instructions that directly communicate with the hardware.
Written in binary (0 and 1) or in assembly language (mnemonics like MOV, ADD).
Machine-dependent: Specific to the processor type.
Very fast execution, but difficult to write and understand.

float + int → float

char + int → int

int + unsigned int → unsigned int