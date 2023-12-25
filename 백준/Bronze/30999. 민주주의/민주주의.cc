#include <bits/stdc++.h>

using namespace std;
int N, M, ans = 0;

bool solve(string s) {
    int count = 0;
    for (int i = 0; i < M; ++i) {
        if (s[i] == 'O') count++;
    }
    if (count > M / 2) return true;
    else return false;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;
        if (solve(s)) ans++;
    }
    cout << ans;
    return 0;
}
