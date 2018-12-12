#include <stdio.h>

int main()
{
	int x, y;
	printf("Enter two integers separated by a single space: \n> ");
	scanf("%d %d", &x, &y);
	int z = x + y;
	printf("Entered values are: %d and %d.\nThe sum of these two values is\n> %d", x, y, z);
	return 0;
}