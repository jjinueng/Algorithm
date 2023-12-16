#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, s, count = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s > 0) count++;
        else if (s == 0) {
            ans = max(ans, count);
            count = 0;
        }
    }
    ans = max(ans, count);
    cout << ans;
    return 0;
}
