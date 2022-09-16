/*
Given T test cases and in each test case a number is N. You have
to print the factorial of N.

NOTE: print the answer in modulo (1e9 + 7)

Constraint:
1 <= T <= 1e5
1 <= N <= 1e5
*/

#include <iomanip>
#include <iostream>
using namespace std;

const int M = 1e9 + 7, N = 1e5 + 10;
int hsh[N];

void run_case() {
	int n;
	cin >> n;
	cout << hsh[n] << '\n';
}

int main() {
	hsh[0] = hsh[1] = 1;
	for (int i = 2; i < N; ++i)
		hsh[i] = (hsh[i - 1] * i) % M;
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
