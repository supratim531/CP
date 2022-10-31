#include <map>
#include <set>
#include <iostream>
#include <unordered_map>
using namespace std;

void print(unordered_map<string, int> &um) {
	cout << "map size: " << um.size() << '\n';
	for (auto &ele : um)
		cout << '[' << ele.first << "] = " << ele.second << '\n';
}

void print(unordered_map<int, pair<int, int>> &um) {
	cout << "map size: " << um.size() << '\n';
	for (auto &ele : um) {
		auto pr = ele.second;
		cout << '[' << ele.first << "] = ";
		cout << '{' << pr.first << ", " << pr.second << "}\n";
	}
	cout << '\n';
}

int main() {
	/*
	Unordered Map:
	1. In unordered_map everything is same as map except some internal stuff.

	Exceptional Stuffs:
	1. Inbuilt implementation
	2. Time complexity of insertion and other methods
	3. Valid datatype of key(s)

	1. Hashtable is used for find out the hash value of keys to insert
	   in unordered_map in internal implementation.
	2. TC is almost O(1) but in average case. (It can be differ
	   in some case of collision in hashing)
	3. Only those datatypes are allowed in unordered_map as
	   key whose hash value can be evaluated through hash tables.
	*/

	map<pair<int, int>, int> m; // will compile
	// unordered_map<pair<int, int>, int> um; // will not compile
	map<set<set<int>>, int> m2; // will compile
	// unordered_map<set<set<int>>, int> um2; // will not compile

	// -> pair and set can be compared thus allowed as key in map
	// -> hash of pair and set can't be evaluated as not allowed as key in unordered_map

	unordered_map<int, pair<int, int>> ump = {{12, {32, 6}}, {24, {65, 5}}};
	print(ump);
	unordered_map<string, int> ump2;
	ump2["Utsav"] = 5;
	ump2["Supratim"] = 10;
	ump2["Sayan"] = 25;
	ump2["Apratim"] = 7;
	ump2["Arijit"] = 6;
	ump2["Ojha"] = 9;
	print(ump2);
	return 0;
}
