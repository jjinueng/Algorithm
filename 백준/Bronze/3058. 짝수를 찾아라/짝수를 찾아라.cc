#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int t, n;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int sum = 0;
        vector<int> a;
        for (int j = 0; j < 7; ++j) {
            cin >> n;
            if (n % 2 == 0) {
                a.push_back(n);
                sum += n;
            }
        }
        sort(a.begin(), a.end());
        cout << sum << " " << a[0] << endl;
    }

}