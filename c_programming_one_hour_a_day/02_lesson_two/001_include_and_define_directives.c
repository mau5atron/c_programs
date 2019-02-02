// just notes OWO
#include <stdio.h>

int main(void)
{
	// #include
	/*
		The #include directive instructs the C compiler to add the contents 
		of the an include file into your program during compilation 

		An include file is a separate disk file that contains information 
		taht can be used by your program or the compiler. Several of these
		files (sometimes called header files) are supplied with your 
		compiler. 

		You use the #include directive to instruct the compiler to add a 
		specific include file to your program during compilation. 

		The #include directive is interpreted to mean 

			"Add the contents of the file stdio.h"
	*/ 

	// #define 
	/*
		The #define directive instructs the C compiler to replace a 
		specific term with its assigned value throughout your program. 

		By setting a variable at the top of your program and then using the
		term throughout the code, you can more easily change a term if needed
		by changing the single #define line as opposed to every place 
		throughout the code. For example, if you wrote a payroll program that
		used a specific deduction for health insurance and the insurance 
		rate changedm tweaking a variable created with #define named
		HEALTH_INSURANCE at the top of your program (or in header file)
		would be so much easier than searching through lines and lines of code
		looking for every instance that had the information. Lesson 3 covers
		the #define directive.
	*/ 
}