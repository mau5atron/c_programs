#include <stdio.h>

int main()
{
	// declaring for a and b
	int a;
	int b;

	// getting integer for a
	printf("Enter a full integer for a: \n> ");
	scanf("%d", &a);

	// getting integer for b
	printf("Enter a full integer for b: \n> ");	
	scanf("%d", &b);

	printf("Your integer values are: a = %d, b = %d\n", a, b);

	// checking equality 
	printf("%d == %d => %d\n",a, b, a == b);
	printf("%d != %d => %d\n",a, b, a != b);
	printf("%d > %d  => %d\n",a, b, a > b);
	printf("%d < %d  => %d\n",a, b, a < b);
	printf("%d >= %d => %d\n",a, b, a >= b);
	printf("%d <= %d => %d\n",a, b, a <= b);

	return 0;

}