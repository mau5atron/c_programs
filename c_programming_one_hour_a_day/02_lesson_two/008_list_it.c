/*
	This program prints out the contents in a file 

*/ 

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256 // Preallocated memory to 256 bytes
#define READ "r"
#define WRITE "w"

void display_usage(void); // declaring function 
int line; // declaring line integer

// main function has arguments for a calling file, then the argument
// file name 
// this program can be called with:
// ./008_list_it 008_list_it.c 
// will print out contents of the file as if using cat 
int main(int argc, char *argv[])
{
	// program displays listing with line numbers
	char buffer[BUFFER_SIZE]; // declaring buffer size with constant
	FILE *fp; // declaring pointer

	if(argc < 2){
		display_usage(); // calls function
		return 1;
	}

	// if the file is empty 
	if((fp = fopen(argv[1], READ)) == NULL){
		fprintf(stderr, "Error opening file, %s!", argv[1]);
		return 1;
	}

	line = 1; // assigning 1 to line

	/*
		if file is not empty, has contents, and contents are within buffer
		size.
	*/ 

	while (fgets(buffer, BUFFER_SIZE, fp) != NULL){
		fprintf(stdout, "%4d:\t%s\n", ++line, buffer);
	}	

	fclose(fp); // close 
	free(fp); // free pointer memory allocated
	return 0;
}  	

void display_usage(void){
	fprintf(stderr, "\nProper usage is: \n");
	fprintf(stderr, "\n\nlist_it filename.ext\n");
}