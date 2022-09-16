/*
Given array A of N integers. Given Q queries and in each query 
given a number X, print count of that number in array.

Constraint:
1 <= Q <= 1e5
1 <= N <= 1e5
1 <= X, a[i] <= 1e7
*/

#include <iomanip>
#include <iostream>
using namespace std;

const int N = 1e7 + 10;
int hsh[N] = {0};

void run_case() {
	int x;
	cin >> x;
	cout << hsh[x] << '\n';
}

int main() {
	int n, e;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> e;
		hsh[e]++;
	}
	int q;
	cin >> q;
	while (q --> 0)
		run_case();
	return 0;

	// TC: O(N) + O(Q) ~= O(N)
}

/*
3
5 7
2 7 7 7 3
4 9
1 2 5 7
8 9
3 56 3 13 67 9 9 1
------------------
3
0
2
*/
