#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, count, c = 0, nc = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> count;
        if (count) c++;
        else nc++;
    }
    if (c > nc) cout << "Junhee is cute!";
    else cout << "Junhee is not cute!";
    return 0;
}