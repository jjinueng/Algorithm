#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    string s;
    int age, weight;
    while (true) {
        cin >> s >> age >> weight;
        if (s == "#" && age == 0 && weight == 0) break;
        cout << s << " ";
        if (age > 17 || weight >= 80) cout << "Senior" << '\n';
        else cout << "Junior" << '\n';
    }
    return 0;
}
