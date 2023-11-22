#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n,m,i,j,k;
    cin >> n >> m;
    vector<int> a(n);
    for (int l = 0; l < m; ++l) {
        cin >>i>>j>>k;
        for (int i1 = i-1; i1 <= j-1; ++i1) {
            a[i1]=k;
        }
    }
    for (int l = 0; l < n; ++l) {
        cout << a[l] << " ";
    }
    return 0;
}