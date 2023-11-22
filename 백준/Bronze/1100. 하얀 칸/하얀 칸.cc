#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int ans = 0;
    string s[8];
    for (int i = 0; i < 8; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (i % 2 == 0 && j % 2 == 0 && s[i][j] == 'F')ans++;
            else if (i % 2 == 1 && j % 2 == 1 && s[i][j] == 'F')ans++;
        }
    }
    cout << ans;
    return 0;
}