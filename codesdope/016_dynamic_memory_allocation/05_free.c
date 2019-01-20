#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
	The 'free()' function is used to deallocate or free the memory after 
	the program finishes which was dynamically allocated in the program 

	It is advised to free the dynamically allocated memory after the 
	program finishes so that it becomes available for future use.

	void free(pointer);

	This was the syntax of free function whose return type is void. Now,
	let's see an example where we released the dynamically allocated memory at the end of the program using free.
*/ 

int main()
{	
	int *arr; // pointer to memory, integer array
	int limit, i; // limit n, iterator, pointer;

	printf("Enter the number of elements: \n> ");
	scanf("%d", &limit);

	arr = (int*)malloc(limit *  sizeof(int));

	if(arr == NULL){
		printf("Memory cannot be allocated/Insufficient memory allocated\n");
		return 0; // end program
	}

	// ask user for input 
	printf("Enter %d elements\n", limit);
	for(i = 0; i < limit; ++i){
		printf("Enter element %d\n", i + 1);
		scanf("%d", (arr + i));
	}

	// print out all array elements
	printf("Entered array elements: \n");
	for(i = 0; i < limit; ++i){
		printf("%2d\n", *(arr + i));
	}
	
	free(arr); // releasing allocated memory 
	return 0;	
}