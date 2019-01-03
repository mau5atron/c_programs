#include <stdio.h>

int main()
{
	int a = 1;

	int *p;
	p = &a;

	// to print out the value of the pointer, need to use %p
	printf("p = %p\n", p); // p = 0x7fff57d3c988
	printf("*p = %d\n", *p); // *p = 10


	// standard C11 states that:
	// 'p' The argument shall be a pointer to void. The value of the pointer is converted to a sequence of printing characters, in an implementation-defined manner.

	/* On most machines, you would get away with omitting an explicit cast. However, it would matter on a machine where the bit representation of a char* address for a given memory location is different from the 'anything else pointer' address for the same memory location. This would be a word-addressed, instead of byte-addressed, machine. Such machines are not common, (probably not available (some guy speaking about their first byte code computer )) these days, but the first machine I worked on after university was on such (ICL Perq).
	*/

	/*
		If you aren't happy with the implementation-defined behaviour of %p, then use C99 <inttypes.h> and uintptr_t instead:

		printf("0x%" PRIXPTR "\n", (uintptr_t)your_pointer);

		This allows you to fine-tune the representation to suit yourself. I chose to have the hex digits in upper-case so taht teh number is uniformly the same height and the characteristic dip at teh start of 0xA1B2CDEF apears thus, not like 0xa1b2cdef which dips up and down along the number too. The (uintptr_t) cast is unambiguously recommended by GCC when it can read the format string at compile time. I think it is correct to request the cast, though I'm sure there are some who would ignore the warning and get away with it most of the time.


		§2.12.3 Pointer Types

		All function pointer types shall ahve the same representation as the type pointer to void. Conversion of a function pointer to (void *). Conversion of a function pointer to (void*) shall not alter the representation. A (void*) value resulting from such a conversion can be converted back to teh original function pointer type, using an explicit cast, without loss of information. 

		Note: The ISO C standard does not require this, but it is required for POSIX conformance. 

		SO BASICALLY, explicit casts to (void*) are strongly advisable for maximum reliability in the code when passing a pointer to a variadic function such as printf(). On POSIX systems, it is safe to cast a function pointer to a void pointer for printing. On other systems, it is not necessarily safe to do that, nor is it necessarily safe to pass pointers other than (void*) without a cast.
	*/

	/* Big fat note: 
			'p' is a pointer to 'a';
			'a' has a value of 10;
			'*p' will have a value of 10;
			p == address, address == address of a
			'&p' represents address of 'p'
	*/	

 	printf("&p = %p\n", (void*)&p); // &p = 0x7fff57d3c980
	printf("*&p = %p\n", (void*)*&p); // *&p = 0x7fff57d3c988

	return 0;
}