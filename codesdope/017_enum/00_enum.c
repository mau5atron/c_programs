#include <stdlib.h>
#include <stdio.h>

/*
	Enumeration(enum) is a user-defined datatype (same as structure). 
	It consists of various elements of that type. There is no such 
	specific use of enum, we use it to make code refined and readable.
	C programs can be written without ever having to use enum.

	For example, Summer, Spring, Winter and Autumn are the names of four 
	seasons. Thus, we can say that these are of type 'season'. Therefore,
	this becomes an enumeration with name season and Summer, Spring, Winter
	and Autumn as its elements.

	Defining an enum: 

	An enum is defined is the same way as a structure with the keyword 
	struct replaced by the keyword enum and the elements separated by 
	"comma" as follows. 
	enum enum_name{
		element1, 
		element2, 
		element3, 
		element4,
	};

*/ 

// example of enum
enum season{
	// these are elements	
	Summer, 
	Spring,
	Winter, 
	Autumn,
};

int main()
{
	// s is the variable of the enum named season. This will represent 
	// a season
	/*
		This variable will represent a season. We can also declare an enum varible as follows.


	enum season{
	// these are elements	
	Summer, 
	Spring,
	Winter, 
	Autumn,
	} s;
	*/ 
	enum season s; 
}