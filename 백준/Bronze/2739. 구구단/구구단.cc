#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for (int i = 1; i < 10; ++i) {
        cout << n << " * " << i << " = " << n*i << endl;
    }
    return 0;
}