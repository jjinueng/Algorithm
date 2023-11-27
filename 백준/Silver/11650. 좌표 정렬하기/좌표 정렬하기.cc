#include <bits/stdc++.h>

#define ll long long
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
        m.insert({x, y});
    }

    for (int i = 0; i < n; ++i) {
        cout << m.begin()->first << " " << m.begin()->second << endl;
        m.erase(m.begin());
    }
    return 0;
}
