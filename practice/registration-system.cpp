// https://codeforces.com/problemset/problem/4/C

#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> m;

int make_new_name(string &name) {
	string numbers;
	int number = m[name];
	int ret_number = number;

	while (number)
		numbers.push_back(number % 10), number /= 10;

	reverse(numbers.begin(), numbers.end());
	for (auto &ele : numbers)
		name.push_back(48 + ele);
	return ret_number;
}

void run_case() {
	int n;
	cin >> n;
	string name;

	for (int i = 0; i < n; ++i) {
		cin >> name;
		if (m.find(name) == m.end())
			cout << "OK\n", m[name]++;
		else {
			int number = make_new_name(name);
			cout << name << '\n';
			while (number)
				name.pop_back(), number /= 10;
			m[name]++;
		}
	}
	m.clear();
}

int main() {
	int t = 1;
	// cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
