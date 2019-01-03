#include <stdio.h>

// we declare a function as follows
/*
	
	return_type function_name(parameters);

	an exmple: 

	Suppose we have to calculate the average of 2 numbers num1 and num2. The numbers are of type integer and average is of type float. Then we will pass the numbers to a function that will return the average value of those numbers. We declare the function as follows

	float average(int num1, int num2);

	here, the function named 'average' is taking num1 and num2 of integer type as input and then returning the average value of type float after calculating it 
*/

float average(int num1, int num2){
	// declaring average 
	float avg;
	// equation for finding the average 
	avg = (num1 + num2)/2.0;
	return avg;
}

int main()
{

	// declaring initial two integers 
	int num1, num2;
	// declaring c as a float
	float c;

	printf("Enter first number: \n> ");
	scanf("%d", &num1);
	printf("Enter second number: \n> ");
	scanf("%d", &num2);

	// c is assigned the average 
	c = average(num1, num2);
	// average is printed out
	printf("The average is %.2f\n", c);

	return 0;
}