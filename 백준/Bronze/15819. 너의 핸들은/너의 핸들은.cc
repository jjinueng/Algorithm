#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, i;
    string s;
    vector<string> v;
    cin >> n >> i;
    for (int j = 0; j < n; ++j) {
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    cout << v[i - 1];
    return 0;
}