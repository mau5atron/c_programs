#include <stdio.h>
#include <string.h>

int main()
{
	// Just notes lol
	/*
		We can perform different kind of string functions like joining of 2 strings, comparing one string with another or finding the length of the string. Let's have a look at the list of such functions 
	*/ 

	strlen; // calculates the length of a string
	strcat; // appends one string at the end of another
	strncat;// Appends first n characters of a string at the end of another 
	strcpy; // copies a string into another
	strncpy; // copies first n characters of one string into another
	strcmp; // compares two strings 
	strncmp; // compares first n characters of two strings 
	strchr; // finds first occurrence of a given character in a string
	strrchr; // finds last occurrence of a given character of a string
	strstr; // finds first occurrence of a given string in another string

	/*
		These functions are defined in "string.h" header file, so we need to include this header file also in our code

		Some of the most common functions used from string header file: 
		(strlen), (strcpy), (strcmp)

		strlen(s1) calculates the length of s1

		Note: white space is also calculated in length of string
		Also: strlen does not count '\0' while calculating the length of a string 
 
		strcpy(s1, s2) copies the second string s2 to the first string s1

		strcmp(s1, s2) compares two strings and finds out whether they are same or different. It compares the two strings character by character till there is a mismatch. If the two strings are identical, it returns a 0. If not, then it returns the difference between the ASCII values of the first non-matching pair of characters.
	*/

}