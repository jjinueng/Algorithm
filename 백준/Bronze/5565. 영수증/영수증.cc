#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int ans, n;
    cin >> ans;
    for (int i = 0; i < 9; ++i) {
        cin >> n;
        ans -= n;
    }
    cout << ans;
    return 0;
}