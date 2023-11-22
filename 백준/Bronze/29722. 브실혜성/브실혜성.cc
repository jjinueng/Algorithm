#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int y, m, d, n;
    string mm, dd;
    cin >> y;
    cin.get();
    cin >> m;
    cin.get();
    cin >> d;
    cin >> n;
    d--, m--;
    if ((d + n) < 30) d += n;
    else {
        m += (d + n) / 30;
        d = (d + n) % 30;
    }
    if (m >= 12) {
        y += m / 12;
        m %= 12;
    }
    d++, m++;
    if (m < 10) mm = '0' + to_string(m);
    else mm = to_string(m);
    if (d < 10) dd = '0' + to_string(d);
    else dd = to_string(d);
    cout << y << "-" << mm << "-" << dd;
    return 0;
}