#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n, v, c = 0;
    int a[100] = {};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> v;
    for (int i = 0; i < n; ++i) {
        if (a[i] == v) c++;
    }
    cout << c;
    return 0;
}