// https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/little-jhool-and-the-magical-jewels/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int hsh[4] = {0};

	string s;
	cin >> s;
	for (auto &ele : s) {
		if (ele == 'r' || ele == 'R')
			hsh[0]++;
		else if (ele == 'u' || ele == 'U')
			hsh[1]++;
		else if (ele == 'b' || ele == 'B')
			hsh[2]++;
		else if (ele == 'y' || ele == 'Y')
			hsh[3]++;
	}
	cout << *min_element(hsh, hsh + 4) << '\n';
}

int main() {
	int t = 1;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
