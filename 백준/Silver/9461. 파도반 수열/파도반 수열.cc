#include <bits/stdc++.h>

using namespace std;

long long arr[101] = {0, 1, 1, 1, 2, 2};

long long solve(int n) {
    if (arr[n] != 0) return arr[n];
    else return arr[n] = solve(n - 2) + solve(n - 3);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t, n;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        cout << solve(n) << '\n';
    }
    return 0;
}
