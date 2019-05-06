/*
	Function Declarations

	author: Alexander Hungerford

	Lesson:
		function definition vs. function declaration
		all we did was move our definition BELOW main()
		then we put a declaration above main() with a semicolon
*/

#include <stdio.h>

// function declaration
int number(void);

int main()
{
	printf("Print it: %d.", number());
	return 0;
}

int number(void)
{
    int x;
    x = 10;
    return x;
}
