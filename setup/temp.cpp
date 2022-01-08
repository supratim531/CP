#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define nl << '\n'
#define ll long long
#define p pop_back()
#define pb push_back
#define pf push_front
#define vl vector<ll>
#define vi vector<int>
#define pl pair<ll, ll>
#define pi pair<int, int>

const auto infinite = (ll)(1e+18); // log2 is 60
const auto epsilon = double(1e-10); // binary search
const auto mod = int(1e9 + 7); // nice (< INT32_MAX) Prime

#define ed(c) c.end()
#define bg(c) c.begin()
#define sz(c) int(c.size())
#define all(c) bg(c), ed(c)
#define clr(x) memset(x, 0, sizeof(x))
#define man(p) fixed << setprecision(p)
#define fast cin.tie(0), cout.tie(0), ios_base::sync_with_stdio(0);

/* ------------------------------------------------------------------------------------------ */
template <typename F, typename S>
ostream &operator<<(ostream &os, const pair<F, S> &pr) { return os << "(" << pr.first << ", " << pr.second << ")"; }
template <typename STL, typename T = typename enable_if<!is_same<STL, string>::value, typename STL::value_type>::type>
ostream &operator<<(ostream &os, const STL &ob) { os << '{'; string sep; for (const T &ele : ob) os << sep << ele, sep = ", "; return os << '}'; }
template <typename MF, typename MS>
ostream &operator<<(ostream &os, const map<MF, MS> &ob) { os << '['; string sep; for (const pair<MF, MS> &pr : ob) os << sep << '(' << pr.first << ", " << pr.second << ')', sep = ", "; return os << ']'; }
void dbg_out() { cout << '\n'; } // BASE_CASE
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cout << H << ' '; dbg_out(T...); }
/* ========================================================================================== */

#ifndef ONLINE_JUDGE
#define print(...) dbg_out(__VA_ARGS__)
#define debug(...) cout << "(" << #__VA_ARGS__ << "): ", dbg_out(__VA_ARGS__)
#else
#define print(...)
#define debug(...)
#endif
/* ------------------------------------------------------------------------------------------ */

/* https://docs.microsoft.com/en-us/cpp/preprocessor/variadic-macros?view=msvc-170 */
inline bool isPowerOfTwo(const int64_t &x) { return x && (!(x & (x - 1))); }
inline bool isPerfectSquare(const int64_t &x) { int64_t sr = sqrt(x); return ((sr * sr) == x); }
inline bool isStringIn(const string &tg, const string &og) { if (og.find(tg) != string::npos) return true; return false; }
template <typename T> bool isSorted(const T &a, const uint32_t &len) { for (int i = 0; i < len - 1; ++i) if (a[i] > a[i + 1]) return false; return true; }
/* ------------------------------------------------------------------------------------------ */

void run_case() {
    // TODO: make sure all variables get reset
}

int main() {
fast
    /* sometime brute force helps to think */
    int t = 1;
    // cin >> t;
    while (t-- > 0) run_case();
    return 0;
}