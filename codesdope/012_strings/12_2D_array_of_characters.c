#include <stdio.h>
#include <string.h>

int main()
{	
	/*
		Same as a 2D array of integers and other data types, we have a 2D array of characters also.
	*/ 
	char names[][10] = {
		"Gabriel",
		"Aspyn",
		"Shelby",
		"Milena",
	};
	// int i;
	size_t i;
	// okay to use when you know a value is not going to be negative 
	/*
		size_t is an unsigned type. It cannot represent any negative values(<0). It is used when you are counting something, and are sure that it cannot be negative. For example, strlen() returns a size_t because the length of a string has to be at least 0.
	*/ 

	// lol need to loop through array to print out all string literals
	/*
		When iterating over an array with string literals 
		+ 
		when declaring a char sequence with "", null terminator is added.
	*/ 
	for(i = 0; i < sizeof(names)/sizeof(names[i]); ++i){
		printf("%s\n", names[i]);
	}
	return 0;
}