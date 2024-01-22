#include <bits/stdc++.h>

#define ll long long
using namespace std;

ll fib_arr[100] = {0, 1};

ll fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    for (int i = 2; i <= n; i++) {
        fib_arr[i] = fib_arr[i - 1] + fib_arr[i - 2];
    }
    return fib_arr[n];
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}
