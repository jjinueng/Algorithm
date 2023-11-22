#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n1, n2, count = 0;
    cin >> n1;
    n2 = n1;
    while (true) {
        n1 = ((n1 / 10) + (n1 % 10)) % 10 + (n1 % 10) * 10;
        count++;
        if (n1 == n2) break;
    }
    cout << count;
    return 0;
}