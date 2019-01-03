#include <stdio.h>

int main()
{
	int age;

	printf("Enter your age: \n> ");
	scanf("%d", &age);

	printf("You are %d years old.\n", age);
	(age >= 18) ? printf("You are eligible to vote.\n") : printf("You are not eligible to vote.\n");
	return 0;
}
