#include <stdio.h>

int main()
{
	char name[] = "sam";

	char *p;
	p = name; // for string, only this declaration will store its base address
	for(p = name; *p != '\0'; ++p){
		printf("%c\n", *p);
		// printf("%s\n", p);
		// printf("%p\n", p);
	}

	/*
		In the above example, p stores the address of name[0], therefore value of *p equals the value of name[0] i.e. 'S'. So in while loop, the first character gets printed and ++p increases the value of p by 1 so that now 
		p + 1 points to name[1]. This continues until the pointer reaches the end of the string i.e. before *p becomes equal to '\0', because \0 is at the end of a string that ends it.
	*/ 

	// OR
	// A while loop can also be used to print out sam
	// while(*p != '\0'){
	// 	printf("%c\n", *p);
	// 	++p;
	// }

	return 0;

}