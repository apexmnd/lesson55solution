#include "logic.h"

int power(int x, int n) {
	if (n < 0) {
		return 0;
	}
}



int recursion(int x, int n) {
	// base case
	if (n == 1)
	{
		return x;
	}

	// recursion case

	return recursion(x, n - 1) * x;
}