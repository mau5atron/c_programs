#include <stdio.h>

int main()
{
	int i = 6;
	int j;
	char c;
	float f;
	double d;

	// changing from %d to %zu bc compiler will throw error due to loss of precision when using %d to find the sizeof a variable
	// printf("Size of integer variable i = %d\n", sizeof(i));
	printf("Size of integer variable i = %zu bytes\n", sizeof(i));
	printf("Size of integer variable j = %zu bytes\n", sizeof(j));
	printf("Size of character variable c = %zu byte\n", sizeof(c));
	printf("Size of float variable f = %zu bytes\n", sizeof(f));
	printf("Size of double variable d = %zu bytes\n", sizeof(d));

	// variable sizes will vary between 32 bit and 64 bit compilers
	return 0;
}