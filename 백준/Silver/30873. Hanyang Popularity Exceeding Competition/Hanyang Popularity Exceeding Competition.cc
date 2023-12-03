#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int N, P, C, X = 0;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> P >> C;
        if (abs(P - X) <= C) X++;
    }
    cout << X;
    return 0;
}
