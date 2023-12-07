#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    vector<int> v(3);
    for (int i = 0; i < 3; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 3; ++i) {
        cout << v[i] << " ";
    }
    return 0;
}
