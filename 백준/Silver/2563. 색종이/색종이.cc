#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int arr[101][101] = {}, ans = 0;
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        for (int j = a; j < a + 10; ++j) {
            for (int k = b; k < b + 10; ++k) {
                arr[j][k] = 1;
            }
        }
    }
    for (int i = 0; i < 101; ++i) {
        for (int j = 0; j < 101; ++j) {
            if (arr[i][j] > 0) ans++;
        }
    }
    cout << ans;
    return 0;
}
