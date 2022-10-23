#include <iostream>
using namespace std;

void func(int n) {
	// Base Condition
	if (n == 0) return;

	// cout << n << ' ';
	func(n - 1);
	// cout << n << ' ';
}

int main() {
	func(5);
}
