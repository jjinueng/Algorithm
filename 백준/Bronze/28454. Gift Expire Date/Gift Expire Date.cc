#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n, year, month, day, y, m, d, ans=0;
    cin >> year;
    cin.get();
    cin >> month;
    cin.get();
    cin >> day;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> y;
        cin.get();
        cin >> m;
        cin.get();
        cin >> d;
        if(year<y) ans++;
        else if(year==y&&month<m) ans++;
        else if(year==y&&month==m&&day<=d) ans++;
    }
    cout<<ans;
    return 0;
}