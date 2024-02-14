#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

queue<int> q;

void solve() {
    string s;
    int x;
    cin >> s;
    if (s == "push") {
        cin >> x;
        q.push(x);
    } else if (s == "pop") {
        if (q.empty()) cout << -1 << endl;
        else {
            cout << q.front() << endl;
            q.pop();
        }
    } else if (s == "size") cout << q.size() << endl;
    else if (s == "empty") {
        if (q.empty()) cout << 1 << endl;
        else cout << 0 << endl;
    } else if (s == "front") {
        if (q.empty()) cout << -1 << endl;
        else cout << q.front() << endl;
    } else if (s == "back") {
        if (q.empty()) cout << -1 << endl;
        else cout << q.back() << endl;
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
