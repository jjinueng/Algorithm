#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
            if (s[i] >= 'a' && s[i] <= 'a' + 12 || s[i] >= 'A' && s[i] <= 'A' + 12)
                s[i] = char(s[i] + 13);
            else if (s[i] >= 'a' + 12 && s[i] <= 'z' || s[i] >= 'A' + 12 && s[i] <= 'Z')
                s[i] = char(s[i] - 13);
        }
    }
    cout << s;
    return 0;
}