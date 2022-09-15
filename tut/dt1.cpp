#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	char a = 'k';
	cout << a << ' ' << int(a) << '\n';

	cout << 12 / 7 << '\n';
	cout << boolalpha << ((12.0 / 7) == (12 / 7.0)) << '\n';
	cout << boolalpha << ((12 / 7) == ((double)12 / 7)) << '\n';

	cout << '1' + '1' << '\n';
	cout << char('1' + '1') << '\n';

	cout << 6 / 3 * 12 << '\n';
	cout << 12 * 6 / 4 << '\n';

	float b = 12 / 7;
	cout << fixed << setprecision(5) << b << '\n';
	b = 12.0 / 7;
	cout << fixed << setprecision(5) << b << '\n';
	return 0;
}
