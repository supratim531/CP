/*
Given 2D array A of N * N integers. Given Q queries and in each 
query given a, b, c & d. Print sum of squares represented by 
(a, b) as top left point and (c, d) as bottom right point.

NOTE: a, b, c & d included (1 based array index)

Constraints:
1 <= N <= 1e3
1 <= Q <= 1e5
1 <= A[i][j] <= 1e9
1 <= a, b, c, d <= N
*/

#include <iomanip>
#include <iostream>
using namespace std;

const int N = 1e3 + 10;
int64_t n, pf[N][N];

int main() {
	int q;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> pf[i][j];
			pf[i][j] = pf[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
		}
	}
	cin >> q;
	while (q --> 0) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int64_t sum = pf[c][d] - pf[a - 1][d] - pf[c][b - 1];
		cout << sum << '\n';
	}
	return 0;
}

/*
3
3 6 2
8 9 2
3 4 1
4
1 1 2 2
1 2 3 3
1 2 2 3
2 1 3 3
-------
26
24
*/
