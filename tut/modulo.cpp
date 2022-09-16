/*
Modular Arithmetic:
1. (a + b) % M = ((a % M) + (b % M)) % M
2. (a * b) % M = ((a % M) * (b % M)) % M
3. (a - b) % M = ((a % M) - (b % M) + M) % M
NOTE: adding extra M does not effect the actual value but make it +ve

4. (a / b) % M = ((a % M) * (b^-1 % M)) % M
NOTE: here b^-1 is multiplicative inverse (topic: binary | modular exp.)
*/

#include <iomanip>
#include <iostream>
using namespace std;

/*
Given a number N. Print its factorial

Constraints:
1 <= N <= 100

NOTE: print the answer in modulo M where M = 47 or 1e9 + 7
*/

const int32_t M = 1e9 + 7;

int main() {
	int n;
	cin >> n;

	/*
	int64_t fact = 1LL;
	for (int i = n; i; --i)
		fact *= i;
	cout << fact << '\n';
	*/

	// Here we need modular property

	int fact = 1;
	for (int i = n; i; --i) {
		fact = (fact * i) % M;
	}
	cout << fact << '\n';
	return 0;
}
