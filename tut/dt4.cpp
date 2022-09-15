/*
Given rectangle of length l and b. Print the area of rectangle

Constraints:
1 <= l <= 1e9
1 <= b <= 1e9

N.B.: 1e9 = 10^9

Input format:
2 space separated integer l and b

Output format:
Just print the area of the rectangle as a single number

Sample input:
4
21 6
12 12
3 4
57 2

Sample output:
126
144
12
114
*/

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	int l, b, t = 0;
	cin >> t;
	while (t --> 0) {
		cin >> l >> b;
		// cout << l * b << '\n'; // -> wrong
		cout << 1LL * l * b << '\n'; // -> correct
	}
	return 0;
}
