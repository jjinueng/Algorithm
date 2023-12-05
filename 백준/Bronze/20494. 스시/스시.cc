#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    string s, b;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> b;
        s += b;
    }
    cout << s.length();
    return 0;
}
