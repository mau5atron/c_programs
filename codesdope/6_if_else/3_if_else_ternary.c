#include <stdio.h>

int main()
{
	int a, b, num;

	printf("Enter a whole, positive integer for a: \n> ");
	scanf("%d", &a);

	printf("Enter a whole, positve integer for b: \n> ");
	scanf("%d", &b);

	num = (a > b) ? printf("The greatest integer is a = %d\n", a) : printf("The greatest integer is b = %d\n", b);
	// OR
	// num = (a > b) ? a : b;
	// printf("The greatest integer is %d", num);
	// but then you would not be able to call the variable char since this only returns the integer that is correct 

	return 0;
}