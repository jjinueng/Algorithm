#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n;
    cin >> n;
    if(n%4==0&&(n%100!=0||n%400==0))
        cout << "1";
    else
        cout << "0";
    return 0;
}