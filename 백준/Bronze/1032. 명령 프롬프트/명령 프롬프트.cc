#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, arr[50] = {};
    string s1, s2;
    cin >> n;
    cin >> s1;
    for (int i = 0; i < n - 1; ++i) {
        cin >> s2;
        for (int j = 0; j < s1.length(); ++j) {
            if (s1[j] != s2[j]) {
                arr[j]++;
            }
        }
    }
    for (int i = 0; i < s1.length(); ++i) {
        if (arr[i] > 0) {
            cout << "?";
        } else {
            cout << s1[i];
        }
    }
    return 0;
}
