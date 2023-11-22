#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int s, n, m, c, ct = 0;
    cin >> s >> n >> m;
    for (int i = 0; i < m + n; ++i) {
        cin >> c;
        if (c == 1) ct++;
        else if (c == 0) ct--;
        if (ct > s) s *= 2;
    }
    cout << s;
    return 0;
}