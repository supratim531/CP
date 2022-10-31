/*
Given an array A of size N
Find the next greater element array of array A

Example:
input: [4, 5, 2, 25, 7, 8]
output: [5, 25, 25, -1, 8, -1]

Constraints:
1 <= N <= 10^5
1 <= A[i] <= 10^9
*/

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
	for (auto &ele : NGE(v))
		cout << ele << ' ';
	cout << '\n';
	return 0;
}
