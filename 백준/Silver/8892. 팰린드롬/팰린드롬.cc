#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int is_palindrome(string s) {
    int l = s.length();
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - 1 - i])
            return 0;
    }
    return 1;
}

void solve() {
    int k;
    cin >> k;
    vector<string> v(k);
    for (int i = 0; i < k; ++i) {
        string a;
        cin >> a;
        v[i] = a;
    }
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < k; ++j) {
            if (i == j) continue;
            if (is_palindrome(v[i] + v[j])) {
                cout << v[i] + v[j] << endl;
                return;
            }
        }
    }
    cout << 0 << endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}