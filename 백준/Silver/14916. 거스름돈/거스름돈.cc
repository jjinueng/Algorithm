#include <bits/stdc++.h>

using namespace std;


int solve(int n) {
    int count = 0;
    if (n % 5 == 0) return n / 5;
    while (n > 0) {
        n -= 2;
        count++;
        if (n % 5 == 0) {
            return count + n / 5;
        }
    }
    return -1;
}


int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    cout << solve(n);
    return 0;
}
