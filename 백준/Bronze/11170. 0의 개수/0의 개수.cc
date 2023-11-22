#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int t, n, m, ans = 0;
    string num;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> m;
        for (int j = n; j <= m; ++j) {
            num = to_string(j);
            for (int k = 0; k < num.length(); ++k) {
                if (num[k] == '0') ans++;
            }
        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}
