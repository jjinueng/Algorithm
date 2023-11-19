#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'

using namespace std;


int main() {
    fastio;
    int t, n;
    string s;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> s;
        s.erase(n - 1, 1);
        cout << s << endl;
    }
    return 0;
}

