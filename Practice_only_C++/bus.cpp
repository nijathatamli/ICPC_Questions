#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b + c;

    if (sum % 3 != 0) {
        cout << "IMPOSSIBLE";
        return 0;
    }

    int each = sum / 3;
    int moves = 0;

    if (a > each) moves += a - each;
    if (b > each) moves += b - each;
    if (c > each) moves += c - each;

    cout << moves;
    return 0;
}
