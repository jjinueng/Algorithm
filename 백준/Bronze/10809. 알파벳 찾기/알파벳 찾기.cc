#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    string s;
    cin >> s;
    for (int i = 'a'; i <= 'z'; ++i) {
        int count = 0;
        for (int j = 0; j < s.length(); ++j) {
            if (s[j] == i) break;
            count++;
        }
        if (count == s.length()) count = -1;
        cout << count << " ";
    }
    return 0;
}