#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int a[10];
    int b[42] = {};
    int n=0;
    for (int i=0; i<10; i++){
        cin >> a[i];
        a[i] = a[i]%42;
        b[a[i]]++;
    }
    for (int i=0; i<42; i++){
        if(b[i]!=0)
            n++;
    }
    cout << n;
    return 0;
}