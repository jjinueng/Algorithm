#include <bits/stdc++.h>
using namespace std;

pair<int, int> split_number(string s) {
    stringstream ss(s);
    int a, b;
    char _;
    ss >> a >> _ >> b;
    return make_pair(a, b);
}

void solve(int a, int b) {
    int g = gcd(a, b);
    cout << a / g << ":" << b / g;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    string input;
    cin >> input;
    auto [a, b] = split_number(input);
    solve(a, b);
    return 0;
}
