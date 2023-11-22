#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, t=0;
    for(int i=0; i<4; i++){
        cin >> n;
        t+=n;
    }
    cout << t/60 << endl << t%60;
    return 0;
}