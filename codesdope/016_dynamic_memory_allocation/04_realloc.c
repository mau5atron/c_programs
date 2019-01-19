#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*
	Suppose we allocated more or less memory than required, then we can
	change the size of the previously allocated memory space using realloc

	void *realloc(pointer, new-size);
*/ 
int main()
{
	// example
	char *p1; // pointer to space in memory
	int m1, m2;	// byte sizes

	m1 = 10; // size 1 10 bytes
	m2 = 20; // size 2 20 bytes

	p1 = (char*)malloc(m1); // allocating memory space of 10 bytes
	strcpy(p1, "Codesdope"); // copies string s2 into s1

	// allocating(reallocating) memory space for 20 bytes
	p1 = (char*)realloc(p1, m2); 

	strcat(p1, "Practice"); // appends "Practice" at end of p1, which is
	// "Codesdope" is now equal to "CodesdopePractice"
	printf("%s\n", p1); // prints out "CodesdopePractice"
	return 0;
}