#include <stdio.h>

int main(void)
{
	int x, y;
	for(x = 0; x < 10; ++x){
		printf("\n");
		for(y = 0; y < 10; ++y){
			// printf("%c\n", 1); book said to type this but 
			// displays nothing because we are trying to print a character 
			// when there is an integer present as an integer
			printf("X");
		}
	}

	return 0;
}

/*
	This program prints out 10 columns of X in a single line 
*/ 