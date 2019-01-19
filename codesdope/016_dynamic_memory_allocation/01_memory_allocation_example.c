#include <stdlib.h>
#include <stdio.h>

int main()
{
	int *arr; // array 
	int limit, i; // dynamic memory allocation limit set by user
	
	printf("Enter total number of elements in array: \n> ");
	scanf("%d", &limit); // take user input and define size

	// allocating memory dynamically 
	arr = (int*)malloc(limit * sizeof(int));

	// if array is empty then display error message and close program
	if(arr == NULL){
		printf("Insufficient amount of memory allocated...\n");
		return 0;
	}

	printf("Enter %d elements: \n", limit); // enter # of elementss
	for(i = 0; i < limit; ++i){
		// iterate and assign integer from user input into array
		printf("Enter element %d: ", i + 1); // on each iteration add 1 to i
		// element index add 1
		scanf("%d", (arr + i));
	}

	printf("Array of elements contains: \n"); // prints all index elements
	for(i = 0; i < limit; ++i){
		printf("%3d\n", *(arr + i)); 
	}
	
	return 0;
}	

/*
	In this example, we declared a pointer arr, which contains 
	n(limit) elements 
	Thus, arr is an integer array containing n(limit) elements. Assigned 
	a memory of size limit * sizeof(int) to the array which the pointer 
	arr is pointing to. We now have a memory space allocated to the integer 
	array conisisting of n(limit) elements. We ask for the user to input 
	the values of the elements of the array and display those values
*/