#include <stdio.h>

int main()
{
	int a, b, c;

	printf("Enter a whole integer for a: \n> ");
	scanf("%d", &a);

	printf("Enter a whole integer for b: \n> ");	
	scanf("%d", &b);

	printf("Entera whole integer for c: \n> ");
	scanf("%d", &c);

	printf("Your input: a = %d, b = %d, c = %d\n", a, b, c);

	if(a > b && a > c){
		printf("a is the greatest number\n");
	} else if (b > a && b > c){
		printf("b is the greatest number\n");
	} else if (c > a && c > b){
		printf("c is the greatest number\n");
	} else {
		printf("dont know whats going on uwu\n");
	}

	return 0;
}