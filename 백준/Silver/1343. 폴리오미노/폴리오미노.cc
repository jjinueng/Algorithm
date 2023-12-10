#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
//    string s, item;
//    vector<string> v;
//    cin >> s;
//    stringstream ss(s);
//    while (getline(ss, item, '.')) {
//        v.push_back(item);
//    }
//    for (int i = 0; i < v.size(); ++i) {
//        if (v[i].length() % 2 == 1) {
//            cout << "-1";
//            break;
//        }
//
//    }
    string s;
    int count = 0;
    bool is_error = 0;
    cin >> s;
    s += '.';
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '.') {
            if (count % 4 == 0) {
                for (int j = 0; j < count; ++j) {
                    s[i - 1 - j] = 'A';
                }
            } else if (count % 4 == 2) {
                for (int j = 2; j < count; ++j) {
                    s[i - 1 - j] = 'A';
                }
                s[i - 2] = 'B';
                s[i - 1] = 'B';
            } else {
                is_error = 1;
            }
            count = 0;
        } else count++;
    }
    s.erase(s.end() - 1);
    if (is_error) cout << "-1";
    else cout << s;
    return 0;
}
