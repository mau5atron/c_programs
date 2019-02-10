// this program prints out all the chars in the alphabet
#include <stdio.h>

int main()
{
	int ctr; 

	for(ctr = 65; ctr < 91; ++ctr){
		printf("%c\n", ctr);
	}
	return 0;
}