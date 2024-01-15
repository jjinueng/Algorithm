#include <bits/stdc++.h>

using namespace std;

void solve(int n, int k) {
    int ans = n, stamp = n;
    while (stamp >= k) {
        n = stamp / k;
        stamp = n + stamp % k;
        ans += n;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, k;
    while (cin >> n >> k) {
        solve(n, k);
    }
    return 0;
}
