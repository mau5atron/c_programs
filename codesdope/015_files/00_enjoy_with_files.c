/*
	When a program runs, the data is in the memory but when it ends or the computer shuts down, it gets lost. To keep data permanentlym we need to write it in a file. 

	File is used to store data. In this topic, we will learn about 
	about reading data in the file. 

	Declaration of a file. 
*/
#include <stdio.h>

FILE *fr;

/*
	we can perform many functions with files. Some of these functions 
	are listed below
*/ 

fopen(); // create a new file or open an existing file
fclose(); // close a file
fgetc(); // read a character from a files
fputc(); // write a character to a file
fscanf(); // read a string from a file
fprintf(stderr, "%s\n", ); // write a string to a file

