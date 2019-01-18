/*
	this program taks input from the user
	then, takes that input and prints it out to a source text file
	all input is recorded, included spaces

	once the source file is not empty then the contents of the source file 
	are copied to a target file
*/ 
#include <stdio.h>

#define READ "r" // macro for read
#define WRITE "w" // macro for write 
#define MAXCHAR 100 // max char count for string literal array 

int main()
{
	FILE *s, *t, *u; // defining pointers 
	char *filename_source = "source.txt"; // source file 
	char *filename_target = "target.txt"; // target copy file
	char str[MAXCHAR];

	// instead of reading from the source file first 
	// I want to write to it and then read
	u = fopen(filename_source, WRITE); // pointer to write to source file
	s = fopen(filename_source, READ); // pointer to read source file
	t = fopen(filename_target, WRITE); // pointer to write to target file

	printf("Enter a string to write to source file: \n> ");
	// [] scanset character, ^\n take input until newline
	scanf("%[^\n]%*c", str); // ask user to write to source file
	fprintf(u, "%s\n", str); // output to string literal array 

	if(s == NULL){ // if the source file is empty then return error meessage 
		printf("Could not open the specified file.\n");
		return 1;
	} else if(s != NULL){
		printf("Copying initiated...\nCopying from source to target...\n");
		printf("Copying complete :)\n");
	}

	while(fgets(str, MAXCHAR, s) != NULL){
		// while the source file is not empty, do next stuff
		fputc(*str, t); // copying contents from string literal array 
	}

	printf("Target file now contains: %s\n", str);

	fclose(s);
	fclose(t);

	return 0;
}