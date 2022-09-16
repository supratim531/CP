#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	/*
	Any 1 statement = 1 iteration
	int a;
	int sum = 0;
	int b = a + sum;
	Total 3 iterations = O(3)
	TC: O(3) ~= O(1)
	*/

	/*
	1. int a;
	2. int sum = 0;
	3. int b = a + sum;
	4. int n;
	5. cin >> n;
	Total 5 iterations = O(5)
	for (int i = 0; i < n; ++i); O(n) -> n iterations
	TC: O(5) + O(n) ~= O(n)
	*/

	/*
	O(N) is always judged for worst case
	O(K * N)
	if: K <<<<< N then TC: O(K * N) ~= O(N)
	if: K ~= N then TC: O(N * N) ~= O(N^2)
	*/

	/*
	Rough Estimation (not exact):
	1e7 itr. -> 1 sec (safe)
	1e8 itr. -> 10 sec (nutral)
	1e9 itr. -> 100 sec (dangerous)

	1e10 itr. -> 1000 sec (> 10 mint. dead...)
	1e11 itr. -> 10000 sec ...
	1e12 itr. -> 100000 sec ...

	N.B.: General online code exe. time limit : 1-2 sec
	*/

	// for (int i = 0; i < 1e5; ++i);
	// for (int i = 0; i < 1e7; ++i);
	// for (int i = 0; i < 1e9; ++i);
	// for (int i = 0; i < 1e10; ++i);

	/*
	suppose, n = 12
	let, n can be divided by 2 for x times
	now:
		2^x = n
		log2(2^x) = log2(n)
		x * log2(2) = log2(n)
		x = log2(n)
		so, x is TC: O(log(n))
	*/

	// Eg: O(log(n))
	int64_t n = 1e18;
	int ct = 0;
	while (n)
		n /= 2, ct++;
	cout << ct << '\n';
	return 0;
}
