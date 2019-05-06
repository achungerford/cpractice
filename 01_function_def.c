/*
	Defining a function. Calling a function.

	author: Alexander Hungerford

	Lesson:
		define a function (prior to calling it)

		declaring a variable, x
		storing value, 10
		return statement
		scope - functions, variables

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