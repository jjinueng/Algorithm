#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, ans = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        ans += v[i];
    }
    sort(v.begin(), v.end(), greater<>());
    for (int i = 0; i < n / 3; ++i) {
        ans -= v[(i + 1) * 3 - 1];
    }
    cout << ans;
    return 0;
}
