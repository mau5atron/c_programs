#include <stdio.h>

int main()
{
	float x;
	printf("Enter a float number: \n> ");
	scanf("%f", &x);
	printf("Your float number is: %f\n", x);
	printf("Your integer value is: %d\n", (int)x);
}