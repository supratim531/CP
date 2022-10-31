// https://www.hackerrank.com/contests/second/challenges/next-greater-element/problem

#include <stack>
#include <vector>
#include <iostream>
using namespace std;

vector<int> NGE(std::vector<int> &v) {
	stack<int> st;
	vector<int> ans(v.size());
	for (int i = 0; i < v.size(); ++i) {
		while (!st.empty() and v[i] > v[st.top()])
			ans[st.top()] = v[i], st.pop();
		st.push(i);
	}
	while (!st.empty())
		ans[st.top()] = -1, st.pop();
	return ans;
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (auto &ele : v)
		cin >> ele;
	vector<int> ans = NGE(v);
	for (int i = 0; i < n; ++i) {
		cout << v[i] << ' ' << ans[i] << '\n';
	}
	return 0;
}
