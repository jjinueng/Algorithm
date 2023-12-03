#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int N;
    string ans, S, T;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> S >> T;
        for (int j = 0; j < S.length(); ++j) {
            if (S[j] == 'X' || S[j] == 'x') {
                if (T[j] <= 'z' && T[j] >= 'a')
                    ans += char(T[j] - 32);
                else
                    ans += T[j];
            }
        }
    }
    cout << ans;
    return 0;
}
