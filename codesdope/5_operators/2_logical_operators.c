#include <stdio.h>

int main()
{
	int a = 5, b = 3, c = 3;
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("(a == b) && (b == c) => (%d == %d) && (%d == %d): %d\n",a, b, b, c, (a == b) && (b == c));

	printf("(a == b) || (b == c) => (%d == %d) || (%d == %d): %d\n", a, b, b, c, (a == b) || (b == c));

	printf("a != 1: %d\n", a != 1);

	return 0;
}