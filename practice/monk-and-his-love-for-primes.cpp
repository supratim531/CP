// https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	n = abs(n);
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

void run_case() {
	int ans = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); ++i) {
		int selector;
		if (s[i] >= 65 && s[i] <= 90) selector = (s[i] + 32) * -1;
		else selector = (s[i] - 32);
		ans += (selector);
	}
	(isPrime(ans)) ? cout << 1 : cout << 0;
}

int main() {
	int t = 1;
	// cin >> t;
	while (t --> 0)
		run_case();
	return 0;
}
