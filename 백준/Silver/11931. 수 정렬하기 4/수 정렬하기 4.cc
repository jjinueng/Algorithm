#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, num;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end(), greater<>());
    for (int i = 0; i < n; ++i) {
        cout << v[i] << endl;
    }
    return 0;
}