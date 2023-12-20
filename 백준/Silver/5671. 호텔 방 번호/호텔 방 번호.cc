#include <bits/stdc++.h>

using namespace std;

bool solve(int n) {
    int a[10] = {};
    while (n > 0) {
        a[n % 10]++;
        if (a[n % 10] > 1) return false;
        n /= 10;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, m;
    while (cin >> n >> m) {
        int ans = 0;
        for (int i = n; i <= m; ++i) {
            if (solve(i)) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
