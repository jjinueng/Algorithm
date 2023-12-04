#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int N, M, num;
    set<int> s;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> num;
        s.insert(num);
    }
    cin >> M;
    for (int i = 0; i < M; ++i) {
        cin >> num;
        s.find(num) != s.end() ? cout << 1 << " " : cout << 0 << " ";
    }
    return 0;
}
