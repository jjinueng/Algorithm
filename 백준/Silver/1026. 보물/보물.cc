#include <bits/stdc++.h>

using namespace std;

int N;
int A[51], B[51];

void solve() {
    int ans = 0;
    sort(A, A + N);
    sort(B, B + N, greater<>());
    for (int i = 0; i < N; ++i) {
        ans += A[i] * B[i];
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }
    solve();
    return 0;
}
