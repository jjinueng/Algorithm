#include <bits/stdc++.h>

using namespace std;
string s;
int joi, ioi;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> s;
    for (int i = 0; i < s.length() - 2; ++i) {
        string a = s.substr(i, 3);
        if (a == "JOI") joi++;
        else if (a == "IOI") ioi++;
    }
    cout << joi << '\n' << ioi;
    return 0;
}
