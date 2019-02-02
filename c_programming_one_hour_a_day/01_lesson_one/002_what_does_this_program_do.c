#include <stdio.h>

int main(void)
{
	int x, y;
	for(x = 0; x < 10; ++x){
		printf("\n");
		for(y = 0; y < 10; ++y){
			printf("X\n");
		}
	}

	return 0;
}

/*
	This program prints out 10 columns of X in a single line 
*/ 