#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int t, c, score;
    string s;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        c = 1, score = 0;
        cin >> s;
        for (int j = 0; j < s.length(); ++j) {
            if (s[j] == 'O') {
                score += c;
                c++;
            } else c = 1;
        }
        cout << score << endl;
    }
    return 0;
}