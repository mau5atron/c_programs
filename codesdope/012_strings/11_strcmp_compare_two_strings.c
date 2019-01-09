#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "Hello";
	char s2[] = "World";

	int i, j;

	i = strcmp(s1, "Hello");
	j = strcmp(s1, s2);
	printf("s1 = %s, s2 = %s\n", s1, s2);
	printf("s1 and 'Hello' = %d\n s1 and s2 = %d\n", i, j);

	return 0;
}