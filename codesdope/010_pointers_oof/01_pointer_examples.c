#include <stdio.h>

int main()
{
	int a = 10;

	int *p;
	p = &a;

	// to print out the value of the pointer, need to use %p
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);
	// standard C11 states that:
	// 'p' The argument shall be a pointer to void. The value of the pointer is converted to a sequence of printing characters, in an implementation-defined manner.
	printf("&p = %p\n", (void*)&p);
	printf("*&p = %p\n", (void*)*&p);

	return 0;
}