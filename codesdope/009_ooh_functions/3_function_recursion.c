#include <stdio.h>

int factorial(int a){
	// when this function is called, if either 0 or 1 is called 
	if(a == 0 || a == 1){
		printf("Returning 0 or 1\n");
		return 1;
	} else {
		// here we call the function within its declared function
		printf("Checking: a - 1 = %d\n", a);
		return a*factorial(a - 1);
	}
}

int main()
{
	int n;

	printf("Enter a number: \n> ");
	scanf("%d", &n);

	int fact = factorial(n);

	printf("Factorial of %d is %d\n", n, fact);
}