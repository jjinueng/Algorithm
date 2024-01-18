#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int N, M;
    map<int, int> s;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        s[num]++;
    }
    cin >> M;
    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;
        cout << s[num] << " ";
    }
    return 0;
}
