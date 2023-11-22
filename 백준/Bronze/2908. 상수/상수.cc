#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int num(int n) {
    int ans;
    ans = n % 10 * 100 + (n % 100) / 10 * 10 + n / 100;
    return ans;
}

int main() {
    fastio;
    int a, b;
    cin >> a >> b;
    if (num(a) > num(b))cout << num(a);
    else cout << num(b);

}