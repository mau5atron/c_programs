#include <stdio.h>

int main()
{
	FILE *fr;
	fr = fopen("filename", "mode");
	return 0;

	/*
		Here, fr is a pointer to a file, filename is the name of the file which we want to open and mode is the reason for which we want to open the file.
	*/ 

	/*
		When we use 'fopen()', then it searches the file on the disk and then loads the file on memory called buffer. The changes we made before closing are made in buffer memory. Buffer memory saves from accessing the disk again and again while making changes. 
	*/ 
}

/*
	Mode can take the following values: 

	r = opens a text file for reading 
	w = opens a file for writing 
	a = opens a text file for appending (appending means to add text at the end.)
	r+ = opens a text file for reading and writing

	w+ = opens a text file for both reading and writing (it first cuts the length of the file to zero if it exists, or create a file if it does not exist)

	a+ = opens a text file in bboth reading and writing mode. (It creates a file if it does not exist. Reading will start from the beginning but writing can only be done at the end.)

*/


/*
	Modes for dealing with binary: 

	rb

	wb

	ab

	rb+ 

	wb+ 

	ab+
*/ 