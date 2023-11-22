#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n, m = 0;
    double a[1000] = {}, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > m) m = a[i];
    }
    for (int i = 0; i < n; ++i) {
        sum += (double) a[i] / m * 100;
    }
    cout << sum / n;
    return 0;
}
