#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, num, score = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num == 1) {
            score++;
            ans += score;
        } else score = 0;
    }
    cout << ans;
    return 0;
}