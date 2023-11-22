#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int t;
    string s;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> s;
        cout << s[0] << s[s.length() - 1] << endl;
    }
    return 0;
}