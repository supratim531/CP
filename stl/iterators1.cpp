#include <vector>
#include <iostream>
using namespace std;

void print(vector<int> &v) {
	cout << "size: " << v.size() << '\n';
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << ' ';
	cout << '\n';
}

void print(vector<pair<int, int>> &v) {
	cout << "size: " << v.size() << '\n';
	for (int i = 0; i < v.size(); ++i)
		cout << v[i].first << ' ' << v[i].second << '\n';
	cout << '\n';
}

void print(vector<vector<int>> &v) {
	cout << "size: " << v.size() << '\n';
	for (int i = 0; i < v.size(); ++i) {
		for (int j = 0; j < v[i].size(); ++j) {
			cout << v[i][j] << ' ';
		}
		cout << '\n';
	}
}

int main() {
	/*
	iterator:
	difference between iterator++ and iterator = iterator + 1
	1. iterator++ takes you to the location of next iterator
	2. iterator + 1 takes you to the next memory address
	   from current address in which you currently point
	*/

	vector<int> v = {2, 3, 5, 6, 8, 7};
	print(v);
	vector<int>::iterator it = v.begin();
	cout << *(it + 3) << '\n';

	// iterate using it
	for (;it != v.end();) {
		cout << *it << ' ';
		it = it + 1;
	}
	cout << '\n';

	vector<pair<int, string>> vp = {{5, "Utsav"}, {10, "Supratim"}};
	for (vector<pair<int, string>>::iterator i = vp.begin(); i != vp.end(); ++i) {
		cout << i->first << ' ' << i->second << '\n';
		// cout << (*i).first << ' ' << (*i).second << '\n';
	}
	return 0;
}
