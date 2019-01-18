#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *arr; // array
	int limit, i; // limit and i iteration 
	int sum = 0;

	printf("Enter total number of elements in array: \n> ");
	scanf("%d", &limit);

	// allocate memory dynamically
	arr = (int*)malloc(limit * sizeof(int));

	// if arr is empty then display error message
	if(arr == NULL){
		printf("Not enough memory allocated...ending program :(\n");
		return 0;
	}

	printf("Enter %d elements: \n", limit);
	for(i = 0; i < limit; ++i){
		printf("Enter element %d\n", i + 1);
		scanf("%d", (arr + i));
		sum = sum + *(arr + i);
	}

	printf("Array elements are: \n");
	for(i = 0; i < limit; ++i){
		printf("%2d\n", *(arr + i));
	}

	printf("\nSum of all elements in the array: %d\n", sum);
	return 0;
}