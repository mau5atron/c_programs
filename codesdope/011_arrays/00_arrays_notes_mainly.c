#include <stdio.h>
// an array is a collection of things 

/*
	In C, an array is a collection but of similar type of data which can be either of int, float, double, char (String), etc (cannot be a collection where some of the data are of type integer and some of are float).
*/ 

int main()
{
	// declaring an array
	/*
		datatype array_name[array_size];

		For example: take an integer array 'n'

		int n[6];

		n[] is used to denote an array 'n' 

		So, n[6] means that 'n' is an array of 6 integers. 6 is the size of the array i.e. there are 6 elements of the array 'n';

		Giving array size i.e. 6 is necessary because the compiler needs to allocate space to that many integers. Compiler determines the size of the array by calculating the number of elements of an array. 

		'int n[6]' will allocate space to 6 integers. 

		We can also declare an array by another method.

		int n[] = {2, 3, 5, 15, 20, 30};

		In this case, we are declaring and assigning values to the array aty the same time. Here, no need to specify the array size because compiler gets it from {2, 3, 5, 15, 20, 30}.

		Assigning values to Array

		By writing int n[] = {2, 4, 8};, we are declaring and assigning values to the array at the same time, thus initializing it. 

		But when we declare an array like int n[3];, we need to assign values to it separately. Because 'int n[3];' will definitely allocate space of 3 integers in memory but there are no integers in that.

		To initialize it, assign a value to each of the elements of the array.

		n[0] = 2;
		n[1] = 4;
		n[2] = 8;

		It is just like we are declaring some variables and then assigning values to them. 

		int x, y, z;
		x = 2;
		y = 4;
		z = 8;

		Thus, the first way of assigning values to the elements of an array is by doing so at the time of its declaration. 

		int n[] = {2, 4, 8};

		and the second method is declaring the array first and then assigning values to its elements.

		int n[3];

		n[0] = 2;
		n[1] = 4;
		n[2] = 8;

		Just like variable, array can be of any other data type also. 

		float f[] = {1.1, 2.3, 4.5};
		
		Here, f is an array of floats.

		Next, gonna work on an example to calculate the average of the marks of 3 students. Here, marks[0] represents the marks of the first student, marks[1] represents marks of the second and marks[2] represents marks of the third student. 

	*/ 
}