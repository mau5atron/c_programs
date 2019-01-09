/*
	#define can be used to write macro definitions also as follows. Macros ar like functions but are a bit different.

	Macros can take arguments.
*/ 

// #define area(r)(3.14*r*r)

// printing area of a circle using macros

#include <stdio.h>
#define area(r) (3.14*r*r)

int main()
{
	int radius;
	float area;

	printf("Enter radius of circle\n> ");
	scanf("%d", &radius);

	area = area(radius);
	// called macro and inputted stdin as argument
	printf("Area of circle is %.2f\n", area);

	return 0;
}

