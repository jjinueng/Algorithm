#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    else if (n == 2) return true;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    fastio;
    int m, n, sum = 0;
    vector<int> a;
    cin >> m >> n;
    for (int i = m; i <= n; ++i) {
        if (is_prime(i)) {
            sum += i;
            a.push_back(i);
        }
    }
    if (sum == 0) cout << -1;
    else cout << sum << endl << a[0];
    return 0;
}