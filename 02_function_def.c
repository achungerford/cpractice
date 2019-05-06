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
int name(void)
{
    int x = 10, y = 5;
    return x+y;
}

/*
int circumference(int radius)
{
	float pi = 3.14;
	int radius = r;
	scanf("Enter the radius of your circle:", %d);
	return pi*r**2;
}
*/

int main()
{
	printf("Print it: %d.", name());
	return 0;
}