#include <vector>
#include <iostream>
using namespace std;

void print(vector<int> &v) {
	cout << "vector size: " << v.size() << '\n';
	for (int &ele : v)
		cout << ele << ' ';
	cout << "\n\n";
}

void function() {
	auto a = 1;
	auto b = 9.54;
	auto c = 'A';

	if (sizeof(a) == 1)
		cout << "a is character\n";
	else if (sizeof(a) == 4)
		cout << "a is integer\n";
	else if (sizeof(a) == 8)
		cout << "a is double\n";

	if (sizeof(b) == 1)
		cout << "b is character\n";
	else if (sizeof(b) == 4)
		cout << "b is integer\n";
	else if (sizeof(b) == 8)
		cout << "b is double\n";

	if (sizeof(c) == 1)
		cout << "c is character\n";
	else if (sizeof(c) == 4)
		cout << "c is integer\n";
	else if (sizeof(c) == 8)
		cout << "c is double\n";

	string s = "Supratim Majumder is in B. Tech now";
	cout << sizeof(s) << '\n';
}

int main() {
	// function();
	auto arr = {342, 765, 57}; // by-default initializer_list<int>
	cout << "This is a initializer_list<int>\n";
	for (auto &ele : arr) cout << ele << '\n';
	return 0;
}
