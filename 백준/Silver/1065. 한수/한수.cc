#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

bool solve(int num) {
    if (num < 10) {
        return true;
    } else if (10 <= num && num < 100) {
        return true;
    } else if (100 <= num && ((num / 100) + (num % 10)) == (num / 10 % 10 * 2)) {
        return true;
    } else return false;
}

int main() {
    fastio;
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (solve(i)) ans++;
    }
    cout << ans;
    return 0;
}