#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	/*
	How to get last x digits of a number
	ans: number % 10^x
	How to remove last x digits from a number
	ans: number / 10^x
	*/

	long long a = 121453287434;
	int last_1_digit = a % int(1e1);
	int last_2_digit = a % int(1e2);
	int last_3_digit = a % int(1e3);
	int last_5_digit = a % int(1e5);
	int last_7_digit = a % int(1e7);

	cout << "Number: " << a << '\n';
	cout << last_1_digit << '\n';
	cout << last_2_digit << '\n';
	cout << last_3_digit << '\n';
	cout << last_5_digit << '\n';
	cout << last_7_digit << '\n';

	int b = 43242579;
	b /= int(1e5);
	cout << endl << b << '\n';
	cout << "After remove 5 digits: " << b << '\n';
	return 0;
}
