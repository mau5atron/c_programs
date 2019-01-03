#include <stdio.h>

int main()
{
	int a = 15, b = 15, c = 15, d = 15;
	// postfix a++ prints the value first before incrementing
	printf("\nValue of a++ = %d\n", a++);

	// prefix ++b prints the value after it has been incremented
	printf("\nValue of ++b = %d\n", ++b);
	printf("\nValue of c-- = %d\n", c--);
	printf("\nValue of ++d = %d\n", ++d);

	// dont forget that pesky return la🤣
	return 0;
}