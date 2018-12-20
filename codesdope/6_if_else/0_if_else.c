#include <stdio.h>

int main()
{
	int a, b;

	printf("Enter an integer for a: \n> ");
	scanf("%d", &a);
	printf("Enter an integer for b: \n> ");
	scanf("%d", &b);

	printf("Your inputs are: a = %d, b = %d\n", a, b);

	if(a < b){
		printf("a is less than b\n");
	} else if (a > b){
		printf("a is greater than b\n");
	} else if (a == b){
		printf("a is equal to b\n");
	} else {
		printf("dont know whats going on :(\n");
	}
	
	return 0;

}