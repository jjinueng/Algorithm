#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    ll a, b, c, count = 0;
    cin >> a >> b >> c;
    if ((c - b) <= 0) {
        cout << -1;
        return 0;
    } else if ((c - b) == 1) {
        cout << a + 1;
        return 0;
    }

    while (true) {
        count++;
        if (a + b * count < c * count) break;
    }
    cout << count;
    return 0;
}