#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        if (m == 300) cout << 1 << " ";
        else if (275 <= m && m < 300) cout << 2 << " ";
        else if (250 <= m && m < 275) cout << 3 << " ";
        else cout << 4 << " ";
    }

    return 0;
}