#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    queue<int> Q;
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        Q.push(i);
    }
    while (Q.size() != 1) {
        cout << Q.front() << " ";
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }
    cout << Q.front();
    return 0;
}
