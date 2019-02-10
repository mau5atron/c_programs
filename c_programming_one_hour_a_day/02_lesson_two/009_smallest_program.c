#include <stdio.h>

void display_line(void);

int main(void)
{
	display_line(); // calling function
	printf("\nLear some c lol\n");
	display_line();

	return 0;
}

void display_line(void){
	int counter;

	printf("\n");
	for(counter = 0; counter < 20; ++counter){
		printf("*");
	}
	printf("\n");
}
