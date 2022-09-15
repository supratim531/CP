// https://www.hackerearth.com/problem/algorithm/gpl/

#include <bits/stdc++.h>
using namespace std;

void reverse(string &s) {
	int n = s.size();
	for (int i = 0; i < n / 2; ++i) {
		char temp = s[i];
		s[i] = s[n - 1 - i];
		s[n - 1 - i] = temp;
	}
}

void run_case() {
	int n;
	cin >> n;
	uint64_t ans = 0;
	string s;
	cin >> s;
	reverse(s);
	for (int i = 0; i < s.size(); ++i) {
		ans += (uint64_t(pow(2, i)) * (s[i] - '0'));
	}
	cout << ans << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
