#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int a, b, sum = 0, max = 0;
    while (1) {
        cin >> a >> b;
        sum = sum + b - a;
        if (max < sum) max = sum;
        if (b == 0) break;
    }
    cout << max;
    return 0;
}