#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

void solve(int n, int m) {
    int max, num = 1;
    if (n < m) max = m;
    else max = n;
    for (int i = 1; i <= max; ++i) {
        if (m % i == 0 && n % i == 0) {
            num = i;
        }
    }
    cout << n / num << ":" << m / num << endl;
}

int main() {
    fastio;
    int n, m;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ':') {
            n = stoi(s.substr(0, i));
            m = stoi(s.substr(i + 1, s.length() - 1));
        }
    }
    solve(n, m);
    return 0;
}
