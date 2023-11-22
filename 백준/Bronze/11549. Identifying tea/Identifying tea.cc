#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t, n, ans=0;
    cin >> t;
    for(int i=0; i<5; i++){
        cin >> n;
        if(n==t) ans++;
    }
    cout << ans;
    return 0;
}