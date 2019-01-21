#include <stdlib.h>
#include <stdio.h>

struct student1 {
	int roll_no;
	char name[40];
	int phone_number;
};

union student2{
	int roll_no;
	char name[40];
	int phone_number;
};

int main()
{
	struct student1 s1;
	union student2 u1;

	printf("Size of structure == %lu\n", sizeof(s1));
	printf("Size of union == %lu\n", sizeof(u1));

	return 0;
}

/*
	Talking about the above example, the amount of memory required
	to store a structure is the sum of the memory sizes of all its members. 

	In the above example, the memory sizes of the variables roll_no and 
	phone_number will be 4 bytes each(since both are of type integer)
	abd the memory size if the character array name[40] will be 40 bytes
	(since the array occupies the memory of 40 characters and the size and
	the size of char is 1). Thus, the memory occupied by the structure will 
	be 4+40+4 = 48 bytes

	Now coming to the union, the memory size of a union is equal to the
	size of its member occupying the maximum space in the memory. The 
	size of roll_no and phone_number is 4 bytes each and that of name[40]
	is 40 bytes. So, the union will occupy a memory space of 40 bytes. 

	*****So basically the member inside a union taking up the most space
	is the size that the union will take up.*****

	We can access only one member of union at a time because we have only 
	one location in memory for it, so only one member can be used at a time.
	All the othe members will contain the garbage value 
	(i.e. will get corrupted). This is not the case with structures where 
	we can access all the members' variables at the same time because 
	different memory spaces are occupied by each. 
*/ 