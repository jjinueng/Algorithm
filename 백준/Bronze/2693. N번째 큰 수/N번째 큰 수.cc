#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int t;
    vector<int> a(10);
    cin >> t;
    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < 10; ++j) {
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        cout << a[7] << endl;
    }
    return 0;
}