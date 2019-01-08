#include <stdio.h>

void display(char str[]){
	printf("Your string: %s\n", str);
	// printf("Your string: ")
	// puts(str); can also be used to print out
}

int main()
{
	char arr[30];
	printf("Enter string: \n> ");
	fgets(arr, 30, stdin); 
	// what you're inputting, size of input, going in or out
	// do not use gets, it is unsafe
	display(arr);
	return 0;
}