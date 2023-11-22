#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    while (1) {
        int a, b, c, s1, s2, s3;
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) break;
        if (a > b && a > c) s1 = b, s2 = c, s3 = a;
        else if (b > a && b > c) s1 = a, s2 = c, s3 = b;
        else s1 = a, s2 = b, s3 = c;
        if (s3 * s3 == s1 * s1 + s2 * s2) cout << "right" << endl;
        else cout << "wrong" << endl;
    }
    return 0;
}