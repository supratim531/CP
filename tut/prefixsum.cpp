/*
Given array A of N integers. Given Q queries and in each query 
given L and R. Print sum of array elements from index L to R.

NOTE: L and R included (1 based array index)

Constraints:
1 <= N <= 1e5
1 <= Q <= 1e5
1 <= L, R <= N
1 <= A[i] <= 1e9
*/

#include <iomanip>
#include <iostream>
using namespace std;

const int N = 1e5 + 10;
int64_t n, pf[N];

int main() {
	int q;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> pf[i];

	for (int i = 1; i < n; ++i)
		pf[i] += pf[i - 1];

	cin >> q;
	while (q --> 0) {
		int l, r;
		cin >> l >> r;
		--l, --r;
		cout << pf[r] - pf[l - 1] << '\n';
	}
	return 0;
}

/*
6
3 6 2 8 9 2

4
2 3
4 6
1 5
3 6
-----------
8
19
28
21
*/
