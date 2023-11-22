#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, a[1000] = {}, tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < n - 1; j++) {
        for (int k = j + 1; k < n; k++) {
            if (a[j] > a[k]) {
                tmp = a[k];
                a[k] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == a[i + 1]) continue;
        cout << a[i] << endl;
    }
    return 0;
}