#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int n;
	int s;

	cout << "Input your numbers: ";
	cin >> n;
	cout << "Input the sum: ";
	cin >> s;

	bool result = equals(n, s);

	cout << "result: " << (result ? "Yes" : "No") << endl;

	return 0;
}