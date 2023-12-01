#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), [](const string &a, const string &b) {
        return a.length() < b.length() || (a.length() == b.length() && a < b);
    });
    cout << a[0] << endl;
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[i - 1]) { cout << a[i] << endl; }
    }
    return 0;
}
