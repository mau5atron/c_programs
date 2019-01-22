#include <stdlib.h>
#include <stdio.h>
/*
	Each variable has storage class which defines the features of that 
	variable. It tells the compiler about where to store the variable,
	its initial scope (visibility level) and lifetime (global or local)

	There are four storage classes in C. 

	auto
	extern
	static
	register
	
	Let's understand what each does.
	****auto****: 
	
	Variables which are defined within a function or a block (block is a 
	section of code which is grouped together e.g. statements written
	within curly braces constitute a block of code) by default belong 
	to the auto storage class. 

	These variables are also called local variables because these are local to the function and are by default assigned some garbage value. Since
	these variables are declared inside a function, therefore these can 
	only be accessed inside that function. There is no need to put 'auto'
	while declaring these varibles because these are by default auto.

	Though you have been using these auto(local) variables in your C 
	tutorial, let's see one example. 
*/

int sum(int n1, int n2){
	auto int s; // declaration of auto(local variable)
	s = n1 + n2;
	return s;
	// Here, the variable s is declared inside the function 'sum' and thus 
	// can only be used inside the function. There was no need to put 'auto'
	// while declaring it.
}

int main()
{
	int i = 2, j = 3, k;
	k = sum(i, j); // k == sum of i + j(n1 + n2)
	printf("Sum is: %d\n", k); // print out sum 
	return 0; // close program
}