#include <bits/stdc++.h>

#define fastio cin.tie(0)->sync_with_stdio(0);
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    fastio;
    int n, num;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        a.push_back(num);
    }
    sort(a.begin(), a.end());
    cout << a[a.size() - 1];
}