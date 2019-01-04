#include <stdio.h>

int main()
{
	// declaring n as an array of 5 floats 
	float n[5] = {20.4, 30.0, 5.8, 67, 15.2};
	float *p; //p as a pointer to float 
	int i;

	p = n; // p is now to pointing to array n

	// printing out the values of the elements of the array
	for(i = 0; i < 5; ++i){
		printf("*(p + %d) = %f\n", i, *(p + i));
		// *(p + i) in this for loop will be 
		// (p + 0), (p + 1)...
	}
	return 0;

	/*
		As p is pointing to the first element of array, so, *p or *(p + 0) represents value at p[1]. And *(p + 3) and *(p + 4) represents p[3] and p[4] respectively. So accordingly, things were printed.
	*/ 
}