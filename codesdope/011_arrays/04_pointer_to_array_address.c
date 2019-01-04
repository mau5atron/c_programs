#include <stdio.h>

int main()
{
	// declaring n as an array of 4 integers 
	int n[4] = {20, 30, 5, 67};

	int *p; // a pointer

	int i;

	p = n; // pointer n is pointing to array n

	// printing the address of the array 
	printf("Address of array n[4] = %p\n", (void*)&p); 
	// points to array means store the address of the first element of arrays 

	// printing the addresses of elements of array 
	for(i = 0; i < 4; ++i){
		printf("Address of n[%d] = %p\n", i, (void*)&n[i]);
	}
	return 0;

	// when printing a pointer remember to cast it void 
}