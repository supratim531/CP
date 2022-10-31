/*
Given a string S brackets
Eg. s = "(()(()))" check whether the brackets are balanced or not

Constraints:
1 <= |S| <= 1e5
*/

#include <stack>
#include <iostream>
using namespace std;

stack<char> st;

bool is_balanced(string s) {
	for (auto &ele : s)
		(ele == '(') ? st.push(ele) : st.pop();
	return st.empty();
}

int main() {
	int t;
	cin >> t;
	while (t --> 0) {
		string s;
		cin >> s;
		while (!st.empty())
			st.pop();
		(is_balanced(s)) ? cout << "YES\n" : cout << "NO\n";
	}
	return 0;
}
