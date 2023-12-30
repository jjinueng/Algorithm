#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int N, sum = 0, count = 0;
    ull ans = 0;
    cin >> N;
    for (int i = 0; N; ++i) {
        sum += N % 10;
        N /= 10;
        count++;
    }
    for (int i = 0; i < count; ++i) {
        ans += sum * pow(10, i);
    }
    cout << ans;
    return 0;
}
