#include <stdio.h>

int main()
{
	/*
		When we declare 'a', it is given a memory location and the value of 'a' is stored in that memory location. In the world of programming, 'a' will also have an address. So, this address is the address of that memory location in which the value of 'a' is stored.

		Address of 'a' is an integer which is something like 9562628. It will vary for every computer as per memory given to 'a' at that time.
	*/

	// How to use pointers 

	int a = 44; // an integer

	int *b; // declaration of a pointer
	// the * before b means that b points to some integer 
	b = &a; // b integer is now pointing to a 
	// *b will now represent a
	printf("Value of a: %d\n", a);
	printf("Value of *b: %d\n", *b);
	return 0;
}