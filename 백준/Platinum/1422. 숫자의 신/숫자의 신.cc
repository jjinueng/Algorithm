#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int compare1(string a, string b) {
    if (a.length() > b.length()) return 1;
    else if (a.length() == b.length() && a > b) return 1;
    else return 0;
}

int compare2(string a, string b) {
    if (a + b > b + a) return 1;
    else return 0;
}

int main() {
    fastio;
    int k, n;
    cin >> k >> n;
    vector<string> v(n);
    for (int i = 0; i < k; ++i) cin >> v[i];
    sort(v.begin(), v.end(), compare1);
    for (int i = k; i < n; ++i) v[i] = v[0];
    sort(v.begin(), v.end(), compare2);
    for (int i = 0; i < n; ++i) cout << v[i];
}