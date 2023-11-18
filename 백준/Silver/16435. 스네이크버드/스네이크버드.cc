#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;


int main() {
    fastio;
    int n, l;
    cin >> n >> l;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i) {
        if (l >= v[i]) {
            l++;
        } else break;
    }
    cout << l;
    return 0;
}
