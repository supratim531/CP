// https://www.hackerrank.com/challenges/balanced-brackets/problem

#include <bits/stdc++.h>
using namespace std;

map<char, char> b = {{')', '('}, {'}', '{'}, {']', '['}};

bool is_balanced(string &s) {
    stack<char> st;
    for (auto &ele : s) {
        if (ele == '(' || ele == '{' || ele == '[')
            st.push(ele);
        else if (!st.empty() && st.top() != b[ele])
            return false;
        else if (!st.empty())
            st.pop();
        else
            return false;
    }
    return st.empty();
}

void run_case() {
    int n;
    cin >> n;
    while (n --> 0) {
        string s;
        cin >> s;
        bool ans = is_balanced(s);
        (ans) ? cout << "YES\n" : cout << "NO\n";
    }
}

int main() {
    int t = 1;
    // cin >> t;
    while (t --> 0)
        run_case();
    return 0;
}
