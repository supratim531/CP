#include <iostream>
using namespace std;

// merge sort

void merge(int A[], int l, int mid, int r) {
	// constructing
	int l_sz, r_sz;
	l_sz = (mid - l + 1), r_sz = (r - mid);
	int L[l_sz + 1], R[r_sz + 1];

	for (int i = 0; i < l_sz; ++i)
		L[i] = A[i + l];
	for (int i = 0; i < r_sz; ++i)
		R[i] = A[i + mid + 1];
	L[l_sz] = R[r_sz] = INT32_MAX;
	// constructing

	// merging
	int l_i = 0, r_i = 0;
	for (int i = l; i <= r; ++i) {
		if (L[l_i] <= R[r_i])
			A[i] = L[l_i++];
		else
			A[i] = R[r_i++];
	}
	// merging
	// TC: O(n)
}

void sort(int a[], int l, int r) {
	if (l == r) return;

	int mid = (l + r) / 2;
	sort(a, l, mid);
	sort(a, mid + 1, r);
	merge(a, l, mid, r); // -> O(n)
	// TC: O(n * log2(n))
}

void print(int a[], int n) {
	cout << "[ ";
	for (int i = 0; i < n; ++i)
		cout << a[i], (i == n - 1) ? cout << ' ' : cout << ", ";
	cout << "]\n";
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (auto &ele : a)
		cin >> ele;
	print(a, n);
	sort(a, 0, n - 1);
	print(a, n);
	return 0;
}
