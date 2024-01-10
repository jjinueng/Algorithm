#include <bits/stdc++.h>

using namespace std;
int T, N;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> N;
        if ((N + 1) % (N % 100) == 0) cout << "Good" << '\n';
        else cout << "Bye" << '\n';
    }
    return 0;
}
