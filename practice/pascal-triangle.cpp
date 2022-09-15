// https://www.hackerearth.com/problem/algorithm/christmas-tree-of-height-n/

#include <bits/stdc++.h>
using namespace std;

const int N = 50;
uint64_t a[N][N];

void run_case() {
	int n;
	cin >> n;
	a[0][0] = 1;

	for (int i = 1; i < n; ++i) {
		for (int j = 0; j <= i; ++j) {
			if (j != 0 && j != i)
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
		a[i][0] = 1;
		a[i][i] = 1;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j <= i; ++j)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
}

int main() {
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
