// https://www.hackerearth.com/problem/algorithm/city-tour/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int64_t n, b1, b2;
	cin >> b1 >> b2 >> n;

	int64_t p1 = 0, p2 = 0;
	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		p1 += a, p2 += b;
	}
	int64_t min_price = min(b1, b2);
	int64_t max_price = (b1 + b2) - min_price;

	int64_t min_p = (p1, p2);
	int64_t max_p = (p1 + p2) - min_p;

	int sol1 = (min_p * min_price) + (max_p * max_price);
	int sol2 = (min_p * max_price) + (max_p * min_price);
	cout << min(sol1, sol2) << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
