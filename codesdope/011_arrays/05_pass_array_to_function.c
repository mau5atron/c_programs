#include <stdio.h>

void display(int a){
	printf("%d\n", a);
}

int main()
{
	int n[] = {20, 30, 33, 50, 66, 49, 70};
	// passing in array element 4
	display(n[4]);
	return 0;

	// We can also pass a whole array to a function by passing array name as argument. Yes, the trick is that we will pass the address of an array, that is the address of the first element of the array. Thus, by having the pointer of the first element, we can get the entire array.
}