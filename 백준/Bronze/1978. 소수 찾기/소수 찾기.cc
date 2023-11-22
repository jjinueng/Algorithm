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
    int n, num, ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (is_prime(num)) ans++;
    }
    cout << ans;
    return 0;
}