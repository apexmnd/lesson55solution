#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	const int size = 10;
	int array[size]{ 1 };
	
	int s = sum(array, size);

	cout << "Sum: " << s << ".\n";

	return 0;
}