#include <stdio.h>
#include <stdlib.h>

// this program iterates over an array and displays each element squared.

int main(void){
	// declarations	
	double A[5] = {
		[0] = 9.0,
		[1] = 2.9,
		[4] = 3.E+25,
		[3] = .00007,
	};

	// doing some work

	for (size_t i = 0; i < 5; ++i) {
		printf("element %zu is %g, \tits square is %g\n", 
					i, 
					A[i],
					A[i]*A[i]);
	}
	// this was previously exit success but should be 0
	return 0;

};

// to compile the program: 
// gcc -Wall -o listing_1_a_first_example_of_a_c_program listing_1_a_first_example_of_a_c_program.c


// to run the program, type in terminal: 
// ./listing_1_a_first_example_of_a_c_program 

// -Wall: tellls the compiler to warn us about anything unusual 
// -o: tells the compiler to store the compiler output in a file named by our
// choosing
// -lm : tells the compiler to add some standard mathematical functions if 
// necessary

// HOW TO: Use different compilers

// clang -Wall -lm -o getting-started getting-started.c
// gcc -std=c99 -Wall -lm -o getting-started getting-started.c
// icc -std=c99 -Wall -lm -o getting-started getting-started.c


// clange will give longer and better diagnostic output




