#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int N, count = 0;
    cin >> N;

    count += (2 * N + 1) * (2 * N + 1);
    for (int a = -N; a <= N; ++a) {
        if (a != 0) {
            for (int b = -N; b <= N; ++b) {
                int c = 1 - a - b;
                if (c >= -N && c <= N) {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}
