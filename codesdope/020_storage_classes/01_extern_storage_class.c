#include <stdio.h>
#include <stdlib.h>
/*
	We write **extern** keyword before a variable to tell the compiler 
	that this variable is declared somewhere else. Basically, by writing 
	extern keyword before any variable tells us that this variable is a global variable declared in some other program file. 

	Now, lets see what actually happens 

	You must be knowing what a global variable is. A global variable is a 
	variable which is declared outside of all the functions. It can be 
	accessed throughout the program and we can change its value anytime 
	within any function as follows. 
*/ 

int g;
void print(){
	g = 10;
	printf("g = %d\n", g);
}

int main()
{
	g = 7; 
	printf("g = %d\n", g);
	print(); // calling print function as we receive g = 10
	return 0;
}

/*
	Here, g is the global variable defined outside of all the functions. In
	the main function, its value was assigned as 7 and in the print function
	as 10.

	While declaring a global variable, some space in memory gets allocated 
	to it like all other variables. We can assign a value to it in the same
	program file in which it is declared as we did in the above example. But
	what if we want to use it or assign it a value in any other program 
	file?

	We can do so by using **extern** keyword. 

	firstfile.c

	int g = 0;

	In the first program file firstfile.c, we declared a gloabal variable 
	g. 

	Now, we will declare this variable 'g' as extern in a header file 
	**firstfile.h** and then declare it in the second file in which we
	want to use this variable. 

	firstfile.h
	extern int g;

	Now, in the second program file secondfile.c, in order to use the 
	global variable 'g', we need to include the header file in it by writing #include "firstfile.h". Here we assigned a value 4 to the 
	variable 'g' and thus the value of 'g' in this program becomes 4.
*/ 

/*
	#include "firstfile.h"

	main()
	{
		g = 4;
		printf("%d", g);
	}
*/ 