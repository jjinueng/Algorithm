#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    string a, b;
    char s[30][30];
    int n = -1, m = -1;
    cin >> a >> b;
    for (int i = 0; i < a.length(); ++i) {
        for (int j = 0; j < b.length(); ++j) {
            if (a[i] == b[j]) {
                n = i;
                m = j;
                break;
            }
        }
        if (n > -1 || m > -1) break;
    }
    for (int i = 0; i < a.length(); ++i) {
        for (int j = 0; j < b.length(); ++j) {
            if (i == n) {
                s[j][i] = b[j];
            } else s[j][i] = '.';
        }
        s[m][i] = a[i];
    }
    for (int i = 0; i < b.length(); ++i) {
        for (int j = 0; j < a.length(); ++j) {
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}