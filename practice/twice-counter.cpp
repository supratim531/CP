// https://practice.geeksforgeeks.org/problems/twice-counter4236/1

#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> m;

int countWords(string list[], int n) {
	m.clear();
	int count = 0;
	for (int i = 0; i < n; ++i)
		m[list[i]]++;
	for (auto &ele : m)
		(ele.second == 2) ? count += 1 : 1;
	return count;
}

void run_case() {
	string words[3] = {"Geeks", "For", "Geeks"};
	cout << countWords(words, 3) << '\n';
}

int main() {
	int t = 1;
	while (t --> 0)
		run_case();
	return 0;
}
