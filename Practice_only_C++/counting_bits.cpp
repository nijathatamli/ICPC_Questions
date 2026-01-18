#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;  

    int s = 1;
    for (int i = 2; i <= n; i++)
        s ^= i;

    cout << s << '\n';
    return 0;
}
