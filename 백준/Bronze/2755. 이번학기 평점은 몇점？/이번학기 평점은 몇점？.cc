#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    string sub, score;
    float ans = 0.0, t, cnt = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        float sum = 0.0;
        cin >> sub >> t >> score;
        if (score != "F") {
            sum += abs(int(score[0] - 69));
            if (score[1] == '+') sum += 0.3;
            else if (score[1] == '-') sum -= 0.3;
        }
        cnt += t;
        ans += t * sum;
    }
    cout << fixed << setprecision(2);
    cout << ans / cnt;
    return 0;
}
