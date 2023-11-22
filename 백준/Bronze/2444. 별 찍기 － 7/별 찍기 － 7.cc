#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int j = 0; j < (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = (2 * (n - i) - 1); j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }
}