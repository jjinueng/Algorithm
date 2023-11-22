#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n, k, ans = 1;
    cin >> n >> k;
    for (int i = 0; i < k; ++i) {
        ans *= n - i;
        ans /= i + 1;
    }
    cout << ans;
    return 0;
}