#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

vector<priority_queue<int>> v(12);

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
    int n, k, p, w, a[12], ans = 0;
    cin >> n >> k;
    for (int i = 0; i < 12; ++i) {
        v[i].push(0);
    }
    for (int i = 0; i < n; ++i) {
        cin >> p >> w;
        v[p].push(w);
    }
    for (int j = 0; j < k; ++j) {
        for (int i = 1; i < 12; ++i) {
            int k = v[i].top() - 1;
            if (k < 0) k = 0;
            v[i].pop();
            v[i].push(k);
        }
    }
    for (int i = 1; i < 12; ++i) {
        ans += v[i].top();
    }
    cout << ans;
    return 0;
}