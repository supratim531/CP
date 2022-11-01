// https://www.hackerearth.com/problem/algorithm/monks-birthday-party/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int n;
	cin >> n;
	string name;
	set<string> names;

	for (int i = 0; i < n; ++i)
		cin >> name, names.insert(name);
	for (auto &ele : names)
		cout << ele << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
