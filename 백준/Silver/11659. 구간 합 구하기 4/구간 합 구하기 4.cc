#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, m, i, j;
    cin >> n >> m;
    vector<int> a(n);
    a[0] = 0;
    for (int k = 1; k < n + 1; ++k) {
        cin >> a[k];
        a[k] += a[k - 1];
    }
    for (int k = 0; k < m; ++k) {
        cin >> i >> j;
        cout << a[j] - a[i - 1] << '\n';
    }
    return 0;
}
