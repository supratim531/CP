/*
#include <bits/stdc++.h>
using namespace std;

int hsh[26];

void run_case() {
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;
	while (q --> 0) {
		int l, r, oct = 0;
		cin >> l >> r;
		--l, --r;
		for (int i = 0; i < 26; ++i) hsh[i] = 0;
		for (int i = l; i <= r; ++i) hsh[s[i] - 'a']++;
		for (int i = 0; i < 26; ++i) if (hsh[i] & 1) oct++;
		(oct == 0 || oct == 1) ? cout << "YES\n" : cout << "NO\n";
	}
}

int main() {
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
	// TC: O(T * (N + Q * (N))) ~= O(TN + TQN) ~= O(1e6 + 1e11) ~= O(1e11 | TQN)
}
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int hsh[26][N];

void run_case() {
	int n, q;
	cin >> n >> q;
	string s;
	cin >> s;

	for (int i = 0; i < 26; ++i)
		for (int j = 0; j < s.size(); ++j)
			hsh[i][j] = 0;

	for (int i = 0; i < s.size(); ++i)
		hsh[s[i] - 'a'][i] = 1;

	for (int i = 0; i < 26; ++i) {
		for (int j = 1; j < s.size(); ++j) {
			hsh[i][j] += hsh[i][j - 1];
		}
	}

	while (q --> 0) {
		int l, r, oct = 0;
		cin >> l >> r;
		--l, --r;
		for (int i = 0; i < 26; ++i) {
			if (hsh[i][n - 1] > 0) {
				if ((hsh[i][r] - hsh[i][l - 1]) & 1) oct++;
			}
		}
		(oct == 0 || oct == 1) ? cout << "YES\n" : cout << "NO\n";
	}
}

int main() {
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
	// TC: O(T * (4N + Q * 26) ~= O(4TN + 26TQ) ~= O(N + N) ~= O(1e6 + 1e6) ~= O(N)
}

/*
1
9 6
abbhhnsss
5 7
1 3
1 9
2 6
6 9
6 8
*/
