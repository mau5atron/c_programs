#include <stdio.h>

int main()
{
	int i, j;

	// outer loop
	for(i = 10; i <= 14; ++i){
		printf("Table of %d\n", i);

		for(j = 1; j <= 12; ++j){
			// inner loop
			printf("%d*%d\t = %d\t \n", i, j, i*j);
		}
	}
	return 0;
}