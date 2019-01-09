#include <stdio.h>
#include <string.h>

int main()
{
	char s2[] = "Hello";
	char s1[10];

	printf("Target string before strcpy = %s\n", s1);
	strcpy(s1, s2);
	printf("Source string = %s\n", s2);
	printf("Target string after strcpy = %s\n", s1);

	return 0;
}