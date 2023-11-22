#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int is_palindrome(string s) {
    int l = s.length();
    for (int i = 0; i < l / 2; i++) {
        if (s[i] != s[l - 1 - i])
            return 0;
    }
    return 1;
}

int main() {
    fastio;
    string a;
    cin >> a;
    cout << is_palindrome(a);

    return 0;
}