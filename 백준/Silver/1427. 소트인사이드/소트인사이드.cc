#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    ll n;
    int l;
    vector<int> a;
    cin >> n;
    l = to_string(n).length();
    for (int i = 0; i < l; ++i) {
        a.push_back(n % 10);
        n /= 10;
        if (n < 10) {
            a.push_back(n);
            break;
        }
    }
    if (l == 1) cout << a[0];
    else {
        sort(begin(a), end(a));
        for (int i = l - 1; i >= 0; i--) {
            cout << a[i];
        }
    }
    return 0;
}