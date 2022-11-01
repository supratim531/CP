// https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-and-his-friends/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int n, m;
	cin >> n >> m;
	int64_t candies;
	unordered_set<int64_t> students;

	for (int i = 0; i < n; ++i)
		cin >> candies, students.insert(candies);
	for (int i = 0; i < m; ++i) {
		cin >> candies;
		(students.find(candies) != students.end())
		? cout << "YES\n" : cout << "NO\n";
		students.insert(candies);
	}
}

int main() {
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
