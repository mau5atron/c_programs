#include <stdio.h>

int main(void)
{
	printf("This is a program with a ");	
	do_it("problem!"); // returns an error 
	/*
		returns implicit declaration of function 'do_it'
		and says it is invalid in C99 
	*/ 
	return 0;
}