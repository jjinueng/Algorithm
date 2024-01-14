#include <bits/stdc++.h>

using namespace std;

void solve(string s) {
    vector<string> v;
    int n = s.length();
    v.push_back(s);
    for (int i = 0; i < n - 1; ++i) {
        s.erase(s.begin());
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    string S;
    cin >> S;
    solve(S);
    return 0;
}
