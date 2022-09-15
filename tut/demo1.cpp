#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	cout << "Reverse a string:\n";
	string s;
	cin >> s;
	cout << s << '\n';

	string rs;
	for (int i = s.size() - 1; i >= 0; --i)
		rs.push_back(s[i]);
	(rs == s) ? cout << "Palindrome\n" : cout << "Not Palindrome\n";

	bool flag = true;
	for (int i = 0; i < s.size() / 2; ++i) {
		if (s[i] == s[s.size() - 1 - i])
			continue;
		else {
			flag = false;
			break;
		}
	}
	(flag) ? cout << "Palindrome\n" : cout << "Not Palindrome\n";

	return 0;
}
