#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int t, r = 0;
    string s;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> r;
        cin >> s;
        for (int j = 0; j < s.length(); ++j) {
            for (int k = 0; k < r; ++k) {
                cout << s[j];
            }
        }
        cout << endl;
    }
}