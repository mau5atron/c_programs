#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	/*
		Suppose you want to put a toy in a box, but you only have an approximate idea of its size. For that, you would require a box 
		whose size is equal to the approximate size of the toy.

		We face a similar situation in C when we want to input a sentence 
		as an array of characters but are not sure about the number of 
		characters in the array. 

		Now, while declaring the character arrray, if we specify its 
		size smaller than the size of the input string then we will get an 
		error becasue the space in the memory allocated to the array is 
		lesser than the size of the input string, thus unnecessarily consuming more memory even when it is not required. This is like putting a small toy in a large box. 

		In the above casem we don't have idea about the size of the array until the compile time ( when computer compiles the code and the string is input by the user. ). In such cases, we use malloc()
		function.
	*/ 

	/*
		malloc()

		malloc function allocates memory at runtime. It takes the size in bytes and allocates that much space in the memory. It means that malloc(50) will allocate 50 bytes in the memory. It returns a void pointer and is defined in stdlib.h
	*/ 


int main()
{
	char name[20]; // creating character array / string literal array
	char *address; // pointer to character

	strcpy(name, "Harry Lee"); // copying/assigning into/to name
	address = (char*)malloc(50 * sizeof(char)); 
	// allocates memory dynamically
	strcpy(address, "Lee Fort, 11-B Sans Street");

	printf("Name = %s\n", name);
	printf("Address: %s\n", address);

	return 0;
}

/*
	In the above example, we assigned and printed the name as we used to do.

	For address, we estimated that the number of characters should be around 50. So, the size of address will be 50 * sizeof(char)

	char *address = declared a pointer to character for address without 
	specifying how much memory is required. 

	address = (char*)malloc(50 * sizeof(char)) = assigned a memory of 
	"50 * sizeof(char)" bytes for address. We used (char*) to TYPECAST
	the pointer returned by the malloc to character

	strcpy(address, "Lee Fort, 11-B Sans Street") = this assigns the "address" or string to address pointer.

	NOT\E: 

	By default, malloc returns a pointer of type void but we can typecast it into a pointer of any otehr form (as we converted it into character type in the example above.)

	If the space in memory allocated by malloc is insufficient, then the allocation fails and malloc returns NULL pointer.
 */ 