#include <stdio.h>

int display(int *p){
	printf("Calling display function...\n");
	int i;
	for(i = 0; i < 8; ++i){
		printf("n[%d] = %d\n", i, *p);
		++p;
	}
	printf("Ending display function...\n");
	return *p;
}

/*
	function display is taking a pointer to an integer. 

	Now we passed the pointer of an integer i.e. pointer of the array n[] - 'n' as per the demand of of our function 'display'

	Since p is the address of the fo the array n[] in the function 'display' i.e. address of the first element of the array (n[0]), therefore *p represents the value of n[0]. In the for loop in funciton, ++p increases the value of p by 1 on each iteration. When i = 0, the value of *p gets printed. Then ++p increases *p to *(p + 1) and in the second loop, the value of *(p + 1) i.e. n[1] also gets printed. This loop continues till i = 7 when the value of *(p + 7) i.e. n[7] gets printed.
*/

int main()
{
	int n[] = {1, 2, 3, 4, 5, 6, 7, 8};
	display(n);
	return 0;
}