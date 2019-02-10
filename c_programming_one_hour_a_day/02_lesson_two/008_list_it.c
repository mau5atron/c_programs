/*
	This program prints out the contents in a file 
	
*/ 

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 256
#define READ "r"
#define WRITE "w"

void display_usage(void);
int line;

int main(int argc, char *argv[])
{
	// program displays listing with line numbers
	char buffer[BUFFER_SIZE];
	FILE *fp;

	if(argc < 2){
		display_usage(); // calls function
		return 1;
	}

	// if the file is empty 
	if((fp = fopen(argv[1], READ)) == NULL){
		fprintf(stderr, "Error opening file, 			%s!", argv[1]);
		return 1;
	}

	line = 1;

	while (fgets(buffer, BUFFER_SIZE, fp) != NULL){
		fprintf(stdout, "%4d:\t%s\n", ++line, buffer);
	}	

	fclose(fp);
	return 0;
}  	

void display_usage(void){
	fprintf(stderr, "\nProper usage is: \n");
	fprintf(stderr, "\n\nlist_it filename.ext\n");
}