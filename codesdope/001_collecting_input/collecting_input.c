#include <stdio.h>

int main()
{
	// a is declared as an integer
	int a;

	// Ouputs a string 
	printf("Enter an integer: \n> ");

	// takes in an input and assigns to int a
	// &a is the address of 'a', a occupies space in memory
	// %d is used to store integer addresses
	scanf("%d", &a);

	// prints out the value of a
	printf("Entered value is: %d\n", a);
	return 0;
}