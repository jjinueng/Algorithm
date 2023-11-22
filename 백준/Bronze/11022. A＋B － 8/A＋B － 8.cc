#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int t;
    int a;
    int b;

    cin >> t;

    for(int i=1; i<=t; i++){
        cin >> a;
        cin >> b;

        cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << endl;
    }

    return 0;
}
