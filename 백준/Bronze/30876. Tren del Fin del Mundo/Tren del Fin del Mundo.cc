#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<pair<int, int>> s;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        s.insert({y, x});
    }
    cout << s.begin()->second << " " << s.begin()->first << endl;
}
