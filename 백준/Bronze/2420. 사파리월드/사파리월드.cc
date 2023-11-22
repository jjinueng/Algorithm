#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    ll n, m;
    cin >> n >> m;
    if (n > m) cout << n - m;
    else cout << m - n;
    return 0;
}