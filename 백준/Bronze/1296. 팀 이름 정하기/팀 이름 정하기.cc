#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    int n, max = -1;
    string name, team, victory;
    cin >> name >> n;
    for (int i = 0; i < n; ++i) {
        ll p = 1;
        int v[4] = {};
        cin >> team;
        for (int j = 0; j < name.length(); j++) {
            if (name[j] == 'L') v[0]++;
            else if (name[j] == 'O') v[1]++;
            else if (name[j] == 'V') v[2]++;
            else if (name[j] == 'E') v[3]++;
        }
        for (int j = 0; j < team.length(); j++) {
            if (team[j] == 'L') v[0]++;
            else if (team[j] == 'O') v[1]++;
            else if (team[j] == 'V') v[2]++;
            else if (team[j] == 'E') v[3]++;
        }
        for (int j = 0; j < 3; ++j) {
            for (int k = j + 1; k < 4; ++k) {
                p *= (v[j] + v[k]);
            }
        }
        p %= 100;
        if (p > max) {
            max = p;
            victory = team;
        } else if (p == max) {
            if (victory > team) {
                max = p;
                victory = team;
            }
        }
    }
    cout << victory;
    return 0;
}
