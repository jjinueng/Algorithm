#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int t, n;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        cin >> n;
        cout << "Case #" << i << ": ";
        if (n <= 4500 && n > 1000) {
            cout << "Round 2" << endl;
        } else if (n <= 1000 && n > 25) {
            cout << "Round 3" << endl;
        } else if (n <= 25) {
            cout << "World Finals" << endl;
        } else cout << "Round 1" << endl;
    }
    return 0;
}