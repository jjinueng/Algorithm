#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;


int main() {
    fastio;
    int ans = 0;
    string s, a;
    cin >> s;
    for (int i = 0; i < s.length() - 1; ++i) {
        a = s.substr(i, 2);
        if (a == "c-" || a == "c=" || a == "d-" || a == "lj" || a == "nj" || a == "s=" || a == "z=") {
            s[i] = 0;
        } else if (a == "dz") {
            if (s.substr(i + 1, 2) == "z=") { s[i] = 0, s[i + 1] = 0; }
        }
    }
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 0) continue;
        ans++;
    }
    cout << ans;
    return 0;
}
