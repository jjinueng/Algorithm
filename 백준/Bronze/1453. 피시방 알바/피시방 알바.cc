#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, num, a[100] = {}, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (a[num-1] != 0) {
            ans++;
        }
        a[num-1]++;
    }
    cout << ans;
    return 0;
}