#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    string s;
    int a[26] = {};
    int ans = 0;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] > 95) a[s[i] - 97]++;
        else a[s[i] - 65]++;
    }
    for (int i = 1; i < 26; ++i) {
        if (a[i] > a[ans]) ans = i;
    }
    for (int i = 0; i < 26; ++i) {
        if (a[i] == a[ans] && a[i] != 0 && i != ans) {
            ans = '?' - 65;
            break;
        }
    }
    cout << char(ans + 65);
    return 0;
}