#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int c, n = 0;
    cin >> c;
    for (int i = 0; i < c; i++) {
        int sum, count = 0;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            sum += a[j];
        }
        for (int j = 0; j < n; j++) {
            if (a[j] > (sum / n))
                count++;
        }
        cout.setf(ios::showpoint);
        cout.precision(5);
        cout << count / (double) n * 100 << "%" << endl;

        sum = 0;
        count = 0;
    }

    return 0;
}