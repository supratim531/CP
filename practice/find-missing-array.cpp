// https://practice.geeksforgeeks.org/problems/in-first-but-second5423/1

#include <bits/stdc++.h>
using namespace std;

const int S = 1e6 + 10;
int hsh[S];

vector<long long> findMissing(long long A[], long long B[],  
             int N, int M) 
{ 
    // Your code goes here
    for (int i = 0; i < S; ++i) hsh[i] = 0;
    int64_t least = min(*min_element(A, A + N), *min_element(B, B + M));
    least = (least < 0) ? least * -1 : least;
    vector<int64_t> ans;

    for (int i = 0; i < M; ++i)
    	hsh[B[i] + least]++;

    for (int i = 0; i < N; ++i)
    	if (hsh[A[i] + least] == 0)
    		ans.push_back(A[i]);

    return ans;
}

void run_case() {
	int n, m;
	cin >> n >> m;
	int64_t a[n], b[m];
	for (auto &ele : a) cin >> ele;
	for (auto &ele : b) cin >> ele;
	for (auto &ele : findMissing(a, b, n, m))
		cout << ele << ' ';
	cout << '\n';
}

int main() {
	int t = 1;
	cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}

/*
3
6 5
1 2 3 4 5 10
2 3 1 0 5
5 5
4 3 5 9 11
4 9 3 11 10
7 4
12 -6 3 0 12 -1 21314
3 0 112 12
---------------------
4 10 
5 
-6 -1 21314 
*/
