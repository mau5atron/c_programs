#include <stdio.h>

int main()
{
	// Signed values:
		// Can take all values that are negative, positve, or 0

	// Unsigned values: 
		// Can take all values that are 0 or positive

	// Declaration: 
		// Both signed and unsigned values can be declared with int or char
	// NOTE it is not necessary to declare variables as signed, they are signed by default

	// 16 or 32 bit Compilers 

	// Type: int
		// Size: 	2 or 4 bytes
		// Range of value: -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647

	// Type: unsigned int
		// Size: 2 or 4 bytes
		// Range of value: 0 to 65,535 or 0 to 4,294,967,295

	// Type: char
		// Size: 1 byte
		// Range of value: -128 to 127 or 0 to 255

	// Type: signed char
		// Size: 1 byte
		// Range of value: -128 to 127

	// Type: unsigned char
		// Size: 1 byte
		// Range of value: 0 to 255

	// Printing: 
		// in printf %d is used for integers and %u for unsigned integers

	// Storing characters: how they are stored
		// Whenever a character value is given to a variable of type char, its ASCII value gets stored (and not the character value)
		// While printing a character, if we use %c, then its character value will be displayed and if we use %d, then its integer value (ASCII value) will be displayed. 

	// Type casting:
		// given a variable whose value is 23.2332 but at some line of your code you want to use its intger value only ie 23
		// In this scenario you would use type casting
		// Type casting is the conversion of a variable from one data type to another data type. 

		// For example, if we want to convert a char value to an int value.

		// Type conversions are of two types - implicit and explicit 

		// Example: 
			// Suppose we are adding two numbers. The first number is of type int and the second number is of type float Since we cannot add an int and a float, both numbers have to be of the same data type ie, either both are int or both are float. Since float is a larger data type than int, therefore int variable gets converted into float automatically and then both the float variables add up. This automatic converion is called implicit conversion. 

		// all the character variables get converted to integers while performing arithmetic operations or in any other such expression. 
}