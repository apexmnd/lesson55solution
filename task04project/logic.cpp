#include "logic.h"

int recursion(int n, int s) {
	// 1) base case
	if (s == n)
	{
		return true;
	}

	if (n == 0 || s == 0)
	{
		return false;
	}

	// recursion case

	int digit = n % 10;

	return recursion(n / 10, s - digit);
}

bool equals(int n, int s) {
	if (n < 0 or s < 0) {
		return false;
	}

	return recursion(n, s);
}
