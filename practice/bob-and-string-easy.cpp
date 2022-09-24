// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/bob-and-string-easy/

#include <bits/stdc++.h>
using namespace std;

int hsh1[26] = {0}, hsh2[26] = {0};

void run_case() {
	for (int i = 0; i < 26; ++i) hsh1[i] = hsh2[i] = 0;
	string t, s;
	cin >> t >> s;
	for (auto &ele : t) hsh1[ele - 'a']++;
	for (auto &ele : s) hsh2[ele - 'a']++;
	int64_t ans = 0;
	for (int i = 0; i < 26; ++i)
		ans += (abs(hsh1[i] - hsh2[i]));
	cout << ans << '\n';
}

int main() {
	int t = 1;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
