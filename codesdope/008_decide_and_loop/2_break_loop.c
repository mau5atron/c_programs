#include <stdio.h>

int main()
{
	int a;

	for(a = 1; a <= 10; ++a){
		printf("yee number %d\n", a);

		if(a == 5){
			// breaks out of the loop once a is equal to 5
			break;
		}
	} 
	return 0;
}