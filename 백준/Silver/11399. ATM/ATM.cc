#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, sum = 0, ans = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(begin(a), end(a));
    for (int i = 0; i < n; ++i) {
        sum += a[i];
        ans += sum;
    }
    cout << ans;
    return 0;
}