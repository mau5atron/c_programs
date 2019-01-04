#include <stdio.h>

float average(float a[], int size){
	int i;
	float avg, sum=0;
	for(i = 0; i < size; ++i){
		sum += a[i];
	}
	avg = sum/size;
	return avg;
}

int main()
{
	int size, j;
	printf("Enter the size of the array as an integer: \n> ");
	scanf("%d", &size);
	float b, n[size];
	for(j = 0; j < size; ++j){
		printf("Enter value of n[%d]\n> ", j);
		scanf("%f", &n[j]);
	}

	b = average(n, size);
	printf("Average of entered input = %.2f\n", b);
	return 0;
}