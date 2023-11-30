#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

vector<int> v;

void is_deque() {
    string s;
    int x;
    cin >> s;
    if (s == "push_front") {
        cin >> x;
        v.insert(v.begin(), x);
    } else if (s == "push_back") {
        cin >> x;
        v.push_back(x);
    } else if (s == "pop_front") {
        if (v.empty()) cout << -1 << endl;
        else {
            cout << v[0] << endl;
            v.erase(v.begin());
        }
    } else if (s == "pop_back") {
        if (v.empty()) cout << -1 << endl;
        else {
            cout << v[v.size() - 1] << endl;
            v.pop_back();
        }
    } else if (s == "size") {
        cout << v.size() << endl;
    } else if (s == "empty") {
        if (v.empty()) cout << 1 << endl;
        else cout << 0 << endl;
    } else if (s == "front") {
        if (v.empty()) cout << -1 << endl;
        else cout << v[0] << endl;
    } else if (s == "back") {
        if (v.empty()) cout << -1 << endl;
        else cout << v[v.size() - 1] << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        is_deque();
    }
    return 0;
}
