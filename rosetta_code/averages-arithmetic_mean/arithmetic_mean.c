#include <stdio.h>

// compute mean of a "double" array of given length. If length is zero, does whatever "0.0/0" does (usually means returning NaN)

double mean(double *v, int len) {
	double sum = 0;
	int i;

	for (i = 0; i < len; ++i) {
		sum += v[i];
	}

	return sum / len;
}

int main(void)
{
	double v[] = { 1, 2, 2.718, 3, 3.142 };
	int i, len;

	for (len = 5; len >= 0; --len) {
		printf("mean[");
		for (i = 0; i < len; ++i) {
			printf(i ? ", %g" : "%g", v[i]);
		}

		printf("] = %g\n", mean(v, len));
	}

	return 0;
}