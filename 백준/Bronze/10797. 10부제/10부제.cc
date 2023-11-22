#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int d, n, ans = 0;
    cin >> d;
    for (int i = 0; i < 5; ++i) {
        cin >> n;
        if (n == d) ans++;
    }
    cout << ans;
    return 0;
}