#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    if (n > 1) {
        for (int j = 0; j < n * 2; j++) {
            if (j % 2 == 0) {
                for (int k = 0; k < n; ++k) {
                    if (k % 2 == 0) cout << "*";
                    else cout << " ";
                }
            } else {
                for (int k = 0; k < n; ++k) {
                    if (k % 2 == 0) cout << " ";
                    else cout << "*";
                }
            }
            cout << endl;
        }
    } else cout << "*";
    return 0;
}