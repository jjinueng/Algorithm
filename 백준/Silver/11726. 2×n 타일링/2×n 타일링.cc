#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int arr[1001] = {0, 1, 2, 3};

int solve(int n) {
    if (arr[n] != 0) return arr[n];
    return arr[n] = (solve(n - 1) + solve(n - 2)) % 10007;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}
