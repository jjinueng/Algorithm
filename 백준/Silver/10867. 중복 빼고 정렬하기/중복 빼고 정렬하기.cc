#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, num;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        s.insert(num);
    }
    for (auto i = s.begin(); i != s.end(); ++i) {
        cout << *i << " ";
    }
    return 0;
}
