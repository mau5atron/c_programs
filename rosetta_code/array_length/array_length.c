#include <stdio.h>

int main()
{
	const char *fruit[2] = {"apples", "oranges"};

	// Acquire the length of the array by dividing the size of all the elements (found with sizeof(fruit)) by the size of the first element
	// Since the array elements are pointers to null-terminated character arrays, the size of the first element is actually the size of the pointer type - not the length of the string 
	// This size, regardless of the type being pointed to, is 8 	
	
	int length = sizeof(fruit) / sizeof(fruit[0]); // => 2
	// int length = sizeof(fruit); => 16

	printf("%d\n", length);
	return 0;
}