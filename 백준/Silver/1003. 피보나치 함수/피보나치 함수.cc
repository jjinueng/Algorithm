#include <bits/stdc++.h>

int z[41] = {1, 0};
int o[41] = {0, 1};
using namespace std;

int zero(int n) {
    if (n < 2) return z[n];
    else if (z[n] != 0) return z[n];
    else return z[n] = zero(n - 2) + zero(n - 1);
}

int one(int n) {
    if (n < 2) return o[n];
    else if (o[n] != 0) return o[n];
    else return o[n] = one(n - 2) + one(n - 1);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T, N;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> N;
        cout << zero(N) << " " << one(N) << '\n';
    }
    return 0;
}
