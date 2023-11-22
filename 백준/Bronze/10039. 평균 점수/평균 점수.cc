#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, sum = 0;
    for (int i = 0; i < 5; ++i) {
        cin >> n;
        if (n < 40) sum += 40;
        else sum += n;
    }
    cout << sum / 5;
}