#include <bits/stdc++.h>

#define ll long long
using namespace std;

ll fib_arr[21] = {0, 1};

ll fib(int n) {
    if (n == 0) return 0;
    else if (n > 0 && fib_arr[n] > 0) return fib_arr[n];
    return fib_arr[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}