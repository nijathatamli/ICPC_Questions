#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    for (int i = 1; i < n+1; i+= 2)
        cout << string((n - i) / 2, ' ') << string(i, '*')  << endl;
    for (int i = n-2; i > 0; i -= 2)
        cout << string((n - i) / 2, ' ') << string(i, '*')  << endl;
    return 0;
    }