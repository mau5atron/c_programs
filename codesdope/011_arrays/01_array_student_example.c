#include <stdio.h>

int main()
{
	int marks[3];
	float average;

	printf("Enter marks of first student: \n> ");
	scanf("%d", &marks[0]);

	printf("Enter marks of second student: \n> ");
	scanf("%d", &marks[1]);

	printf("Enter marks of third student: \n> ");
	scanf("%d", &marks[2]);

	average = ((marks[0] + marks[1] + marks[2]) / 3.0);

	printf("Average marks = %.3f\n", average);

	return 0;
}