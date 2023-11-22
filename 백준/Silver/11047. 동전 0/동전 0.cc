#include <iostream>
#include <vector>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n, k, sum = 0, count = 0;
    cin >> n;
    cin >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    while (1) {
        for (int i = n - 1; i >= 0; i--) {
            if (v[i] > k || sum + v[i] > k) continue;
            sum += v[i];
            break;
        }
        count++;
        if (sum == k)
            break;
    }

    cout << count;

    return 0;
}
