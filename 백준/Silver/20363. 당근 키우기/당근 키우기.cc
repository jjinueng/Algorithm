#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

void solve(int x, int y) {
    int ans = x + y;
    if (x > y) {
        ans += (y / 10);
    } else {
        ans += (x / 10);
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    solve(x, y);
    return 0;
}
