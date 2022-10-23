// digit sum using recursion
// sum of n numbers using recursion

/*
ds(6732) = 6 + 7 + 3 + 2
ds(6732) = ds(673) + 2
digit_sum(n) = digit_sum(n / 10) + (n % 10)
*/

/*
sum(a, n) = a[n] + sum(a, n - 1)
*/

#include <iostream>
using namespace std;

int digit_sum(int n) {
	// Base Condition
	if (n == 0) return 0;

	int last_digit = n % 10;
	int remaining_number = n / 10;
	return digit_sum(remaining_number) + last_digit;
	// TC: O(no of digit in n) ~= O(log10(n))
}

int smart_digit_sum(int n) {
	if (n == 0) return 0;
	return digit_sum(n / 10) + (n % 10);
	// TC: O(no of digit in n) ~= O(log10(n))
}

int sum(int a[], int n) {
	// Base Condition
	if (n == 0) return a[n];

	return a[n] + sum(a, n - 1);
	// TC: O(n)
}

int main() {
	int d, n;
	cin >> n;
	int a[n];
	for (auto &ele : a)
		cin >> ele;
	cout << sum(a, n - 1) << '\n';
	cin >> d;
	cout << digit_sum(d) << '\n';
}
