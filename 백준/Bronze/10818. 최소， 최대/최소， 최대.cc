#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n, k = 0;
    int max = -1000000;
    int min = 1000000;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> k;
        if (max < k)
            max = k;
        if (min > k)
            min = k;
    }
    cout << min << " " << max << endl;
}