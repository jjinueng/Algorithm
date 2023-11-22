#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n1, n2;
    cin >> n1;
    for (int i = 1; i < 8; ++i) {
        cin >> n2;
        if (n1 == n2 + 1) {
            n1 = n2;
            continue;
        } else if (n1 == n2 - 1) {
            n1 = n2;
            continue;
        } else {
            cout << "mixed";
            return 0;
        }
    }
    if (n2 == 8)cout << "ascending";
    else if (n1 == 1)cout << "descending";
    return 0;
}