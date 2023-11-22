#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, a[100] = {}, avg = 0, max = 0, m;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        a[n / 10]++;
        avg += n;
        if (a[n / 10] > max) {
            m = n;
            max = a[n / 10];
        }

    }
    cout << avg / 10 << endl << m;
    return 0;
}