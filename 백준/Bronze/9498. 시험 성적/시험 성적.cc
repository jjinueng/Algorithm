#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    if (90 <= n && n <= 100) cout << "A";
    else if (80 <= n && n <= 89)cout << "B";
    else if (70 <= n && n <= 79) cout << "C";
    else if (60 <= n && n <= 69) cout << "D";
    else cout << "F";
    return 0;
}