#include <stdio.h>

float grade_average(int num1, int num2, int num3){
	int added_array;
	float ave;

	added_array = num1 + num2 + num3;
	ave = added_array / 3.0;
	return ave;
}

int main()
{
	int grades[3];
	float ave_mark;

	printf("Enter percentage grade of first student: \n> ");
	scanf("%d", &grades[0]);

	printf("Enter percentage grade of second student: \n> ");
	scanf("%d", &grades[1]);

	printf("Enter percentage grade of third student: \n> ");
	scanf("%d", &grades[2]);

	ave_mark = grade_average(grades[0], grades[1], grades[2]);

	printf("Average grade = %.3f\n", ave_mark);

	return 0;
	// The average value should be of type 'float' because the average of integers can be float also.

	// Secondly, while taking out the average, the sum of the numbers should be divided by 3.0 and not 3, otherwise you will get the average value as an integer and not float
}