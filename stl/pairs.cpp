#include <iostream>
using namespace std;

int main() {
	pair<int, string> p1, p2;
	p1 = make_pair(1, "Aman");
	p2 = {2, "Ashneer"};
	cout << p1.first << ' ' << p1.second << '\n';
	cout << p2.first << ' ' << p2.second << '\n';
	cout << "-----\n";

	int a[] = {1, 2, 3};
	int b[] = {2, 3, 4};
	pair<int, int> parr[3];
	parr[0] = {1, 2};
	parr[1] = {2, 3};
	parr[2] = make_pair(3, 4);

	for (int i = 0; i < 3; ++i)
		cout << parr[i].first << ' ' << parr[i].second << '\n';
	cout << "-----\n";

	swap(parr[0], parr[2]);

	for (int i = 0; i < 3; ++i)
		cout << parr[i].first << ' ' << parr[i].second << '\n';
	cout << "-----\n";

	pair<int, int> p;
	cout << p.first << ' ' << p.second << '\n';
	cin >> p.first >> p.second;
	cout << p.first << ' ' << p.second << '\n';
	return 0;
}
