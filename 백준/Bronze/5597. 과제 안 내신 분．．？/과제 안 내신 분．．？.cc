#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n;
    int a[30]={};
    for (int i = 0; i < 28; ++i) {
        cin >> n;
        a[n-1]++;
    }
    for (int i = 0; i < 30; ++i) {
        if(a[i]==0) cout << i+1 << endl;
    }
    return 0;
}