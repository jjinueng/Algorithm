#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        cout << s[i];
        if ((i + 1) % 10 == 0) cout << endl;
    }
    return 0;
}