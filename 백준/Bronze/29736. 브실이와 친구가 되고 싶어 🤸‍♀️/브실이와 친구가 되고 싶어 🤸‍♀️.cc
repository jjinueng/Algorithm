#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int a, b, k, x, ans = 0;
    cin >> a >> b >> k >> x;
    for (int i = a; i <= b; ++i) {
        if (k - i <= x && k - i >= -x) ans++;
    }
    if (ans == 0) cout << "IMPOSSIBLE";
    else cout << ans;
    return 0;
}