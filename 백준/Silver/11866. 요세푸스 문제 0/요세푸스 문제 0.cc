#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int N, K;
    queue<int> q;
    cin >> N >> K;
    for (int i = 1; i <= N; ++i) {
        q.push(i);
    }
    cout << "<";
    while (!q.empty()) {
        for (int i = 1; i < K; ++i) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        if (q.size() != 1) cout << ", ";
        q.pop();
    }
    cout << ">";
    return 0;
}
