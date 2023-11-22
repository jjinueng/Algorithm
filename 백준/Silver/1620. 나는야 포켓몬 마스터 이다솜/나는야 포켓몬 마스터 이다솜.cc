#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    map<int, string> map1;
    map<string, int> map2;
    string s;

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> s;
        map1[i] = s;
        map2[s] = i;
    }
    for (int i = 0; i < m; ++i) {
        cin >> s;
        if (atoi(s.c_str()) == 0) cout << map2[s] << endl;

        else cout << map1[atoi(s.c_str())] << endl;
    }
    return 0;
}