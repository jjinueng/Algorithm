#include <bits/stdc++.h>

using namespace std;

int n, ans;
int a[100000], m[100000];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    ans = a[0];
    for (int i = 0; i < n; ++i) {
        m[i] = a[i];
        if (i == 0) continue;
        if (m[i] < m[i - 1] + a[i]) m[i] = m[i - 1] + a[i];
        if (m[i] > ans) ans = m[i];
    }
    cout << ans;
    return 0;
}
