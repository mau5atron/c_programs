/*
	The functions which we use for reading and writing depends on whether we are dealing with characters or strings. 
	
	For example, functions fgetc() and fputc() are used for reading and writing characters in a file. 

	Similarly, functions fscanf() and fprintf are used for reading and 
	writing strings in a file.

	Using fgetc() and fputc()

	fgetc() reads a character from a file opened in read mode using fopen().
	It returns EOF on reaching the end of the file. 

	fputc writes a character to a file opened in write mode using fopen()

*/


#include <stdio.h> 

#define MAXCHAR 1000 // defining maximum amount of allowed characters

int main()
{
	FILE *fp; // pointer to file
	char str[MAXCHAR]; // string/character liter array 
	char* filename = "prog.txt"; // defining file path

	fp = fopen(filename, "r"); // assignment of open file to variable 
	
	if(fp == NULL){ // if file does not exist, print this error message
		printf("Could not open the specified file.\n");
		return 1; 
	}

	while(fgets(str, MAXCHAR, fp) != NULL){	// if file exists enter while loop
		printf("%s\n", str); // print each string from array 
	}

	fclose(fp); // close file

	return 0; // end program owo
}