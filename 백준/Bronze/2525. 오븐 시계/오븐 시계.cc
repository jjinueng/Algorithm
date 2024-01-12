#include <bits/stdc++.h>

using namespace std;
int A, B, C;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    cin >> A >> B >> C;
    A += C / 60;
    B += C % 60;
    if (B > 59) {
        A += B / 60;
        B -= 60;
    }
    if (A > 23) A -= 24;
    cout << A << " " << B;
    return 0;
}
