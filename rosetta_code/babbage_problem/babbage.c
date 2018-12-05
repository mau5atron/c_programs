#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main()
{
	int current = 0; // current number 
	int square = 0; // the square of the current number

	// the strategy to take the rest of the division by 1e06 is 
	// to take the a number how 6 last digits are 269696
	while ((current*current % 1000000 != 269696) && (square < INT_MAX)) {
		++current;
	}

	// the output
	if (square > INT_MAX)
		printf("Condition not satisfied before INT_MAX reached.");
	else 
		printf("The smallest number whose square ends in 269696 is %d\n", current);

	// fin :^)
	return 0;
}