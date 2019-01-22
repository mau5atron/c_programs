#include <stdio.h>

// Register
/*
	Register tells the compiler that the variable will get stored in a 
	register instead of memory (RAM). We can access a register variable 
	faster than a normal variable. Not all the registers defined 
	as register will get stored in a register since it depends on various
	restrictions of implementation and hardware. 

	We cannot access the address of such variables since these do not have a
	memory location as which becomes clear by the following example. 
*/ 

int main()
{	

	/*
		Registers are faster than memory to access, so the variables which 
		are most frequently used in a C program can be put in registers using 
		'register' keyword. The keyword register hints to compiler that a 
		given variable can be put in a register. It's compiler's choice to 
		put it in a register or not. Generally, compilers themselves do 
		optimizations and put the variables in register. 
		
		1) if you use & operator with a register variable then the compiler
		may give an error or warning (depending upon the compiler you are 
		using), because when we say a variable is a register, it may be 
		stored in a register instead of memory and accessing address of a 
		register is in-valid.

	*/ 
	// the following code to use a register will produce an error 
	// register int n = 20; 
	// int *ptr;
	// ptr = &n;
	// printf("address of n: %u\n", ptr);
	// return 0;

	/*
		2) Register keyword can be used with pointer variables. Obviously, a 
		register can have address of a memory location. There would not be
		any problem with the below program. 
	*/

	// the right way to use a register for for faster variable calls
	int n = 20;
	register int *ptr = &n;
	printf("%d\n", *ptr);
	return 0;

	/*
		There is no limit on the number of register variables in a C program, 
		butthe point is compiler may put some variables in register and some
		not. 
	*/ 
}