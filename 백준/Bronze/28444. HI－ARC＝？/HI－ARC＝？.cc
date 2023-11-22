#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int h, i, a, r, c;
    cin >> h >> i >> a >> r >> c;
    cout << h*i - a*r*c;
    return 0;
}