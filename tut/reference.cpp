#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;

void incr(int n) {
	n++;
}

void increment(int &n) {
	n++;
}

int main() {
	int a;
	cin >> a;
	cout << a << '\n';
	incr(a);
	cout << a << '\n';

	cin >> a;
	cout << a << '\n';
	increment(a);
	cout << a << '\n';

	int b, c;
	cin >> b >> c;
	cout << "b: " << b << " c: " << c << '\n';
	swap(b, c);
	cout << "b: " << b << " c: " << c << '\n';
	cout << min(b, c) << '\n';
	cout << max(b, c) << '\n';
	return 0;
}
