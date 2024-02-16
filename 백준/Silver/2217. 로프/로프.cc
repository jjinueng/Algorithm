#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int N, ans = 0, max = 0;
    cin >> N;
    vector<int> v(N);
    for (int i = 0; i < N; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < N; ++i) {
        max = v[i] * (N - i);
        if (max > ans) ans = max;
    }
    cout << ans;
    return 0;
}
