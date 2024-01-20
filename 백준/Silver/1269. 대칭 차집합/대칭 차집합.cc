#include <bits/stdc++.h>

using namespace std;

int N, M;
set<int> A, B;

void solve() {
    int ans = 0;
    vector<int> tmp(A.size() + B.size());

    auto iter = set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), tmp.begin());
    tmp.erase(iter, tmp.end());

    cout << tmp.size();
}

void input() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        int v;
        cin >> v;
        A.insert(v);
    }
    for (int i = 0; i < M; i++) {
        int v;
        cin >> v;
        B.insert(v);
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    input();
    solve();
    return 0;
}
