#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, m, k, i, j, x, y, a[300][300];
    cin >> n >> m;
    for (int l = 0; l < n; ++l) {
        for (int i1 = 0; i1 < m; ++i1) {
            cin >> a[l][i1];
        }
    }
    cin >> k;
    for (int l = 0; l < k; ++l) {
        int sum = 0;
        cin >> i >> j >> x >> y;
        for (int i1 = i; i1 <= x; ++i1) {
            for (int k1 = j; k1 <= y; ++k1) {
                sum += a[i1 - 1][k1 - 1];
            }
        }
        cout << sum << endl;
    }
    return 0;
}