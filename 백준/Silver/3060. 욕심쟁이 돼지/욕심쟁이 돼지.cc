#include <bits/stdc++.h>

using namespace std;
int T, N;

void solve() {
    int sum = 0, ans = 1;
    cin >> N;
    for (int i = 0; i < 6; ++i) {
        int num;
        cin >> num;
        sum += num;
    }
    while (true) {
        if (sum > N) break;
        sum *= 4;
        ans++;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> T;
    for (int i = 0; i < T; ++i) {
        solve();
    }
    return 0;
}
