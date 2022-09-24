// https://codeforces.com/contest/1426/problem/D

#include <bits/stdc++.h>
using namespace std;

#define int int64_t

void run_case() {
	int n;
	cin >> n;
	map<int, int> mp; mp[0]++;
	int a[n], ans = 0, sum = 0;
	for (auto &ele : a)
		cin >> ele;
	for (int i = 0; i < n; ++i) {
		sum += a[i];
		if (mp.find(sum) != mp.end()) {
			ans++;
			sum = a[i];
			mp.clear();
			mp[0]++;
		}
		mp[sum]++;
	}
	cout << ans << '\n';
}

int32_t main() {
	int t = 1;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
