#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int N, s[200'200] = {}, ans = 0, max = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> s[i];
        if (max < s[i]) {
            max = s[i];
        }
    }
    ans = max + N-1;
    cout << ans;
    return 0;
}
