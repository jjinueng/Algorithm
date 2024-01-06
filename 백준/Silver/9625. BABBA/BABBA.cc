#include <bits/stdc++.h>

using namespace std;

int K;

int A[46], B[46];

int solve_a(int n) {
    A[1] = 0, A[2] = 1;
    if (A[n] > -1) return A[n];
    return A[n] = solve_a(n - 1) + solve_a(n - 2);
}

int solve_b(int n) {
    B[1] = 1, B[2] = 1;
    if (B[n] > -1) return B[n];
    return B[n] = solve_b(n - 1) + solve_b(n - 2);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    fill_n(A, 46, -1);
    fill_n(B, 46, -1);
    cin >> K;
    cout << solve_a(K) << " " << solve_b(K);
    return 0;
}
