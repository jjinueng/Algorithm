#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    string s;
    int h, m;
    cin >> h >> m;
    if(m>=45) cout << h << " " << m-45 << endl;
    else if(m<45 && h!=0) cout << h-1 << " " << m+15 << endl;
    else if (m < 45 && h == 0) cout << "23 " << m + 15 << endl;
    return 0;
}