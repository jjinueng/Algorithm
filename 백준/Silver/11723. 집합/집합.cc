#include <bits/stdc++.h>

using namespace std;
int M, S[21] = {};

void menu() {
    string s;
    int n;
    cin >> s;
    if (s == "add") {
        cin >> n;
        if (n >= 1 && n <= 20) S[n] = 1;
    } else if (s == "remove") {
        cin >> n;
        if (n >= 1 && n <= 20) S[n] = 0;
    } else if (s == "check") {
        cin >> n;
        if (S[n]) cout << 1 << '\n';
        else cout << 0 << '\n';
    } else if (s == "toggle") {
        cin >> n;
        if (n >= 1 && n <= 20) {
            if (S[n]) S[n] = 0;
            else S[n] = 1;
        }
    } else if (s == "all") {
        for (int i = 1; i < 21; ++i) {
            S[i] = 1;
        }
    } else if (s == "empty") {
        for (int i = 1; i < 21; ++i) {
            S[i] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> M;
    for (int i = 0; i < M; ++i) {
        menu();
    }
    return 0;
}
