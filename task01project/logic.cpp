#include "logic.h"

int count_num_digits(int num) {
	// base case
	if (num < 10)
	{
		return 1;
	}

	// recursion case
	return count_num_digits(num / 10) + 1;
}
