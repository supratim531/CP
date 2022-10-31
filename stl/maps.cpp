#include <map>
#include <iostream>
using namespace std;

void print(map<int, string> &m) {
	cout << "map size: " << m.size() << '\n';
	for (auto &ele : m)
		cout << ele.first << ' ' << ele.second << '\n';
	cout << '\n';
}

void print(map<char, int> &m) {
	cout << "map size: " << m.size() << '\n';
	for (auto &ele : m)
		cout << ele.first << ' ' << ele.second << '\n';
}

int main() {
	/*
	Map:
	1. It is another container of STL used RB Tree internally.
	2. The standard map inserts a pair in orderd manner.
	3. The stander map never allows a duplicate key.
	4. TC of insertion and access a pair is O(log2(n)) in standard map.
	*/

	map<int, string> m1;
	m1[1] = "acd";
	m1[5] = "ece";
	m1[3] = "cdc"; // -> O(key.size() * log2(n)) where n is the current size of the map
	m1.insert({9, "bab"});
	m1[2] = "aka";
	m1[0];
	m1[-1] = "null";
	m1.insert(make_pair(7, "qwe"));

	// map<int, string>::iterator it;
	// for (it = m1.begin(); it != m1.end();) {
	// 	cout << it->first << ' ' << it->second << '\n';
	// 	it++;
	// 	// it = it + 1; -> not allowed
	// }

	print(m1);

	map<char, int> m2;
	m2['c'], m2[65], m2[119], m2[66];
	print(m2);

	m1[-1] = "NULL";
	print(m1);

	map<int, string> m3;
	m3[25] = "Sayan", m3[10] = "Supratim", m3[5] = "Utsav";
	print(m3);
	map<int, string>::iterator it = m3.find(51); // TC: O(log2(n))

	if (it == m3.end())
		cout << "NOT FOUND ANY STUDENT\n";
	else
		cout << it->first << " -> " << it->second << '\n';

	cout << "\n----------\n";
	cout << "10 is " << (++(m3.find(5)))->second << "'s Roll No.\n";
	cout << "10 is " << m3.find(10)->second << "'s Roll No.\n";

	cout << '\n';
	for (auto it = m3.begin(); it != m3.end(); ++it)
		cout << it->second << '\n';
	cout << '\n';

	map<char, int> m4 = {{'a', 12}, {'e', 90}, {'F', 6}};
	print(m4);
	// m4.erase('a');
	if (m4.find('F') != m4.end()) // -> safety check
		m4.erase(m4.find('F')); // -> TC: O(log2(n))
	print(m4);

	cout << "\n-------\n";
	// auto eit = m4.erase('a');
	// cout << eit << '\n';
	auto eit = m4.erase(m4.find('a'));
	// cout << eit << '\n';
	cout << eit->first << ' ' << eit->second << '\n';
	return 0;
}
