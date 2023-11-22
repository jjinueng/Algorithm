#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b) % c << endl << ((a % c) + (b % c)) % c << endl << (a * b) % c << endl << ((a % c) * (b % c)) % c;
    return 0;
}