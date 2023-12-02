#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, age;
    string name;
    multimap<int, string> ms;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> age >> name;
        ms.insert({age, name});
    }
    for (int i = 0; i < n; ++i) {
        cout << ms.begin()->first << " " << ms.begin()->second << endl;
        ms.erase(ms.begin());
    }
    return 0;
}
