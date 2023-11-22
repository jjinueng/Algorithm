#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int x;
    int n;
    int a;
    int b;
    int sum = 0;

    cin >> x;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> a;
        cin >> b;

        sum += a * b;
    }

    if(x == sum)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}