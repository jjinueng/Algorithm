#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
    int ans = 0;
    n = 1000 - n;
    if (n >= 500) {
        ans += n / 500;
        n %= 500;
    }
    if (n >= 100) {
        ans += n / 100;
        n %= 100;
    }
    if (n >= 50) {
        ans += n / 50;
        n %= 50;
    }
    if (n >= 10) {
        ans += n / 10;
        n %= 10;
    }
    if (n >= 5) {
        ans += n / 5;
        n %= 5;
    }
    ans += n;
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}
