#include <map>
#include <iostream>
using namespace std;

void print(multimap<int, string> &m) {
	for (auto &ele : m)
		cout << '[' << ele.first << "] = " << ele.second << '\n';
	cout << '\n';
}

int main() {
	/*
	1. In multimap u can insert duplicate key(s) rest of the theory is
	   same as map.
	*/

	multimap<int, string> mmp = {{12, "Souvik"}, {2, "AD Sir"}, {2, "ADS"}};
	mmp.insert({4, ""});
	mmp.insert({1, "Harami"});
	mmp.insert({1, "Mandarin"});
	mmp.insert({-1, "RDJ"});
	print(mmp);
	return 0;
}
