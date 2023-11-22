#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int max = 0;
    int a[9];
    for (int i = 0; i < 9; ++i) {
        cin >> a[i];
        if (max < a[i])
            max = a[i];
    }
    cout << max << endl;
    for (int i = 0; i < 9; ++i) {
        if (max == a[i])
            cout << i + 1 << endl;
    }
    return 0;
}