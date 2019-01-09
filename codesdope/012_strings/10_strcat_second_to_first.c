#include <stdio.h>
#include <string.h>

int main()
{
	// strcat concatenates two strings by adding the second string to the first
	char s2[] = "World";
	char s1[20] = "Hello ";
	// Ensure to put a limit on the string size to avoid crazy large string
	printf("Target String 1 before strcat = %s\n", s1);
	strcat(s1, s2);
	printf("Source String = %s\n", s2);
	printf("Target String = %s\n", s1);

	return 0;
 }