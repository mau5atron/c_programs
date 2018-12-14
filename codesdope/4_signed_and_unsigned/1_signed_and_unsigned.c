#include <stdio.h>

int main()
{
	char ch;

	printf("Enter a value for char: \n> ");
	scanf("%c", &ch);

	printf("\nCharacter value of character = %c\n", ch);
	printf("\nASCII value = %d\n", ch);

	return 0;
}