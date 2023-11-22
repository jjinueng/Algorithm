#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    string s;
    int ans=1;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if(s[i]==',') ans++;
    }
    cout << ans;
    return 0;
}