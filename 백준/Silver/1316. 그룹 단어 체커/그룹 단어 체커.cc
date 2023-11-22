#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n;
    string s;
    cin >> n;
    int count = n;
    for (int i = 0; i < n; ++i) {
        bool a[26] = {};
        cin >> s;
        a[(int) s[0] - 97] = 1;
        for (int j = 1; j < s.length(); ++j) {
            if (s[j] != s[j - 1] && a[(int) s[j] - 97] == 1) {
                count--;
                break;
            }
            a[(int) s[j] - 97] = 1;
        }
    }
    cout << count;

    return 0;
}