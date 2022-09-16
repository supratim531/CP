// https://www.hackerrank.com/challenges/crush/problem

#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
int64_t A[N] = {0};

void run_case() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		int a, b, k;
		cin >> a >> b >> k;
		A[a] += k;
		A[b + 1] += (k * -1);
	}
	for (int i = 1; i <= n; ++i)
		A[i] += A[i - 1];

	cout << *max_element(A + 1, A + n + 1) << '\n';
}

int main() {
	int t = 1;
	// cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
