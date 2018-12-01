#include <stdio.h>

int main()
{
	float a, b;

	printf("Enter a num for a: \n");
	printf("> ");
	scanf("%f", &a);

	printf("Enter a num for b: \n");
	printf("> ");
	scanf("%f", &b);

	printf("a divided by b is: %f\n", (a/b));

	return 0;
}