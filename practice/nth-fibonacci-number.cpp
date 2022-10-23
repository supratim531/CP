// https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1

/*
fib series = 0 1 1 2 3 5 8 13 21 34 55 89 144 ...
fib series = 1 1 2 3 5 8 13 21 34 55 89 144 ... -> it is for gfg
fib(5) = fib(4) + fib(3)
fib(n) = fib(n - 1) + fib(n - 2)
*/

#include <bits/stdc++.h>
using namespace std;

long long int nthFibonacci(long long int n) {
	// Base Cases
	if (n == 1 || n == 5) return n;
	if (n == 2 || n == 3 || n == 4) return n - 1;

	return nthFibonacci(n - 1) + nthFibonacci(n - 2);
	// TC: O(2^n)
}

long long int nthFibonacciSmart(long long int n) {
	// Base Cases
	if (n == 1 || n == 5) return n;
	if (n == 2 || n == 3 || n == 4) return n - 1;

	// need DP here...
	return nthFibonacci(n - 1) + nthFibonacci(n - 2);
	// TC: O(2^n)
}

void run_case() {
	long long int n;
	cin >> n;
	cout << nthFibonacci(n) << '\n';
}

int main() {
	int t = 1;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
