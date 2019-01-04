#include <stdio.h>
// ask the user for input to fill in the array
int main()
{
	int n[10]; //declaring n as an array of 10 integers 
	int i, j;

	for(i = 0; i < 10; ++i){
		printf("Enter value of n[%d]\n", i);
		scanf("%d", &n[i]);
	}
	// print element values
	for(j = 0; j < 10; ++j){
		printf("n[%d] = %d\n", j, n[j]);
	} 

	return 0;
}