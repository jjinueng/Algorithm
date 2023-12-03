#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int n;
        cin >> n;
        while (n / 5 != 0) {
            n -= 5;
            cout << "++++ ";
        }
        for (int j = 0; j < n; ++j) {
            cout << "|";
        }
        cout << endl;
    }
    return 0;
}
