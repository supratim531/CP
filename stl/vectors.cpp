#include <vector>
#include <iostream>
using namespace std;

void print(vector<int> &v) {
	cout << "size: " << v.size() << '\n';
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << ' ';
	cout << '\n';
}

void print(vector<string> &v) {
	cout << "size: " << v.size() << '\n';
	for (int i = 0; i < v.size(); ++i)
		cout << v[i] << ' ';
	cout << '\n';
}

int main() {
	int n, x;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		v.push_back(x);
	}
	print(v);

	vector<int> a1, a2(9, 1);
	print(a1);
	a2[3] = 43;
	a2.push_back(433);
	print(a2);
	a2.pop_back();
	print(a2);
	vector<int> &a3 = a1; // O(1) same reference
	a3.push_back(123);
	a1.push_back(56);
	a1.push_back(-7);
	a3.push_back(478);
	print(a1);
	print(a3);
	cout << "-----\n";
	vector<int> a4 = a3; // O(n) copy
	a4.push_back(90);
	print(a4);
	print(a3);

	int size;
	string s;
	cin >> size;
	vector<string> vs;
	cout << "-----\n";
	for (int i = 0; i < size; ++i) {
		cin >> s;
		vs.push_back(s);
	}
	print(vs);
	return 0;
}
