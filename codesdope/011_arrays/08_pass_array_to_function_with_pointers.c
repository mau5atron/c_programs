#include <stdio.h>

int display(int *p){
	printf("Calling display function...\n");
	int i;
	for(i = 0; i < 8; ++i){
		printf("n[%d] = %d\n", i, *p);
		++p;
	}
	printf("Ending display function...\n");
	return *p;
}

int main()
{
	int n[] = {1, 2, 3, 4, 5, 6, 7, 8};
	display(n);
	return 0;
}