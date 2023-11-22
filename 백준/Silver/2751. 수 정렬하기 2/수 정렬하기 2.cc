#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, k;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; ++i) {
        cin >> k;
        a.push_back(k);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; ++i) {
        cout << a[i] << endl;
    }
    return 0;
}