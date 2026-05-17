#include "logic.h"
#include <iostream>
using namespace std;

int main() {
	int num;

	cout << "Input your number: ";
	cin >> num;

	int count = count_num_digits(num);

	cout << "Current number has " << count << " digits.\n";

	return 0;
}