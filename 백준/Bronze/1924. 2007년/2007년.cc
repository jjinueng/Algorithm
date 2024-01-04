#include <bits/stdc++.h>

using namespace std;

int x, y, n;
string day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

string solve() {
    for (int i = 1; i < x; ++i) {
        if (i == 2) n += 28;
        else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) n += 31;
        else if (i == 4 || i == 6 || i == 9 || i == 11) n += 30;
    }
    n += y;
    return day[n % 7];
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> x >> y;
    cout << solve();
    return 0;
}
