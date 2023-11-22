#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0) cout << "1";
    else if (x < 0 && y > 0) cout << "2";
    else if (x < 0 && y < 0) cout << "3";
    else cout << "4";
    return 0;
}