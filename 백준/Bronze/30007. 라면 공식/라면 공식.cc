#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'

using namespace std;


int main() {
    fastio;
    int n, a, b, x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b >> x;
        cout << a*(x-1)+b << endl;
    }
    return 0;
}

