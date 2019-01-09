/*
	Pre-processor processes our program before going to the compiler. 

	How to declare: 

	The pre-processor directives begin with a hash symbol (#). Pre-processor directives are preprocessor commands

	The most common pre-processor directive is: 

	#include 

	Here #include is a preprocessor directive and it makes header files like "stdio.h" available for us.

	Another example is: 

	#define PI 3.14

	Here, #define is a pre-processor directive. It is used to define something, like here we have defined that PI is 3.14. 
	So, before going to the compiler, if PI shows up anywhere in the program, it will be replaced by 3.14.

	Following is a C program to find the area of a circle.
*/ 

#include <stdio.h>

#define PI 3.14

int main()
{
	float radius;
	float area; 
	printf("Enter radius of circle\n> ");
	scanf("%f", &radius);
	// fgets(radius, 100, stdin);

	area = PI*radius*radius;
	// PI is replaced with 3.14 wherever it appears in the program before compiling 
	printf("Area of circle is %.2f\n", area);

	return 0;
}