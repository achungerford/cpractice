/*
	The layout of a C program.

	author: Alexander Hungerford

	Lesson:
		comments: single-line vs. multi-line

		the 4 sections of a C program
			a program starts at main()

		what is a function?
			calling a function -- functionName(  with open paren
			printf()

		The choices between sections 3 vs. 4	
			If you define your functions before they are called -- above main(),
			then you aren't required to have a function declaration.
*/

// section 2
#include <stdio.h>

// section 3:
	// function declarations or definitions here

// section 1
int main()
{
	// your program here
	printf("Talk to me.")
	return 0;
}

// section 4
	// function definitions here (requires declaration above)
