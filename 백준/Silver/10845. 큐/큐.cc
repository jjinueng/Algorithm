#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

vector<int> v;

void solve() {
    string s;
    int x;
    cin >> s;
    if (s == "push") {
        cin >> x;
        v.push_back(x);
    } else if (s == "pop") {
        if (v.empty()) cout << -1 << endl;
        else {
            cout << v.front() << endl;
            v.erase(v.begin());
        }
    } else if (s == "size") cout << v.size() << endl;
    else if (s == "empty") {
        if (v.empty()) cout << 1 << endl;
        else cout << 0 << endl;
    } else if (s == "front") {
        if (v.empty()) cout << -1 << endl;
        else cout << v.front() << endl;
    } else if (s == "back") {
        if (v.empty()) cout << -1 << endl;
        else cout << v.back() << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        solve();
    }
    return 0;
}
