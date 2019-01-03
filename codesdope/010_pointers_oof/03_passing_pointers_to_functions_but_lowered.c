#include <stdio.h>

void swap(int a, int b){
	int c; 
	printf("starting swap...\n");
	c = a; // a assigned to c, c has value of a
	a = b; // b assigned to a, a has value of b
	b = c; // c assigned to b, b has value of c
	printf("After swapping: In function\n");
	printf("First number: %d\n", a);
	printf("Second number: %d\n", b);
	printf("ending swap...\n\n");
}

int main()
{
	int num1, num2;
	printf("Enter first number bich:\n> ");
	scanf("%d", &num1);

	printf("Enter second number bich: \n> ");
	scanf("%d", &num2);

	printf("Your numbers are: %d and %d\n\n", num1, num2);
	printf("before starting swap in main function...\n");

	swap(num1, num2);

	printf("After swapping: In main function numbers\n\n");
	printf("First number: %d\n", num1);
	printf("Second number: %d\n", num2);

	return 0;

}