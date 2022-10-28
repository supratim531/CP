#include <vector>
#include <iostream>
using namespace std;

void print(vector<int> &v) {
	cout << "vector size: " << v.size() << '\n';
	for (int &ele : v)
		cout << ele << ' ';
	cout << "\n\n";
}

void print(vector<pair<int, int>> &v) {
	cout << "vector<pair> size: " << v.size() << '\n';
	for (pair<int, int> &ele : v)
		cout << ele.first << ' ' << ele.second << '\n';
	cout << '\n';
}

void print(vector<vector<int>> &v) {
	cout << "vector<vector> size: " << v.size() << '\n';
	for (vector<int> &ele : v) {
		for (int &value : ele)
			cout << value << ' ';
		cout << '\n';
	}
}

int main() {
	vector<int> v = {423, 65, 2, 566, -232, 790};
	print(v);
	vector<pair<int, int>> vp = {{423, 65}, {2, 566}, {-232, 790}};
	print(vp);
	vector<vector<int>> vv = {{1, 2, 3, 4}, {54, -9, 0, 1}, {1, 4}, {6, 78, 8}};
	print(vv);
	return 0;
}
