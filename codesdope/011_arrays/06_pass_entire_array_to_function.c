#include <stdio.h>

// function will be calculating the average 
float average(float a[]){
	// if array is gonna be floaty then the function argument must be float 
	int i;
	float avg, sum=0;
	for(i = 0; i < 8; ++i){
		sum += a[i];
	}

	avg = sum/8;
	return avg;
}

int main()
{
	float b, n[] = {20.6, 30.8, 5.1, 67.2, 23, 2.9, 4, 8};
	// calling average function and passing in array as argument 
	b = average(n);
	printf("Average of numbers = %.2f\n", b);
	return 0;
}