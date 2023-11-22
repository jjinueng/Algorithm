#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a >> b;
        cout << "Case #" << i + 1 << ": " << a + b << endl;
    }
    return 0;
}