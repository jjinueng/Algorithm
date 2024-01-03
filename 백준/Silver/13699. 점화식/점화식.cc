#include <bits/stdc++.h>

#define ll long long
using namespace std;
int n;
ll arr[36];

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    arr[0] = 1;
    cin >> n;
    for (int i = 0; i < n + 1; ++i) {
        for (int j = 0; j < i; ++j) {
            arr[i] += arr[j] * arr[i - j - 1];
        }
    }
    cout << arr[n];
    return 0;
}
