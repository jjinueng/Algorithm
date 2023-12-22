#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    string s, p;
    unordered_map<string, string> dict;
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < n; ++i) {
        cin >> s >> p;
        dict[s] = p;
    }
    for (int i = 0; i < m; ++i) {
        cin >> s;
        cout << dict[s] << '\n';
    }
    return 0;
}
