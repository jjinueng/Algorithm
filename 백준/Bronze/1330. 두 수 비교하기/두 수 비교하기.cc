#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    if (a>b) cout << ">";
    else if (a<b) cout << "<";
    else if (a==b) cout << "==";
    return 0;
}