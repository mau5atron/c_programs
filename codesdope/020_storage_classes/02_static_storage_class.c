#include <stdio.h>
#include <stdlib.h>

/*
	A variable declared as static once initialized, exists till the end 
	of the program. If a static variable is declared inside a function, it 
	remains into existence till the end of the program and not get
	destroyed as the function exists (as in auto). If a static variable
	is declared outside all the functions in a program, it can be used 
	only in the program in which it is declared and is not visible to other
	program files(as in extern).

	Basically the scope of a static variable is only available in the 
	program where it is declared.
*/

static int g = 5;

void fn(){
	static int i = 0; // static variable only availible in this program 
	printf("g = %d\n", --g);
	printf("i = %d\n\n", ++i);
	// on each function call, g decrements by 1, i increments by 1
} 

int main()
{
	while(g >= 2){
		fn();
		fn();
		return 0;
	}
}

/*
	Here, g and i are the static variables in which 'g' is a global
	variable and 'i' is a local variable. If we had not written static
	before the declaration of 'i', then everytime the function 'fn()'
	would have been called, 'i' would have been declared every time with an initial value of 0 and as a function 'fn()' would exit, it would also 
	have got destroyed. 

	Basically, i kind of gets cached with static in front. Had static not
	been used, on the first function call i would increase only once 
	and every consecutive function call i would stay the same value as 
	before. 
*/ 