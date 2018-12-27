#include <stdio.h>

int main()
{
	int a, b, power, i;
	power = 1;

	printf("To find (a) raised integer to the power (b).\n Give value of (a)\n> ");
	scanf("%d", &a);
	printf("Now give a value of (b)\n> ");
	scanf("%d", &b);

	for(i = 1; i <= b; ++i){

		// 1st iteration power is equal to 1 * value of a
		// 2nd iteration power is equal to a from previous iteration * value of a and so on
		power = power*a;
	}

	printf("Power of (a)'%d' raised to (b)'%d' is %d\n", a, b, power);

	return 0;
}