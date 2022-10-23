#include <iostream>
using namespace std;

// selection sort

void sort(int a[], int n) {
	for (int i = 0; i < n; ++i) {
		int min_index = i;
		for (int j = i + 1; j < n; ++j) {
			if (a[j] < a[min_index])
				min_index = j;
		}
		swap(a[i], a[min_index]);
	}
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
	sort(a, n);
	print(a, n);
	return 0;
}
