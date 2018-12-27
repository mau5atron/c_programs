#include <stdio.h>

int main()
{
	int a;

	for(a = 1; a <= 10; ++a){
		printf("I am number %d\n", a);	

		if(a == 5){
			// at a equals 5, the loop travels to another dimension (not really) temporarily looks for statement, and in this case prints out haha im out // then continues with the for loop

			// continue passes control to the conditional (if statement)
			printf("haha im out!\n");
			continue;	
		}
	}
	return 0;
}