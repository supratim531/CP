// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/

#include <bits/stdc++.h>
using namespace std;

void run_case() {
	int n, k;
	cin >> n >> k;
	int64_t bag, ans = 0;
	multiset<int64_t> bags;
	for (int i = 0; i < n; ++i)
		cin >> bag, bags.insert(bag);
	for (int i = 0; i < k; ++i) {
		auto it = --bags.end();
		ans += (*it);
		bags.erase(it);
		bags.insert(*it / 2);
	}
	cout << ans << '\n';
}

int main() {
	int t;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
