#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n, x, y;
    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        cin >> y;
        if(y<x) cout << y << " ";
    }
    return 0;
}