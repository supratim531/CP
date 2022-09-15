#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	/*
	ignore double data type in cp
	*/
	double a = 1e5, b = 1e5;
	double c = a * b;
	cout << c << '\n';
	// cout << fixed << setprecision(0) << c << '\n';

	double d = 1e22;
	cout << fixed << d << '\n';
	d = 1e23;
	cout << fixed << d << " (precision error)" << '\n';
	return 0;
}
