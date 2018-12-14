#include <stdio.h>

int main()
{
	// declaring a and b
	int a;
	int b;

	// getting value for a
	printf("Enter a whole integer value for a:\n> ");
	scanf("%d", &a);

	// getting value for b
	printf("Enter a whole integer value for b:\n> ");
	scanf("%d", &b);

	// show inputted integers
	printf("Your integer values are: a = %d, b = %d\n", a, b);

	// sum
	printf("a + b = %d\n", (a + b));

	// difference 
	printf("a - b = %d\n", (a - b));

	// product
	printf("a * b = %d\n", (a * b));

	// remainder(modulus(modulo))
	printf("a modulo b = %d\n", (a % b));
}