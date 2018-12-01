#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
	int *result = (int *)malloc(sizeof(int) * 2);
	int i, j;
	int a, b;

	for (i=0; i < numsSize; ++i) {
		a = nums[i];

		for (j=i+1; j < numsSize; ++j) {
			b = nums[j];

			printf("a: %d\n", a);
			printf("b: %d\n", b);

			if ((a + b) == target) {
				result[0] = i;
				result[1] = j;
				return result;
			}
		}
	}
	return result;
}



int main(int argc, char const *argv[])
{
	/* code */
	int nums[] = {3, 2, 4};

	int *data = twoSum(nums, 3, 6);

	printf("First: %d, second: %d\n", data[0], data[1]);

	free(data);
	return 0;
}