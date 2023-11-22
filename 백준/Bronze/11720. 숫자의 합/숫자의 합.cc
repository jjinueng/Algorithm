#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;

    int sum=0;
    int n;
    char a[100]={};
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        sum += (int(a[i])-48);
    }
    cout << sum;
    return 0;
}