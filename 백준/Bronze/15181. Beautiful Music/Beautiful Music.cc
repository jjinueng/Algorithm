#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    char post = s[0];
    for (int i = 1; i < s.length(); i++) {
        char cur = s[i];
        int diff = cur - post;
        if (diff < 0) diff += 7;
        if (diff != 2 && diff != 4 && diff != 6) {
            return "Ouch! That hurts my ears.";
        }
        post = cur;
    }
    return "That music is beautiful.";
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    while (true) {
        string s;
        cin >> s;
        if (s == "#") break;
        cout << solve(s) << '\n';
    }
    return 0;
}
