#include <stdlib.h>
#include <stdio.h>

/*
	typedef in C

	typedef keyword is used to assign a new name to a type. This is used
	just to prevent us from writing more. 

	For example, if we want to declare some varibles of type unsigned 
	int, we have to write 'unsigned int' in a program and it can be quite
	hectic for some of us. So, we can assign a new name of our choice for 
	'unsigned int' usinf 'typedef' which can be used anytime we want to use 
	unsigned int in a program. 

	typedef current_name new_name;

	typedef unsigned int uint;
	uint i, j;

	Now, we can write uint in the whole program instead of unsigned int. 
	The above code is the same as writing: 
	
	unsigned int i, j;
*/ 

int main()
{
	typedef unsigned int ui; // assigned ui to unsigned integer 
	// so i dont have to type out all that shit lmao

	ui i = 5, j = 8;
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	return 0;
}

/*
	Thus, we can assign a new name to any data type. 

	Similarly, we can also use typedef to assign a new name to structure
	which is a user-defined datatype as follows:

	typedef struct structure_name{
		data-type member-1;
		data-type member-2; 
		data-type member-3;
		data-type member-4;
	} type_name;

	Now, while declaring variables of this structure type, we can write type_name in place of struct structure_name in the whole program.
*/ 