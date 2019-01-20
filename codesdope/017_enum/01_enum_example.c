#include <stdio.h>
#include <stdlib.h>
/*
	Values of the Members of Enum

	All the elements of an enum have a value. By default, the value of the first element is 0, that of the second elemnt is 1 and so on.

	Let's see an example.
*/ 

enum season{
	Summer, 
	Spring, 
	Winter, 
	Autumn
};

int main()
{
	enum season s;
	s = Summer;
	printf("%d\n", s); 
	// prints out the index position of the enum 
	// as if it were in an array
	return 0;
}

/*
	Here, first we defined an enum named 'season' and declared its variable 
	's' in the main function as we have seen before. The values of Summer,
	Spring, Winter and Autumn are 0, 1, 2 and 3 respectively. So, by 
	writing s = Spring, we assigned a value '1' to the variable 's'
	since teh value of 'Spring' is 1

	We can also change the default value and assign any value of our choice
	to an element of enum. Once we change the default value of any enum 
	element, then the values of all the elements after it will also 
	be changed accordingly. 
*/ 