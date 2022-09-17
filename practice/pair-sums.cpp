// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/pair-sums/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
int hsh[N] = {0};

void run_case() {
	int n, k, e;
	cin >> n >> k;
	bool ans = false;
	int rems[n] = {0};
	for (int i = 0; i < n; ++i) {
		cin >> e;
		hsh[e]++;
		rems[i] = e;
	}
	for (int i = 0; i < n; ++i) {
		int rem = k - rems[i];
		if (rem >= 0) {
			bool same = (rem == rems[i]) ? true : false;
			if (same) {
				ans = (hsh[rem] > 1) ? true : false;
				if (ans) break;
			} else {
				ans = (hsh[rem] >= 1) ? true : false;
				if (ans) break;
			}
		}
	}
	(ans) ? cout << "YES\n" : cout << "NO\n";
}

int main() {
	int t = 1;
	while (t --> 0)
		run_case();
	return 0;
}
