// https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

#include <bits/stdc++.h>
using namespace std;

long maximumSumSubarray(int K, vector<int> &Arr, int N) {
    // code here
    long sum;

    vector<long> h;

    for (auto &ele : Arr)
    	h.push_back(ele);

    for (int i = 1; i < N; ++i)
        h[i] += h[i - 1];

    for (int i = 0; i <= N - K; ++i) {
        if (i == 0)
            sum = h[K - 1];
        else {
            sum = max(sum, (h[i + K - 1] - h[i - 1]));
        }
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
