#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, ans = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        ans += int(s[i]) - 64;
    }
    cout << ans;
    return 0;
}
