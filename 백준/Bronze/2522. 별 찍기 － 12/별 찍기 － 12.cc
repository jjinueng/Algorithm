#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    for(int i=1; i<n; i++){
        for(int j=0; j<(n-i); j++){
            cout << " ";
        }
        for(int j=i; j>0; j--){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=n; i>0; i--){
        for(int j=0; j<(n-i); j++){
            cout << " ";
        }
        for(int j=i; j>0; j--){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}