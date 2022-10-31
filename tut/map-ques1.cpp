/*
Given N strings, print unique strings
in lexicographical order with their frequency

Constraints:
1 <= N <= 10^5
1 <= |S| <= 100
*/

#include <map>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	string s;
	map<string, int> m;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		m[s]++;
	}

	for (auto &ele : m)
		cout << ele.first << ' ' << ele.second << '\n';

	// TC: O(N * S * log2(N)) ~= O(1e7 ~ 1e8)
	return 0;
}
