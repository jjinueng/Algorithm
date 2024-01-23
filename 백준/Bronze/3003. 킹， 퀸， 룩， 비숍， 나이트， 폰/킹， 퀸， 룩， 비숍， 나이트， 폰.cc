#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int a[6] = {1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; ++i) {
        int num;
        cin >> num;
        cout << a[i] - num << " ";
    }
    return 0;
}
