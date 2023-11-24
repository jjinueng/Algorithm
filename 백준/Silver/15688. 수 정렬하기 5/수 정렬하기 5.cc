#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(begin(a), end(a));
    for (int i = 0; i < n; ++i) {
        cout << a[i] << endl;
    }
    return 0;
}
