// https://www.hackerrank.com/challenges/recursive-digit-sum/problem

#include <bits/stdc++.h>
using namespace std;

/*
1 <= n <= 10^100000
*/

#define int int64_t

int string_sum(string &s) {
	int sum = 0;
	for (auto &ele : s)
		sum += (ele - '0');
	return sum;
}

int digit_sum(int n) {
	if (!n) return n;
	return digit_sum(n / 10) + (n % 10);
}

int ans(int n) {
	if (n < 10) return n;
	return ans(digit_sum(n));
}

void run_case() {
	int k;
	string s;
	cin >> s >> k;
	cout << ans(string_sum(s) * k) << '\n';
}

int32_t main() {
	int t = 1;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
