#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n, l, sum = 0, ans = 0;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> l;
        a.push_back(l);
    }
    sort(a.begin(), a.end(), greater<>());
    if (a.size() > 42) {
        while (a.size() > 42) {
            a.pop_back();
        }
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] >= 60) ans++;
        if (a[i] >= 100) ans++;
        if (a[i] >= 140) ans++;
        if (a[i] >= 200) ans++;
        if (a[i] >= 250) ans++;
        sum += a[i];
    }
    cout << sum  << " " << ans;
    return 0;
}