#include <stdio.h>
#include <stdlib.h>

/*
	Now, suppose you want to put more than one toy in a box 
	and you have only an approximate idea of the number of toys 
	and the size of each. For that, you need a box the size of which is equal to the sum of the sizes of all the toys. 

	In such cases, we use calloc function. Like malloc, calloc also allocates memory at runtime and is defined in stdlib.h. It takes
	the number of elements and the size of each element(in bytes), 
	initializes each element to zero and then returns a void pointer to 
	the memory. 

	It's syntax is

	void *calloc(n, element-size);

	Here, n is the number of elements and element-size is the size of each 
	element.  
*/ 

/*
	calloc initializes the allocated memory to zero value whereas malloc 
	does not

	calloc is used to allocate memory to mostly arrays and structures
*/ 

int main()
{
	int *arr; // array pointer as a pointer
	int limit, i;

	printf("Enter the total number of elements in array: \n> ");
	scanf("%d", &limit);

	// dynamic memory allocation using calloc
				// type cast, calloc, n size, element size
	arr = (int*)calloc(limit, sizeof(int));

	if(arr == NULL){
		printf("Insufficient memory allocated, fucking fix it..\n");
		printf("Exiting program.......\n");
		return 0;
	}

	for(i = 0; i < limit; ++i){
		// iterating and assigning entered input from user into int array 
		printf("Enter element %d\n", i + 1); // i + 1 so num starts at 1 != 0
		/*
			When asking for user input, in the (arr + i) section, apart from
			iteration, the i tells the compiler to assign each input to 
			its corresponding index4

			If we do not add the i, on each iteration, the compiler will not move through the array and will stay at index position 0, resulting in 

			Enter the total number of elements in array: 
			> 3
			Enter element 1
			5
			arr = 5, i = 0
			Enter element 2
			6
			arr = 6, i = 1
			Enter element 3
			7
			arr = 7, i = 2
			Array of elements contains: 
			  7
			  0
			  0
		*/ 
		scanf("%d", (arr + i)); 
		printf("arr = %d, i = %d\n", *arr, i); // here for debugging purposes
	}

	printf("Array of elements contains: \n");//prints out all elements 
	for(i = 0; i < limit; ++i){
		printf("%3d\n", *(arr + i));
	}

	return 0;
}