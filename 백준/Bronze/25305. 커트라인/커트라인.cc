#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, k, x;
    vector<int> a;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end(), greater<>());
    cout << a[k - 1];
    return 0;
}