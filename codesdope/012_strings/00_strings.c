#include <stdio.h>

int main()
{
	/*
		We can think of stirng as an array of characters, like 'Sam' is a string.

		element: 'S' 'a' 'm' '\0'
			index:  0		1		2		3

		The character in the third index represents null character. ASCII value of '\0' is 0 and that of normal 0 is 48. It represents termination of a string.
	*/ 

	// We declare a string as: 
	char name_1[] = "Sam";

	// We can also declare a string variable 
	char name_2[] = {'S', 'a', 'm', '\0'};
}