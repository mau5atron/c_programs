#include <stdio.h>

int main()
{	
	// not sure if I need this extra set of brackets 
	{
		int a = 1;

		do{
			printf("He was number %d!\n", a);
			++a;
		}
		while(a <= 10);
	}

	return 0;
}
