#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;


int main() {
    fastio;
    int n, m, ans = 0;
    map<string, int> s;
    string key;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> key;
        s[key]++;
    }
    for (int i = 0; i < m; ++i) {
        cin >> key;
        if (s.find(key) != s.end()) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
