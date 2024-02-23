#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    long long n, ans = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &i: v) {
        cin >> i;
    }
    sort(v.begin(), v.end(), greater<>());
    for (int i = 0; i < n; ++i) {
        if (v[i] - i > 0) { ans += v[i] - i; }
    }
    cout << ans;
    return 0;
}
