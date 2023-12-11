#include <bits/stdc++.h>

using namespace std;

int arr[1001] = {0, 1, 3, 5};

int solve(int n) {
    if (arr[n] != 0) return arr[n];
    return arr[n] = (solve(n - 1) + 2 * solve(n - 2)) % 10007;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}
