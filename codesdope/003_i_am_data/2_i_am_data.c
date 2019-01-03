#include <stdio.h>

int main()
{
	int a;
	float b;
	char ch;

	printf("Enter value for integer: \n> ");
	scanf("%d", &a);

	printf("Enter value for float: \n> ");
	scanf("%f", &b);

	// char only takes in one character 
	printf("Enter value for char: \n> ");
	scanf(" %c", &ch);

	printf("\nValue of integer: %d\n", a);
	printf("Value of float: %f\n", b);	
	printf("Value of char: %c\n", ch);

	// .2f means the number will be rounded to two decimal places
	printf("Value of float(rounded): %.2f\n", b);

	return 0;

}