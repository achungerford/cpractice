/*
	What is a function?

	author: Alexander Hungerford

	Lesson:
		Preprocessor files

		function definition (prior to calling the function)

		format specifier - %d

		calling a function
*/

#include <stdio.h>

// function defined before it is called;
int number(void)
{
    int x;
	x = 10;
	return x;
}

int main()
{
	printf("Print it: %d.", number());
	return 0;
}