// https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int a[n];
	for (auto &ele : a)
		cin >> ele;

	for (int i = 0; i < n; ++i) {
		swap(a[i], a[n - 1]);
	}

	for (auto &ele : a)
		cout << ele << ' ';
	cout << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
