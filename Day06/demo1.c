#include<stdio.h>

/*
	Accept char from user and check
		- It is alphabet
			- uppercase or lowercase
		- Numerical char
		- special char [space , Enter , Tab Backspace...]

	A => 65 B=>66 C => 67 ........Z => 90
	a =>97  b=>98 c =>99  ........z => 122
	0 =>48  1=>49 2 => 50 ........9 =>  57
*/


int main()
{
	char ch;
	printf("Enter a Char : ");
	scanf("%c",&ch); // A => 65
			 // 1 => 49
	if( (ch >= 65 && ch <= 90) || ( ch >= 97 && ch <= 122 ) )
	{
		printf("It is Alphabet..\n");
		if( ch >= 65 && ch <= 90  )
			printf("Uppercase char..\n");
		else
			printf("Lowercase char..\n");
	}
	else if( ch >= 48 && ch <= 57  )
		printf("Numericak key...\n");
	else if( ch == '\n')
		printf("It is  Newline/Enter key");
	else if (ch == '\t' )
		printf("It is Tab...\n");
	else if( ch == ' ' || ch == 32 )
		printf("Space is pressed..\n");
	else
		printf("Other key is pressed...\n ");

	return 0;
}






