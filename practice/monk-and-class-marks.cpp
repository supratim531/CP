// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int n;
	cin >> n;
	int marks;
	string name;
	map<int, multiset<string>> m;

	for (int i = 0; i < n; ++i)
		cin >> name >> marks, m[marks * -1].insert(name);
	for (auto &ele : m)
		for (auto &name: ele.second)
			cout << name << ' ' << ele.first * -1 << '\n';
}

int main() {
	int t = 1;
	// cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
