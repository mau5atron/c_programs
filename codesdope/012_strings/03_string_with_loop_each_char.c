#include <stdio.h>

int main()
{
	int i;
	// declaring string of length 25 with name 'name'
	char name[25];

	printf("Enter your name pls: \n> ");
	// scanf("%s", name);
	// This one takes in a max of 25 characters (naturally able to take in specified 100 characters)
	fgets(name, 25, stdin);

	// or can use
	// scanf(“%[^\n]%*c”, name);
	// will read input until reaching a newline

	// OR
	// you can use buffer: 
	// fgets(name, 100, stdin);
	// however, it has a limitation length 100 of the buffer, so it needs to be adjusted

	printf("Your name is %s\n", name);

	printf("also heres all the letters you used you dumb bitch\n\n");
	for(i = 0; i < sizeof(name); ++i){
		printf("%c\n", name[i]);
	}
	return 0;
}