#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    multiset<pair<int, int> > m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        m.insert({y, x});
    }
    for (int i = 0; i < n; ++i) {
        cout << m.begin()->second << " " << m.begin()->first << endl;
        m.erase(m.begin());
    }
    return 0;
}