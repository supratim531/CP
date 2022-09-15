#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	int p = 4;

	for (int i = 0; i < p; ++i) {
		for (int j = p - i; j; --j) {
			cout << "* ";
		}
		cout << '\n';
	}
	cout << '\n';

	for (int i = 1; i <= 10; ++i)
		cout << i << ' ';

	cout << '\n';

	int j = 11;
	for (; j <= 20; ++j)
		cout << j << ' ';

	cout << '\n';

	int k = 21;
	for (; k <= 30; cout << k++ << ' ');

	cout << '\n';

	cout << '\n';
	int a = 108;
	for (int c = 0; c < 5; ++c, cout << "a: ", cin >> a)
		cout << "The new value of a is: " << a << '\n';
	return 0;
}
