#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int a, b, c, i;
    int arr[10] = {};
    cin >> a >> b >> c;
    i = a * b * c;
    for (i; i > 0; i /= 10) {
        arr[i % 10]++;
    }
    for (int j = 0; j < 10; ++j) {
        cout << arr[j] << endl;
    }
    return 0;
}