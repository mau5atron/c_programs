#include <string.h>
#include <stdio.h>

int main()
{
	char name[] = "Hello";

	int len1, len2;

	len1 = strlen(name);
	len2 = strlen("Hello World");

	printf("Length of %s = %d\n", name, len1);
	printf("Length of %s = %d\n", "Hello World", len2);

	return 0;
}