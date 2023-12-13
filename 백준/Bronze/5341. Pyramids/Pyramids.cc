#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    while (true) {
        int n, ans = 0;
        cin >> n;
        if (n == 0) break;
        for (int i = 1; i <= n; ++i) {
            ans += i;
        }
        cout << ans << '\n';
    }
    return 0;
}
