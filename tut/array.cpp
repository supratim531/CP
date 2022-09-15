#include <iomanip>
#include <iostream>
using namespace std;

const uint64_t N = 1e7; // max global array size
int A[N];

int main() {
	uint64_t n = 1e5; // max local array size
	int a[n];
	a[n - 1] = 108;
	cout << a[n - 1] << '\n';
	A[N - 1] = 11908;
	cout << A[N - 1] << '\n';

	cout << '\n';
	for (int i = -5; i; ++i)
		cout << a[i] << ' ' << A[i] << '\n';
	cout << A[-12] << ' ' << a[-12] << '\n';

	cout << '\n';
	for (int i = 0; i < 5; ++i)
		cout << a[i] << ' ' << A[i] << '\n';
	cout << A[43784] << ' ' << a[43784] << '\n';
	return 0;
}
