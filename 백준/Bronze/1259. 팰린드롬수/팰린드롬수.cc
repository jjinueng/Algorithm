#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'

using namespace std;


int main() {
    fastio;
    string s;
    while (getline(cin, s)) {
        int count = 0;
        if (s == "0") break;
        for (int i = 0; i < s.length() / 2; ++i) {
            if (s[i] == s[s.length() - 1 - i]) count++;
            else {
                cout << "no" << endl;
                break;
            }
        }
        if (count == s.length() / 2) { cout << "yes" << endl; }
    }
    return 0;
}

