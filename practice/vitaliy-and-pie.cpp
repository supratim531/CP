// https://codeforces.com/problemset/problem/525/A

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = 0;
	multiset<char> keys;
	for (int i = 0; i < s.size(); i += 2) {
		keys.insert(s[i]);
		if (s[i] != s[i + 1] + 32) {
			auto it = keys.find(s[i + 1] + 32);
			if (it != keys.end())
				keys.erase(it);
			else
				ans++;
		} else {
			keys.erase(keys.find(s[i]));
		}
	}
	cout << ans << '\n';
}

int main() {
	int t = 3;
	// cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
