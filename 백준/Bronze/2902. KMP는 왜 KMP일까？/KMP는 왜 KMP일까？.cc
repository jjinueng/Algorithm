#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    string n;
    vector<char> i;
    cin >> n;
    for (char j : n) {
        if (j >= 'A' && j <= 'Z') i.push_back(j);
    }
    for (char j : i) {
        cout << j;
    }
    return 0;
}