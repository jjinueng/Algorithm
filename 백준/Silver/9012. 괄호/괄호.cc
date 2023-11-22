#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

bool solve(string s) {
    int a = 0, b = 0;
    if (s[0] == ')') return false;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') a++;
        if (s[i] == ')') b++;
        if (a < b) return false;
    }
    if (a > b || a < b) return false;
    return true;
}

int main() {
    fastio;
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (solve(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}