#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    string s;
    int ans = 0;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')ans++;
    }
    cout << ans;
    return 0;
}
