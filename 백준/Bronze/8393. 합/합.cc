#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n;
    int sum = 0;
    cin >> n;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout << sum;
    return 0;
}

