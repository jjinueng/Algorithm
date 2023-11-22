#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int a, b, num = 0, max = 0;
    for (int i = 0; i < 10; ++i) {
        cin >> a >> b;
        num -= a;
        num += b;
        if (num > max) max = num;
    }
    cout << max;
    return 0;
}