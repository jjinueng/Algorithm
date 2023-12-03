#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int arr[12] = {0, 1, 2, 4};

int solve(int n) {
    if (arr[n] != 0) return arr[n];
    else return arr[n] = solve(n - 1) + solve(n - 2) + solve(n - 3);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T, n;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
