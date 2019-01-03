#include <stdio.h>

int main()
{
	int a;

	printf("Table of 12: \n");
	for(a = 1; a <= 1000; ++a){
		printf("12*%d = %d\n", a, 12 * a);
	}

	return 0;
}