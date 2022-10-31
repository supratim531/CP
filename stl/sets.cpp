#include <set>
#include <iostream>
using namespace std;

void print(set<int> s) {
	// cout << "set size: " << s.size() << '\n';
	cout << '{';
	for (auto it = s.begin(); it != s.end(); ++it) {
		auto i = it;
		cout << *it, (++i == s.end()) ? cout << "" : cout << ", ";
	}
	cout << "}\n";
}

void print(set<set<int>> s) {
	// cout << "set size: " << s.size() << '\n';
	cout << '{';
	for (auto it = s.begin(); it != s.end(); ++it) {
		print(*it);
		auto i = it;
		(++i == s.end()) ? cout << "" : cout << ", ";
	}
	cout << "}\n";
}

void print(set<string> &s) {
	cout << "set size: " << s.size() << '\n';
	cout << '{';
	for (auto it = s.begin(); it != s.end(); ++it)
		cout << *it, (++it == s.end()) ? cout << "" : cout << ", ";
	cout << "}\n";
}

void print(set<pair<int, int>> &s) {
	cout << "set size: " << s.size() << '\n';
	cout << '{';
	for (auto it = s.begin(); it != s.end(); ++it) {
		cout << '(' << it->first << ", " << it->second << ')',
		(++it == s.end()) ? cout << "" : cout << ", ";
	}
	cout << "}\n";
}

void print(multiset<set<int>> &s) {
	// cout << "set size: " << s.size() << '\n';
	cout << '{';
	for (auto it = s.begin(); it != s.end(); ++it) {
		print(*it);
		auto i = it;
		(++i == s.end()) ? cout << "" : cout << ", ";
	}
	cout << "}\n";
}

int main() {
	/*
	Set:
	1. It is another container of STL used Binary Search Trees (BSTs) internally.
	2. The standard set inserts a value in orderd manner.
	3. The stander set never allows a duplicate value.
	4. TC of insertion and access a value is O(log2(n)) in standard set.
	*/
	set<int> s1 = {1, -7, 2, 3, 3, 12, 12, 12, -9, 0, 2};
	// set<int> s1 = {1, 4, 5, 6, 6, 6, 7, 1, 9, -1, 0, 8, 12};
	print(s1);
	// cout << (++s1.find(12) == s1.end()) << '\n';
	// cout << (++s1.find(12) != s1.end()) << '\n';

	auto it = s1.find(1);
	cout << *it << '\n';
	auto eit = s1.erase(it);
	bool d = (eit == s1.end());
	cout << boolalpha << d << '\n';
	(!d) ? cout << *eit << '\n' : cout << "";
	print(s1);
	// set<int>::iterator i = s1.begin();
	set<int>::iterator i = s1.erase(s1.find(0));
	cout << *i << '\n';

	// range erase
	cout << "before:\n";
	print(s1);
	set<int>::iterator eit2 = s1.erase(s1.find(-7), ++s1.find(3));
	cout << "after:\n";
	print(s1);
	cout << "eit2 points to the next iterator (element): " << *eit2 << '\n';

	set<set<int>> s = {{1, 4}, {3, 7, 8}, {1, 4}, {9, 12}, {1, 4}};
	multiset<set<int>> ms = {{1, 4}, {3, 7, 8}, {1, 4}, {9, 12}, {1, 4}};
	print(s);
	print(ms);
	ms.erase({1, 4});
	// ms.erase(ms.find({1, 4}));
	print(ms);
	return 0;
}
