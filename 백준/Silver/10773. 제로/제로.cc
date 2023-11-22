#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int k, n, sum = 0;
    cin >> k;
    vector<int> v;
    for (int i = 0; i < k; ++i) {
        cin >> n;
        if (n) {
            v.push_back(n);
        } else {
            v.pop_back();
        }
    }
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
    }
    cout << sum;
    return 0;
}