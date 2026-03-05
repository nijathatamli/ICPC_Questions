#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    // remove all factors of 2
    while (n % 2 == 0)
        n /= 2;

    vector<int> v;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
            if (i != n / i)
                v.push_back(n / i);
        }
    }

    sort(v.begin(), v.end());

    for (int x : v)
        cout << x << "\n";

    return 0;
}