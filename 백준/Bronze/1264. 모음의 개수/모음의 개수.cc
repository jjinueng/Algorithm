#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int ans = 0;
    string s;
    while (1) {
        ans = 0;
        getline(cin, s);
        if (s == "#") {
            break;
        }
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' ||
                s[i] == 'O' || s[i] == 'u' || s[i] == 'U') {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}