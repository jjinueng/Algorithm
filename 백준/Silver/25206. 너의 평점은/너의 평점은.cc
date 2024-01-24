#include <bits/stdc++.h>

using namespace std;

float cal(string s) {
    if (s == "A+") return 4.5;
    else if (s == "A0") return 4.0;
    else if (s == "B+") return 3.5;
    else if (s == "B0") return 3.0;
    else if (s == "C+") return 2.5;
    else if (s == "C0") return 2.0;
    else if (s == "D+") return 1.5;
    else if (s == "D0") return 1.0;
    else if (s == "F") return 0.0;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    string subject, grade;
    float sum, credit, count = 0;
    for (int i = 0; i < 20; ++i) {
        cin >> subject >> credit >> grade;
        if (grade == "P") continue;
        sum += credit * cal(grade);
        count += credit;
    }
    cout << fixed;
    cout.precision(6);
    cout << sum / count;
    return 0;
}
