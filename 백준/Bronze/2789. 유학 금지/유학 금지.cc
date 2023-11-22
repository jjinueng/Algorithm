#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    string s1, s2;
    cin >> s1;
    for (int i = 0; i < s1.length(); ++i) {
        if ((s1[i] >= 'A' && s1[i] <= 'E') || s1[i] == 'G' || s1[i] == 'I' || s1[i] == 'M' || s1[i] == 'R') continue;
        s2 += s1[i];
    }
    cout << s2;
    return 0;
}