// https://www.hackerearth.com/problem/algorithm/too-lazy-to-name-the-question/

#include <bits/stdc++.h>
using namespace std;

int _lcm(int a, int b) {
	for (int i = 2; i <= a * b; ++i)
		if (i % a == 0 && i % b == 0)
			return i;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int p = 0, res, step;

	for (int i = 2; true; ++i) {
		if (i % a == 0 || i % b == 0) {
			p++;
		}
		if (p == c) {
			res = i;
			cout << i << ' ';
			break;
		}
	}

	if (res % a == 0 && res % b == 0)
		step = _lcm(a, b);
	else if (res % a == 0)
		step = a;
	else if (res % b == 0)
		step = b;

	while (res > 0) {
		res -= step;
		cout << res << ' ';
	}
	return 0;
}
