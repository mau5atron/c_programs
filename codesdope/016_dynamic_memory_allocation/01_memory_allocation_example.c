#include <stdlib.h>
#include <stdio.h>

int main()
{
	int *arr; // array 
	int limit, i; // dynamic memory allocation limit set by user
	
	printf("Enter total number of elements in array: \n> ");
	scanf("%d", &limit); // taking user input and assigning to limit

	// allocating memory dynamically 
	arr = (int*)malloc(limit * sizeof(int));

	if(arr == NULL){
		printf("Insufficient amount of memory allocated...\n");
		return 0;
	}

	printf("Enter %d elements: \n", limit);
	for(i = 0; i < limit; ++i){
		printf("Enter element %d: ", i + 1);
		scanf("%d", (arr + i));
	}

	printf("Array of elements contains: \n");
	for(i = 0; i < limit; ++i){
		printf("%3d\n", *(arr + i));
	}
	
	return 0;
}	