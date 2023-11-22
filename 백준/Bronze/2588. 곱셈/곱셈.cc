#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int a, b, num;
    cin >> a >> b;
    num = b;
    for (int i = 0; i < 3; ++i) {
        cout << a * (b % 10) << endl;
        b /= 10;
    }
    cout << a * num;
    return 0;
}