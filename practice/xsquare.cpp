// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/xsquare-and-double-strings-1/

#include <bits/stdc++.h>
using namespace std;

int hsh[26];

void run_case() {
	string s;
	cin >> s;
	bool ans = false;

	for (int i = 0; i < 26; ++i)
		hsh[i] = 0;
	for (auto &ele : s)
		hsh[ele - 'a']++;
	for (int i = 0; i < 26; ++i) {
		if (hsh[i] >= 2 && hsh[i] != 0) {
			ans = true;
			break;
		}
	}
	(ans) ? cout << "Yes\n" : cout << "No\n";
}

int main() {
	int t = 1;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
