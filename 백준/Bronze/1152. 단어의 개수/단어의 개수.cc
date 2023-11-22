#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define endl '\n'
using namespace std;

int main() {
    fastio;
    string s, word;
    int count = 0;
    getline(cin, s);
    stringstream ss(s);
    while (ss >> word) {
        count++;
    }
    cout << count;
    return 0;
}