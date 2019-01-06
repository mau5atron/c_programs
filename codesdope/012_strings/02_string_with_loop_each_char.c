#include <stdio.h>
// 1:
// takes the characters in the string and prints them out individually 
// int main()
// {
// 	char str[] = "hewwo";
// 	int i;

// 	for(i = 0; i < 6; ++i){
// 		printf("%c\n", str[i]);
// 	}
// 	return 0;
// }

// if we wanted to write this asking for user input 

// 2: 
// takes input from the user and prints out the characters individually 
// this only works with a single typed string, no spaces
int main()
{
	int i;
	char *str;

	printf("Please enter a string you dumb bitch: \n> ");
	scanf("%s", *&str);
	printf("You typed: %s\n", str);
	printf("Now here is your shit but lowered.\n");
	for(i = 0; i < sizeof(str); ++i){
		printf("%c\n", str[i]);
	}

	return 0;
}