// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/a-needle-in-the-haystack-1/

#include <bits/stdc++.h>
using namespace std;

#define int int64_t

const int N = 1e5 + 10;
int hsh[26][N], pattern[26];

void run_case() {
	for (int i = 0; i < 26; ++i)
		pattern[i] = 0;

	for (int i = 0; i < 26; ++i)
		for (int j = 0; j < N; ++j)
			hsh[i][j] = 0;

	string p, s;
	cin >> p >> s;
	bool ans = false;
	int k = p.size(), n = s.size(), word = 0;

	for (int i = 0; i < k; ++i)
		pattern[p[i] - 'a']++;

	for (int i = 0; i < 26; ++i)
		if (pattern[i])
			word++;

	for (int i = 0; i < n; ++i)
		hsh[s[i] - 'a'][i] = 1;

	for (int i = 0; i < 26; ++i)
		for (int j = 1; j < n; ++j)
			hsh[i][j] += hsh[i][j - 1];

	for (int i = k - 1; i < n; ++i) {
		int ct = 0;
		for (int j = 0; j < 26; ++j) {
			if (pattern[j]) {
				if (i == (k - 1)) {
					if (hsh[j][i] == pattern[j])
						ct++;
				}
				else {
					if (hsh[j][i] - hsh[j][i - k] == pattern[j])
						ct++;
				}
			}
		}
		if (ct == word) {
			ans = true;
			break;
		}
	}
	(ans) ? cout << "YES\n" : cout << "NO\n";
}

int32_t main() {
	int t = 1;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
