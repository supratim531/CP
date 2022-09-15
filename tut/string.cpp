#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	string s1 = "Hello";
	string s2 = "Hello";
	string res = s1 + " " + s2;
	cout << res << '\n';
	(s1 == s2) ? cout << "Equal\n" : cout << "Not Equal\n";

	res[0] = 'P';
	for (int i = 0; i < res.size(); ++i)
		cout << res[i] <<  ' ';

	string num;
	cin >> num;
	cout << endl << endl << num << '\n';

	string str;
	cin >> str;
	cout << str << '\n';
	cin.ignore();
	getline(cin, str);
	cout << str << "\n\n";

	s1 = "This is ";
	s2 = "Possible";
	res = s1 + s2;
	cout << res << '\n';

	s1 = "This is also Possibl";
	char e = 'e';
	res = s1 + e;
	cout << res << '\n';

	cout << "\nString Reverse\n\n";
	string s, rev;
	cin >> s;
	cout << s << '\n';
	for (int i = s.size() - 1; i >= 0; --i)
		rev.push_back(s[i]);
	cout << rev << '\n';

	cout << "There are " << 'z' - '`' << " characters in english alphabet\n";
	cout << '5' - 'a' << '\n';
	cout << '5' - '0' << '\n';
	cout << 'd' - 'a' << '\n';
	return 0;
}
