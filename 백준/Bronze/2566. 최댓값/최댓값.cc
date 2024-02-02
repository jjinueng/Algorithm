#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int num, col = 0, row = 0, max = 0;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> num;
            if (num > max) {
                max = num;
                col = j;
                row = i;
            }
        }
    }
    cout << max << '\n' << row + 1 << " " << col + 1;
    return 0;
}
