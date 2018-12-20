#include <stdio.h>

int main()
{
	int a = 30;
	int b = 5;
	printf("a = %d, b = %d\n", a, b);
	printf("\na += b = %d\n", (a += b));
	printf("a = %d, b = %d\n", a, b);

	printf("\na *= b = %d\n", (a *= b));
	printf("b *= a = %d\n", (b *= a));
	printf("a = %d, b = %d\n", a, b);

	return 0;
}