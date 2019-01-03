#include <stdio.h>

/*
	First, lets consider an example that will swap two numbers i.e. interchange the values of two numbers 
*/ 

void swap(int *a, int *b){
	// takes two pointers as arguments 
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int num1, num2;

	printf("Enter the first number loser: \n> ");
	scanf("%d", &num1);

	printf("Enter the second number you dumb nerd: \n> ");
	scanf("%d", &num2);

	swap(&num1, &num2);
	printf("First number = %d\n", num1);
	printf("Second number = %d\nHa bitch you just got swapped 🤠\n", num2);

	return 0;
}