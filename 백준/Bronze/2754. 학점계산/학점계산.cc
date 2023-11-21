#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    string s;
    float ans = 0.0;
    cin >> s;
    if (s != "F") {
        ans += abs(int(s[0] - 69));
        if (s[1] == '+') ans += 0.3;
        else if (s[1] == '-') ans -= 0.3;
    }
    cout << fixed << setprecision(1);
    cout << ans;
    return 0;
}
