#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, m;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(), v.end());
    cout << v[0] * v[v.size() - 1];
    return 0;
}