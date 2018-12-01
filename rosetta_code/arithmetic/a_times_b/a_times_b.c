#include <stdio.h>

int main()
{
	int a, b;

	printf("Enter a num for a: \n");
	printf("> ");
	scanf("%d", &a);
	printf("Enter a num for b: \n");
	printf("> ");
	scanf("%d", &b);
	printf("Product is: %d\n", a * b);

	return 0;
}