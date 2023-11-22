#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, sum1 = 0, sum2 = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum1 += a[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        if (b[i] == 0) sum2 += a[i];
    }
    cout << sum1 << endl << sum2;
    return 0;
}