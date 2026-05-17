#include "logic.h"

int recursion(int num) {
	// base case
	if (num < 10)
	{
		return 1;
	}

	// recursion case

	return recursion(num / 10) + 1;

}

int count_num_digits(int num) {
	// fool-proof
	if (num < 0) {
		num *= -1;
	}

	return recursion(num);
}