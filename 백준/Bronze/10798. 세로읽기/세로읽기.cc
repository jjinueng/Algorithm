#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    string s;
    vector<string> v;
    int maxLen = 0;
    while (cin >> s) {
        v.push_back(s);
        maxLen = max(maxLen, (int) s.length());
    }
    for (int i = 0; i < maxLen; ++i) {
        for (int j = 0; j < v.size(); ++j) {
            if (i < v[j].length()) cout << v[j][i];
        }
    }
    return 0;
}
