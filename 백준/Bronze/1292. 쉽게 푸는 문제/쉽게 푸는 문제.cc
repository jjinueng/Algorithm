#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int a, b, ans = 0;
    vector<int> arr;
    cin >> a >> b;
    for (int i = 0; i < 46; ++i) {
        for (int j = 0; j < i; ++j) {
            arr.push_back(i);
        }
    }
    for (int i = a - 1; i <= b - 1; ++i) {
        ans += arr[i];
    }
    cout << ans;
    return 0;
}
