#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
        cout << 10000 + a * 1000;
    else if (a != b && b != c && a != c) {
        if (a > b && a > c) cout << a * 100;
        else if (b > a && b > c) cout << b * 100;
        else if (c > b && c > a) cout << c * 100;
    } else {
        if (a == b) cout << 1000 + a * 100;
        else if (b == c) cout << 1000 + b * 100;
        else if (a == c) cout << 1000 + c * 100;
    }
}