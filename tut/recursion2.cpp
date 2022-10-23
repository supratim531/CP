// Find the factorial of a number using recursion

/*
5! = 5 * 4 * 3 * 2 * 1
5! = 5 * 4!
factorial(5) = 5 * factorial(4)
factorial(n) = n * factorial(n - 1)
*/

#include <iostream>
using namespace std;

int factorial(int n) {
	// Terminating Condition
	if (n == 0) return 1;

	return n * factorial(n - 1);
	// TC: O(n)
}

int main() {
	int n;
	cin >> n;
	cout << factorial(n) << '\n';
}

/*
1. No. of function / recursive calls.
2. Time complexity of that recursive function.
*/
