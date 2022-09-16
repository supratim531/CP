// https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	int a[n];
	for (auto &ele : a)
		cin >> ele;
	int req = *min_element(a, a + n);
	if (k - req < 0) cout << 0 << '\n';
	else cout << k - req << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
