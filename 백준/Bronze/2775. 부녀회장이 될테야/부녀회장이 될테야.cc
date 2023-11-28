#include <bits/stdc++.h>

#define ll long long
using namespace std;

int solve(int k, int n) {
    int arr[15][15] = {};
    for (int i = 0; i <= k; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == 0) arr[i][j] = j;
            else if (j == 1) arr[i][j] = 1;
            else
                for (int l = 1; l <= j; ++l) {
                    arr[i][j] += arr[i - 1][l];
                }
        }
    }
    return arr[k][n];
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T, k, n;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> k >> n;
        cout << solve(k, n) << endl;
    }
    return 0;
}
