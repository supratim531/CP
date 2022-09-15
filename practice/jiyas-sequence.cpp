// https://www.hackerearth.com/problem/algorithm/jiyas-sequence/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int n;
	cin >> n;
	uint64_t p = 1LL;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		p *= a;
	}

	int lsd = p % 10;
	bool flag = false;
	int seq[] = {2, 3, 5};
	for (int i = 0; i < 3; ++i)
		if (lsd == seq[i]) flag = true;
	(flag) ? cout << "YES\n" : cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
