#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int x;
	int n;

	cout << "Input x and n: ";
	cin >> x >> n;

	int result = power(x, n);

	cout << result;

	return 0;
}