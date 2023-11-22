#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n, m, i, j, tmp = 0;

    cin >> n;
    cin >> m;

    int a[n];

    for(int k=0; k<n; k++){
        a[k]=k+1;
    }
    for(int k=0; k<m; k++){
        cin >> i;
        cin >> j;

        tmp = a[i-1];
        a[i-1] = a[j-1];
        a[j-1] = tmp;
    }
    for(int k=0; k<n; k++){
        cout << a[k] << " ";
    }

    return 0;
}