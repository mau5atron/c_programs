#include <stdio.h>

int main()
{
	/* 
		2-dimensional arrays exist and are generally known as a matrix. These consist of rows and columns.
	*/

	// declaring a 2d array of type int
	int a[2][4];
	// translates to (2 rows and 4 columns)
	/*
		row 0: a[0][0], a[0][1], a[0][2], a[0][3]
		row 1: a[1][0], a[1][1], a[1][2], a[1][3]
	*/ 

	// there are two ways to assign values to 2-dimensional arrays
	// First method: assign a value to the elements of the array. If no value is assigned to any element, then its value is assumed to be zero. 

	// ex. 
	int b[2][2];
	b[0][0] = 1;
	b[0][1] = 2;
	b[1][0] = 3;
	b[1][1] = 4;

	// Second method: declare and assign values at the same time as we did in one-dimensional array.
 int a[2][3] = {1, 2, 3, 4, 5, 6};
 /*
	Here, value of a[0][0] is 1, a[0][1] is 2, a[0][2] is 3, a[1][0] is 4, a[1][1] is 5, a[1][2] is 6;
 */ 

 // can also be written as 

 int a[2][3] = {
 	{1, 2, 3},
 	{4, 5, 6}
 };

 /*
 	big fat nut note:
	
	While assigning values to an array at the time of declaration,there is no need to give dimensions in on dimensional array, but in a 2D array, we need to give at least the second dimension.
 */ 

 // Lets consider different cases of assigning values to an array at the time of declaration.

 int c[2][2] = {1, 2, 3, 4}; // valid
 int d[][2] = {1, 2, 3, 4}; // valid
 int e[2][] = {1, 2, 3, 4}; // invalid
 int f[][] = {1, 2, 3, 4}; // invalid

 
}