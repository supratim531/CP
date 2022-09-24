// https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <bits/stdc++.h>
using namespace std;

long maximumSumSubarray(int K, vector<int> &Arr, int N) {
	long sum = -1;
	vector<long> Arr2(N);
	for (int i = 0; i < N; ++i)
		Arr2[i] = Arr[i];
	for (int i = 1; i < N; ++i)
		Arr2[i] += Arr2[i - 1];
	for (int i = K - 1; i < N; ++i) {
		if (i == (K - 1))
			sum = max(sum, Arr2[i]);
		else
			sum = max(sum, (Arr2[i] - Arr2[i - K]));
	}
	return sum;
}

void run_case() {
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (auto &ele : v)
		cin >> ele;
	cout << maximumSumSubarray(k, v, n) << '\n';
}

int main() {
	int t = 1;
	while (t --> 0)
		run_case();
	return 0;
}
