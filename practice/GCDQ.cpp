// https://www.codechef.com/problems/GCDQ

/*

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a[N];

void run_case() {
	int n, q;
	cin >> n >> q;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	while (q --> 0) {
		int l, r;
		cin >> l >> r;
		int ans = 0;
		for (int i = 1; i <= n; ++i) {
			if (i >= l && i <= r) continue;
			else ans = __gcd(ans, a[i]);
		}
		cout << ans << '\n';
	}
}

int main() {
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a[N], l[N], r[N];

void run_case() {
	int n, q;
	cin >> n >> q;

	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		l[i] = r[i] = a[i];
	}

	l[0] = r[n + 1] = 0;
	for (int i = 1; i <= n; ++i)
		l[i] = __gcd(l[i], l[i - 1]);
	for (int i = n; i; --i)
		r[i] = __gcd(r[i], r[i + 1]);

	while (q --> 0) {
		int L, R;
		cin >> L >> R;
		cout << __gcd(l[L - 1], r[R + 1]) << '\n';
	}
}

int main() {
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
