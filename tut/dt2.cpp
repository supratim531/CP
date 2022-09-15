#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	/*
	int32_t is alias of int
	int64_t is alias of long long
	uint32_t is alias of uint
	uint64_t is alias of unsigned long long

	char > int > long > long long > float > double
	most used dt in cp => char, int, long long

	rough ranges of dt for cp:
	-10^9 < int < 10^9
	-10^12 < long < 10^12 (not used so much)
	-10^18 < long long < 10^18
	*/

	int a = 100000; // 10^5
	int b = 1e5; // 1e5 == 10^5
	int c = a * b;
	cout << a << ' ' << b << '\n';
	cout << "Overflow: " << c << '\n'; // expected => 10^10
	long long l_c = a * b;
	cout << "Overflow: " << l_c << '\n'; // expected => 10^10
	l_c = 1LL * a * b;
	cout << "Not overflow: " << l_c << '\n'; // expected => 10^10

	cout << "\nRange of signed value:\n";
	cout << INT8_MIN << " < char < " << INT8_MAX << '\n';
	cout << INT32_MIN << " < int < " << INT32_MAX << '\n';
	cout << INT64_MIN << " < long long < " << INT64_MAX << '\n';

	cout << "\nRange of unsigned value:\n";
	cout << 0 << " < unsigned char < " << UINT8_MAX << '\n';
	cout << 0 << " < unsigned int < " << UINT32_MAX << '\n';
	cout << 0 << " < unsigned long long < " << UINT64_MAX << '\n';

	cout << endl;
	uint32_t uint32 = UINT32_MAX;
	cout << uint32 << '\n';
	uint64_t uint64 = UINT64_MAX;
	cout << uint64 << '\n';

	uint32 = 1e10;
	uint64 = 1e19;
	cout << uint32 << '\n';
	cout << uint64 << '\n';
	return 0;
}
